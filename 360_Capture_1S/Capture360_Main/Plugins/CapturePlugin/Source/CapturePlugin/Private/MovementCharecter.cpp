// Fill out your copyright notice in the Description page of Project Settings.


#include "MovementCharecter.h"
#include "InputMappingContext.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "Custom2DCaptureComp.h"
#include "HDRI_Cube.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/Engine.h"
#include "Engine/World.h"
#include "InputCoreTypes.h"
#include "Runtime/Engine/Public/TimerManager.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AMovementCharecter::AMovementCharecter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("Spring Arm");
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->bUsePawnControlRotation = true;
	SpringArm->TargetArmLength = 0.0f;
	SpringArm->SetRelativeLocation(FVector(0.0f, 0.0f, 95.0f));
	
	//Setting Camera As Root
	Camera = CreateDefaultSubobject<UCameraComponent>("Camera");
	Camera->SetupAttachment(SpringArm);
	GetCharacterMovement()->bOrientRotationToMovement = false;

	//Input Mapping
	ConstructorHelpers::FObjectFinder<UInputMappingContext> InputMap(TEXT("/Game/Dependencies/Inputs/Mapping.Mapping"));
	ConstructorHelpers::FObjectFinder<UInputAction> MoveAct(TEXT("/Game/Dependencies/Inputs/IA_Move.IA_Move"));
	ConstructorHelpers::FObjectFinder<UInputAction> LookAct(TEXT("/Game/Dependencies/Inputs/IA_Look.IA_Look"));
	ConstructorHelpers::FObjectFinder<UInputAction> AnyKeyAct(TEXT("/Game/Dependencies/Inputs/IA_AnyKey.IA_AnyKey"));
	
	InputMapping = InputMap.Object;
	MoveAction = MoveAct.Object;
	LookAction = LookAct.Object;
	AnyKeyAction = AnyKeyAct.Object;
	GetCharacterMovement()->MaxWalkSpeed = 100.0f;
	
}

// Called when the game starts or when spawned
void AMovementCharecter::BeginPlay()
{
	Super::BeginPlay();
	PlayerController = Cast<APlayerController>(Controller);
	if(PlayerController)
	{
		if(UEnhancedInputLocalPlayerSubsystem* Subsytem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsytem->AddMappingContext(InputMapping, 0);
		}
	}
}

// Called every frame
void AMovementCharecter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	VelocityLen = GetVelocity().Length();
	AutoCapture();
//	UE_LOG(LogTemp, Warning, TEXT("Current Velocity: %f"), VelocityLen);
	
}

// Binds The Input Actions With Funtions
void AMovementCharecter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if(UEnhancedInputComponent* Input = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		Input->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AMovementCharecter::Move );
		Input->BindAction(LookAction, ETriggerEvent::Triggered, this, &AMovementCharecter::Look );
		Input->BindAction(JumpAction, ETriggerEvent::Triggered, this, &AMovementCharecter::Jump );
		Input->BindAction(MoveAction, ETriggerEvent::Started, this, &AMovementCharecter::MoveKeyPressed);
		Input->BindAction(MoveAction, ETriggerEvent::Completed, this, &AMovementCharecter::MoveKeyReleased);
	}
}

//Moving WASD
void AMovementCharecter::Move(const FInputActionValue& InputValue)
{
	FVector2d InputVector = InputValue.Get<FVector2d>();
	float InputVectorLen = InputVector.Length();
	if (IsValid(Controller)&& InputVectorLen > 0.0f)
	{
		bIsMoving=true;
		//Getting Vector Directions
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation (0, Rotation.Yaw, 0);
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		//Movement Forward And Right
		AddMovementInput(ForwardDirection, InputVector.Y);
		AddMovementInput(RightDirection, InputVector.X);
	}
}

//Looking Around
void AMovementCharecter::Look(const FInputActionValue& InputValue)
{
	FVector2d InputVector = InputValue.Get<FVector2d>();
	if (IsValid(Controller))
	{
		AddControllerYawInput(InputVector.X);
		AddControllerPitchInput(InputVector.Y);
	}
}

//Jump Functionality
void AMovementCharecter::Jump()
{
//	UE_LOG(LogTemp, Warning, TEXT("Debug"));
	Super::Jump();
}

//Destroying Camera After Clicking Pic
void AMovementCharecter::DestroyCam()
{
	MainScanCamera->Destroy();
	SpawnsHdriSphere();
}

//Automatically Captures Pic When Player Stops
void AMovementCharecter::AutoCapture()
{
	if (VelocityLen > 1.0f)
	{
//		UE_LOG(LogTemp, Warning, TEXT("DontSpawnActor"));
		bHasSpawnedCamera = false;
//		If any HDRI sphere is found, destroy it
		TArray<AActor*> FoundHdriCube;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AHDRI_Cube::StaticClass(), FoundHdriCube);
		for (AActor* Actor : FoundHdriCube)
		{
			if (AHDRI_Cube* ExistingHdriCube = Cast<AHDRI_Cube>(Actor))
			{
				ExistingHdriCube->Destroy();
			}
		}
	}
	if(VelocityLen == 0.0f && !bIsMoving) 
	{
//		UE_LOG(LogTemp, Warning, TEXT("SpawnActor"));
		
		if (!bHasSpawnedCamera)
		{
			FTimerHandle Handle;
			FActorSpawnParameters SpawnParms;
			SpawnParms.Instigator = this;
			FVector SpawnLocation = Camera->GetComponentLocation();
			FRotator SpawnRotation;
//			Camera->GetComponentRotation();
			MainScanCamera = GetWorld()->SpawnActor<ACustom2DCaptureComp>(SpawnLocation, SpawnRotation, SpawnParms);
			GetWorld()->GetTimerManager().SetTimer(Handle, this, &AMovementCharecter::DestroyCam, 0.02f);
			bHasSpawnedCamera = true;
			
			
		}
	}
}
//Detects is Move keys are pressed
void AMovementCharecter::MoveKeyPressed()
{
	bIsMoving = true;
//	UE_LOG(LogTemp, Warning, TEXT("Pressed"));
}

//Detects is Move keys are relesed
void AMovementCharecter::MoveKeyReleased()
{
	bIsMoving = false;
//	UE_LOG(LogTemp, Warning, TEXT("Released"));
}

//Spawn HDRI sphere
void AMovementCharecter::SpawnsHdriSphere()
{
	// Check for existing HDRI spheres
	TArray<AActor*> FoundHdriCube;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AHDRI_Cube::StaticClass(), FoundHdriCube);

	// If any HDRI sphere is found, destroy it
	for (AActor* Actor : FoundHdriCube)
	{
		if (AHDRI_Cube* ExistingHdriCube = Cast<AHDRI_Cube>(Actor))
		{
			ExistingHdriCube->Destroy();
//			UE_LOG(LogTemp, Warning, TEXT("Destroyed existing HDRI sphere"));
			FActorSpawnParameters SpawnParams;
			SpawnParams.Instigator = this;
			FVector SpawnLocation = Camera->GetComponentLocation();
			FRotator SpawnRotation;
			// Camera->GetComponentRotation();
			AHDRI_Cube* ActHdriCube = GetWorld()->SpawnActor<AHDRI_Cube>(SpawnLocation, SpawnRotation, SpawnParams);
//			return; // Exit after destroying the existing sphere
		}
	}

	// If no HDRI sphere was found, spawn a new one
	FActorSpawnParameters SpawnParams;
	SpawnParams.Instigator = this;

	FVector SpawnLocation = Camera->GetComponentLocation();
	FRotator SpawnRotation;
	AHDRI_Cube* ActHdriCube = GetWorld()->SpawnActor<AHDRI_Cube>(SpawnLocation, SpawnRotation, SpawnParams);
	
}



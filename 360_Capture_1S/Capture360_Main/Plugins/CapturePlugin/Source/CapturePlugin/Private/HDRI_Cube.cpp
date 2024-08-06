// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Materials/Material.h"
#include "HDRI_Cube.h"
#include "Components/PostProcessComponent.h"


// Sets default values
AHDRI_Cube::AHDRI_Cube()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = RootComp;
	Plane_1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane_1"));
	Plane_2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane_2"));
	Plane_3 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane_3"));
	Plane_4 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane_4"));
	Plane_5 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane_5"));
	Plane_6 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Plane_6"));
	PostProcess = CreateDefaultSubobject<UPostProcessComponent>(TEXT("Post Process"));
	
	Setup(Plane_1);
	Setup(Plane_2);
	Setup(Plane_3);
	Setup(Plane_4);
	Setup(Plane_5);
	Setup(Plane_6);
	
	// Attach planes to the root component
	Plane_1->SetupAttachment(RootComponent);
	Plane_2->SetupAttachment(RootComponent);
	Plane_3->SetupAttachment(RootComponent);
	Plane_4->SetupAttachment(RootComponent);
	Plane_5->SetupAttachment(RootComponent);
	Plane_6->SetupAttachment(RootComponent);
	PostProcess->SetupAttachment(RootComponent);
	
	// Disable shadow casting and light interaction for all planes
	Plane_1->SetCastShadow(false);
	Plane_2->SetCastShadow(false);
	Plane_3->SetCastShadow(false);
	Plane_4->SetCastShadow(false);
	Plane_5->SetCastShadow(false);
	Plane_6->SetCastShadow(false);

	//Disable Decals
	Plane_1->SetReceivesDecals(false);
	Plane_2->SetReceivesDecals(false);
	Plane_3->SetReceivesDecals(false);
	Plane_4->SetReceivesDecals(false);
	Plane_5->SetReceivesDecals(false);
	Plane_6->SetReceivesDecals(false);

	// Disable light interaction for all planes
	Plane_1->LightingChannels.bChannel0 = false;
	Plane_2->LightingChannels.bChannel0 = false;
	Plane_3->LightingChannels.bChannel0 = false;
	Plane_4->LightingChannels.bChannel0 = false;
	Plane_5->LightingChannels.bChannel0 = false;
	Plane_6->LightingChannels.bChannel0 = false;
	
	FPostProcessSettings& PostProcessSettings = PostProcess->Settings;
	//PostProcessSettings.bOverride_AutoExposureBias = true;
	//PostProcessSettings.AutoExposureMaxBrightness = -1.6f;
	PostProcessSettings.bOverride_AutoExposureMinBrightness = true;
	PostProcessSettings.AutoExposureMinBrightness = -1.1f; // Setting Min EV
	PostProcessSettings.bOverride_AutoExposureMaxBrightness = true;
	PostProcessSettings.AutoExposureMaxBrightness =-1.1f; // Setting Max EV

	// Color Grading to make the scene warmer
	PostProcessSettings.bOverride_WhiteTemp = true;
	PostProcessSettings.WhiteTemp = 6300.0f; // Increase the white balance temperature

	PostProcessSettings.bOverride_ColorSaturation = true;
	PostProcessSettings.ColorSaturation = FVector4(1.1f, 1.05f, 1.0f, 1.0f); // Slightly lower saturation

	PostProcessSettings.bOverride_ColorContrast = true;
	PostProcessSettings.ColorContrast = FVector4(1.05f, 1.025f, 1.0f, 1.0f); // Adjust contrast slightly for warmth effect

	PostProcessSettings.bOverride_ColorGamma = true;
	PostProcessSettings.ColorGamma = FVector4(1.0f, 1.0f, 0.975f, 1.0f); // Adjust gamma slightly for warmth effect
	
	// Apply additional settings if necessary
	PostProcess->Settings = PostProcessSettings;
	
	Plane_1->SetRelativeLocation(FVector(0.0, 0.0, 0.0));
	Plane_1->SetRelativeRotation(FRotator(0.0, 90.0, 0.0));
	
	Plane_2->SetRelativeLocation(FVector(0.0, 50.0, 50.0));
	Plane_2->SetRelativeRotation(FRotator(0.0, 180.0, -270.0));

	Plane_3->SetRelativeLocation(FVector(0.0, -50.0, 50.0));
	Plane_3->SetRelativeRotation(FRotator(0.0, 0.0, 90.0));

	Plane_4->SetRelativeLocation(FVector(50.0, 0.0, 50.0));
	Plane_4->SetRelativeRotation(FRotator(0.0, 90.0, 90.0));

	Plane_5->SetRelativeLocation(FVector(-50.0, 0.0, 50.0));
	Plane_5->SetRelativeRotation(FRotator(0.0, 270.0, -270.0));

	Plane_6->SetRelativeLocation(FVector(0.0, 0.0, 100.0));
	Plane_6->SetRelativeRotation(FRotator(0.0, 90.0, -180.0));

	ConstructorHelpers::FObjectFinder<UMaterial> Bottom(TEXT("/Game/Dependencies/Cube/Buttom.Buttom"));
	Plane_1->SetMaterial(0, Bottom.Object);

	ConstructorHelpers::FObjectFinder<UMaterial> Left(TEXT("/Game/Dependencies/Cube/Left.Left"));
	Plane_2->SetMaterial(0, Left.Object);

	ConstructorHelpers::FObjectFinder<UMaterial> Right(TEXT("/Game/Dependencies/Cube/Right.Right"));
	Plane_3->SetMaterial(0, Right.Object);

	ConstructorHelpers::FObjectFinder<UMaterial> Front(TEXT("/Game/Dependencies/Cube/Front.Front"));
	Plane_4->SetMaterial(0, Front.Object);

	ConstructorHelpers::FObjectFinder<UMaterial> Back(TEXT("/Game/Dependencies/Cube/Back.Back"));
	Plane_5->SetMaterial(0, Back.Object);
	
	ConstructorHelpers::FObjectFinder<UMaterial> Top(TEXT("/Game/Dependencies/Cube/Top.Top"));
	Plane_6->SetMaterial(0, Top.Object);
	
	SetActorScale3D(FVector(1,1,1));
	SetActorRelativeLocation(FVector(0.0f, 0.0f, -50.0f));
	

}

// Called when the game starts or when spawned
void AHDRI_Cube::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AHDRI_Cube::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AHDRI_Cube::Setup(UStaticMeshComponent* Mesh)
{
	Mesh->SetupAttachment(RootComp);
	ConstructorHelpers::FObjectFinder<UStaticMesh> Test(TEXT("/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane"));
	Mesh->SetStaticMesh(Test.Object);
}


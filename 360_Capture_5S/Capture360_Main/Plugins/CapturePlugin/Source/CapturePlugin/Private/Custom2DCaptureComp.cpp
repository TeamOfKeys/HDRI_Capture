// Fill out your copyright notice in the Description page of Project Settings.


#include "Custom2DCaptureComp.h"

#include "Components/SceneCaptureComponent2D.h"
#include "Components/SceneCaptureComponentCube.h"
#include "HDRI_Cube.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACustom2DCaptureComp::ACustom2DCaptureComp()
{
	    PrimaryActorTick.bCanEverTick = true;

    // Initialize scene capture components
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Root->SetupAttachment(RootComponent);
    CaptureComponentPosX = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponentPosX"));
	CaptureComponentPosX->SetRelativeRotation(FRotator(0.0f , 0.0f , 0.0f));
	FPostProcessSettings& PostProcessSettingsPosX = CaptureComponentPosX->PostProcessSettings;
	PostProcessSettingsPosX.bOverride_DynamicGlobalIlluminationMethod = true;
	PostProcessSettingsPosX.DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
	PostProcessSettingsPosX.IndirectLightingColor = FLinearColor(1.0f, 1.0f, 1.0f);
	PostProcessSettingsPosX.bOverride_IndirectLightingColor = true;
	PostProcessSettingsPosX.IndirectLightingIntensity = 0.0f;
	PostProcessSettingsPosX.bOverride_IndirectLightingIntensity = true;
	CaptureComponentPosX->bCaptureEveryFrame=false;
	CaptureComponentPosX->ShowFlags.LumenReflections = true;
	CaptureComponentPosX->bUseRayTracingIfEnabled = true;
	
    CaptureComponentNegX = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponentNegX"));
	CaptureComponentNegX->SetRelativeRotation(FRotator(0.0f , 180.0f , 0.0f));
	CaptureComponentNegX->bCaptureEveryFrame=false;
	FPostProcessSettings& PostProcessSettingsNegX = CaptureComponentNegX->PostProcessSettings;
	PostProcessSettingsNegX.bOverride_DynamicGlobalIlluminationMethod = true;
	PostProcessSettingsNegX.DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
	PostProcessSettingsNegX.IndirectLightingColor = FLinearColor(1.0f, 1.0f, 1.0f);
	PostProcessSettingsNegX.bOverride_IndirectLightingColor = true;
	PostProcessSettingsNegX.IndirectLightingIntensity = 0.0f;
	PostProcessSettingsNegX.bOverride_IndirectLightingIntensity = true;
	PostProcessSettingsNegX.bOverride_WhiteTemp = true;
	PostProcessSettingsNegX.WhiteTemp = 6500.0f; // Adjust the temperature to make the scene warmer (higher value makes it warmer)
	PostProcessSettingsNegX.bOverride_ColorSaturation = true;
	PostProcessSettingsNegX.ColorSaturation = FVector4(1.2f, 1.1f, 1.0f, 1.0f);
	CaptureComponentNegX->bUseRayTracingIfEnabled = true;
	
    CaptureComponentPosY = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponentPosY"));
	CaptureComponentPosY->SetRelativeRotation(FRotator(0.0f , 90.0f , 0.0f));
	CaptureComponentPosY->bCaptureEveryFrame=false;
	FPostProcessSettings& PostProcessSettingsPosY = CaptureComponentPosY->PostProcessSettings;
	PostProcessSettingsPosY.bOverride_DynamicGlobalIlluminationMethod = true;
	PostProcessSettingsPosY.DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
	PostProcessSettingsPosY.IndirectLightingColor = FLinearColor(1.0f, 1.0f, 1.0f);
	PostProcessSettingsPosY.bOverride_IndirectLightingColor = true;
	PostProcessSettingsPosY.IndirectLightingIntensity = 0.0f;
	PostProcessSettingsPosY.bOverride_IndirectLightingIntensity = true;
	PostProcessSettingsPosY.bOverride_WhiteTemp = true;
	PostProcessSettingsPosY.WhiteTemp = 6500.0f; // Adjust the temperature to make the scene warmer (higher value makes it warmer)
	PostProcessSettingsPosY.bOverride_ColorSaturation = true;
	PostProcessSettingsPosY.ColorSaturation = FVector4(1.2f, 1.1f, 1.0f, 1.0f);
	CaptureComponentPosY->bUseRayTracingIfEnabled = true;
	
    CaptureComponentNegY = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponentNegY"));
	CaptureComponentNegY->SetRelativeRotation(FRotator(0.0f , -90.0f , 0.0f));
	CaptureComponentNegY->bCaptureEveryFrame=false;
	FPostProcessSettings& PostProcessSettingsNegY = CaptureComponentNegY->PostProcessSettings;
	PostProcessSettingsNegY.bOverride_DynamicGlobalIlluminationMethod = true;
	PostProcessSettingsNegY.DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
	PostProcessSettingsNegY.IndirectLightingColor = FLinearColor(1.0f, 1.0f, 1.0f);
	PostProcessSettingsNegY.bOverride_IndirectLightingColor = true;
	PostProcessSettingsNegY.IndirectLightingIntensity = 0.0f;
	PostProcessSettingsNegY.bOverride_IndirectLightingIntensity = true;
	PostProcessSettingsNegY.bOverride_WhiteTemp = true;
	PostProcessSettingsNegY.WhiteTemp = 10000.0f; // Adjust the temperature to make the scene warmer (higher value makes it warmer)
	PostProcessSettingsNegY.bOverride_ColorSaturation = true;
	PostProcessSettingsNegY.ColorSaturation = FVector4(1.2f, 1.1f, 1.0f, 1.0f);
	CaptureComponentNegY->bUseRayTracingIfEnabled = true;
	
    CaptureComponentPosZ = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponentPosZ"));
	CaptureComponentPosZ->SetRelativeRotation(FRotator(90.0f , 0.0f , 0.0f));
	CaptureComponentPosZ->bCaptureEveryFrame=false;
	FPostProcessSettings& PostProcessSettingsPosZ = CaptureComponentPosZ->PostProcessSettings;
	PostProcessSettingsPosZ.bOverride_DynamicGlobalIlluminationMethod = true;
	PostProcessSettingsPosZ.DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
	PostProcessSettingsPosZ.IndirectLightingColor = FLinearColor(1.0f, 1.0f, 1.0f);
	PostProcessSettingsPosZ.bOverride_IndirectLightingColor = true;
	PostProcessSettingsPosZ.IndirectLightingIntensity = 0.0f;
	PostProcessSettingsPosZ.bOverride_IndirectLightingIntensity = true;
	PostProcessSettingsPosZ.bOverride_WhiteTemp = true;
	PostProcessSettingsPosZ.WhiteTemp = 6500.0f; // Adjust the temperature to make the scene warmer (higher value makes it warmer)
	PostProcessSettingsPosZ.bOverride_ColorSaturation = true;
	PostProcessSettingsPosZ.ColorSaturation = FVector4(1.2f, 1.1f, 1.0f, 1.0f);
	CaptureComponentPosZ->bUseRayTracingIfEnabled = true;
	
    CaptureComponentNegZ = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("CaptureComponentNegZ"));
	CaptureComponentNegZ->SetRelativeRotation(FRotator(-90.0f , 0.0f , 0.0f));
	CaptureComponentNegZ->bCaptureEveryFrame=false;
	FPostProcessSettings& PostProcessSettingsNegZ = CaptureComponentNegZ->PostProcessSettings;
	PostProcessSettingsNegZ.bOverride_DynamicGlobalIlluminationMethod = true;
	PostProcessSettingsNegZ.DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
	PostProcessSettingsNegZ.IndirectLightingColor = FLinearColor(1.0f, 1.0f, 1.0f);
	PostProcessSettingsNegZ.bOverride_IndirectLightingColor = true;
	PostProcessSettingsNegZ.IndirectLightingIntensity = 0.0f;
	PostProcessSettingsNegZ.bOverride_IndirectLightingIntensity = true;
	PostProcessSettingsNegZ.bOverride_WhiteTemp = true;
	PostProcessSettingsNegZ.WhiteTemp = 6500.0f; // Adjust the temperature to make the scene warmer (higher value makes it warmer)
	PostProcessSettingsNegZ.bOverride_ColorSaturation = true;
	PostProcessSettingsNegZ.ColorSaturation = FVector4(1.2f, 1.1f, 1.0f, 1.0f);
	CaptureComponentNegZ->bUseRayTracingIfEnabled = true;
	
	CaptureComponentPosX->bCaptureEveryFrame = true;
	CaptureComponentNegX->bCaptureEveryFrame = true;
	CaptureComponentPosY->bCaptureEveryFrame = true;
	CaptureComponentNegY->bCaptureEveryFrame = true;
	CaptureComponentPosZ->bCaptureEveryFrame = true;
	CaptureComponentNegZ->bCaptureEveryFrame = true;
	
    CaptureComponentPosX->SetupAttachment(Root);
    CaptureComponentNegX->SetupAttachment(Root);
    CaptureComponentPosY->SetupAttachment(Root);
    CaptureComponentNegY->SetupAttachment(Root);
    CaptureComponentPosZ->SetupAttachment(Root);
    CaptureComponentNegZ->SetupAttachment(Root);

    // Initialize render targets
    RenderTargetPosX = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("RenderTargetPosX"));
    RenderTargetNegX = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("RenderTargetNegX"));
    RenderTargetPosY = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("RenderTargetPosY"));
    RenderTargetNegY = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("RenderTargetNegY"));
    RenderTargetPosZ = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("RenderTargetPosZ"));
    RenderTargetNegZ = CreateDefaultSubobject<UTextureRenderTarget2D>(TEXT("RenderTargetNegZ"));

	FindRenderTarget();


}

// Called when the game starts or when spawned
void ACustom2DCaptureComp::BeginPlay()
{
	Super::BeginPlay();
	FPostProcessSettings& PostProcessSettingsPosX = CaptureComponentPosX->PostProcessSettings;
	PostProcessSettingsPosX.bOverride_DynamicGlobalIlluminationMethod = true;
	PostProcessSettingsPosX.DynamicGlobalIlluminationMethod = EDynamicGlobalIlluminationMethod::Lumen;
	CaptureSceneToCubemap();
}

// Called every frame
void ACustom2DCaptureComp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// Find all actors of the HDRI Cube class
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AHDRI_Cube::StaticClass(), FoundActors);

	for (AActor* Actor : FoundActors)
	{
		// Add the HDRI Cube to the HiddenActors array
		CaptureComponentPosX->HiddenActors.Add(Actor);
		CaptureComponentNegX->HiddenActors.Add(Actor);
		CaptureComponentPosY->HiddenActors.Add(Actor);
		CaptureComponentNegY->HiddenActors.Add(Actor);
		CaptureComponentPosZ->HiddenActors.Add(Actor);
		CaptureComponentNegZ->HiddenActors.Add(Actor);
		break; // Assuming only one HDRI Cube to hide
		
	}
}

void ACustom2DCaptureComp::CaptureSceneToCubemap()
{
	// Capture the scene
	CaptureComponentPosX->TextureTarget = RenderTargetPosX;
	CaptureComponentNegX->TextureTarget = RenderTargetNegX;
	CaptureComponentPosY->TextureTarget = RenderTargetPosY;
	CaptureComponentNegY->TextureTarget = RenderTargetNegY;
	CaptureComponentPosZ->TextureTarget = RenderTargetPosZ;
	CaptureComponentNegZ->TextureTarget = RenderTargetNegZ;
	// Create the cubemap from the captured render targets
	
	
}

void ACustom2DCaptureComp::FindRenderTarget()
{
	ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> TextureAssetPosX(TEXT("/Game/Dependencies/CubeRT/X.X"));
	if (TextureAssetPosX.Succeeded())
	{
		RenderTargetPosX = TextureAssetPosX.Object;
		//		UE_LOG(LogTemp, Warning, TEXT("Found Texture")); 
	}
	ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> TextureAssetNegX(TEXT("/Game/Dependencies/CubeRT/-X.-X"));
	if (TextureAssetNegX.Succeeded())
	{
		RenderTargetNegX = TextureAssetNegX.Object;
		//		UE_LOG(LogTemp, Warning, TEXT("Found Texture")); 
	}
	ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> TextureAssetPosY(TEXT("/Game/Dependencies/CubeRT/Y.Y"));
	if (TextureAssetPosY.Succeeded())
	{
		RenderTargetPosY = TextureAssetPosY.Object;
		//		UE_LOG(LogTemp, Warning, TEXT("Found Texture")); 
	}
	ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> TextureAssetNegY(TEXT("/Game/Dependencies/CubeRT/-Y.-Y"));
	if (TextureAssetNegY.Succeeded())
	{
		RenderTargetNegY = TextureAssetNegY.Object;
		//		UE_LOG(LogTemp, Warning, TEXT("Found Texture")); 
	}

	ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> TextureAssetPosZ(TEXT("/Game/Dependencies/CubeRT/Z.Z"));
	if (TextureAssetPosZ.Succeeded())
	{
		RenderTargetPosZ = TextureAssetPosZ.Object;
		//		UE_LOG(LogTemp, Warning, TEXT("Found Texture")); 
	}
	ConstructorHelpers::FObjectFinder<UTextureRenderTarget2D> TextureAssetNegZ(TEXT("/Game/Dependencies/CubeRT/-Z.-Z"));
	if (TextureAssetNegZ.Succeeded())
	{
		RenderTargetNegZ = TextureAssetNegZ.Object;
		//		UE_LOG(LogTemp, Warning, TEXT("Found Texture")); 
	}
}



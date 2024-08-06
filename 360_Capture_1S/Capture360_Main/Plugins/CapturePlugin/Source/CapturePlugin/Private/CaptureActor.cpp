// Fill out your copyright notice in the Description page of Project Settings.


#include "CaptureActor.h"
#include "MovieSceneSequenceID.h"
#include "Components/PostProcessComponent.h"
#include "Components/SceneCaptureComponentCube.h"
#include "Engine/TextureRenderTargetCube.h"


// Sets default values
ACaptureActor::ACaptureActor(): Camera(), AssignedTexture()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Setting Camera As Root
	Camera = CreateDefaultSubobject<USceneCaptureComponentCube>(TEXT("Scene Capture Cube"));
//	Camera->CaptureSource = ESceneCaptureSource::SCS_FinalToneCurveHDR;
	Camera->PrimitiveRenderMode =ESceneCapturePrimitiveRenderMode::PRM_RenderScenePrimitives;
	// Disable capturing every frame
	Camera->bCaptureEveryFrame = false;
	// Enable Always Persist Rendering State
	Camera->bAlwaysPersistRenderingState = true;
	Camera->ShowFlags.SetAntiAliasing(false);
	Camera->ShowFlags.SetPostProcessing(true);
	Camera->ShowFlags.SetLumenReflections(true);
	Camera->ShowFlags.SetScreenSpaceReflections(true);
	Camera->ShowFlags.SetDynamicShadows(true);
	Camera->bUseRayTracingIfEnabled = true;
//	Camera->TextureTarget->InitAutoFormat(4096); // Even higher resolution if needed
	
	// Create and configure the post-process component
	RootComponent = Camera;
	PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PostProcessComponent"));
	PostProcessComponent->SetupAttachment(Camera);
//	ColorCrading();
	
	
	// Find and assign the texture from Content Drawer
	ConstructorHelpers::FObjectFinder<UTextureRenderTargetCube> TextureAsset(TEXT("/Game/Dependencies/Testing.Testing"));
	if (TextureAsset.Succeeded())
	{
		AssignedTexture = TextureAsset.Object;
//		UE_LOG(LogTemp, Warning, TEXT("Found Texture")); 
	}
	else
	{
		AssignedTexture = NewObject<UTextureRenderTargetCube>();
//		UE_LOG(LogTemp, Warning, TEXT("Failed to find texture asset"));
	}
	
}

// Called when the game starts or when spawned
void ACaptureActor::BeginPlay()
{
	bool bHasCapturedScene = false;
	Super::BeginPlay();
	ColorGrading();
	if (!bHasCapturedScene)
	{
		AssignedTexture->Init(2048, PF_FloatRGBA); // Initialize with desired size and format
		AssignedTexture->ClearColor = FLinearColor::Black;
		AssignedTexture->UpdateResourceImmediate(true);
		Camera->TextureTarget = AssignedTexture;
		UE_LOG(LogTemp, Warning, TEXT("Capture Being Saved"));
	}

}

// Called every frame
void ACaptureActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ACaptureActor::ColorGrading()
{
	//Post Process Settings
	FPostProcessSettings& PostProcessSettings = PostProcessComponent->Settings;

}


// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/PostProcessComponent.h"
#include "CaptureActor.generated.h"

UCLASS()
class CAPTUREPLUGIN_API ACaptureActor : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACaptureActor();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	void ColorGrading();
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UPostProcessComponent* PostProcessComponent;

	//Cube Capture Component
	UPROPERTY(EditAnywhere);
	USceneCaptureComponentCube* Camera;

	// Cube Texture Which would be Assigned
	UPROPERTY(EditAnywhere);
	UTextureRenderTargetCube* AssignedTexture;
};

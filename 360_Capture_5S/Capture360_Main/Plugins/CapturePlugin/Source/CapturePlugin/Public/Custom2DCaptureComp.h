// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Custom2DCaptureComp.generated.h"

UCLASS()
class CAPTUREPLUGIN_API ACustom2DCaptureComp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACustom2DCaptureComp();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	USceneComponent* Root;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	USceneCaptureComponent2D* CaptureComponentPosX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	USceneCaptureComponent2D* CaptureComponentNegX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	USceneCaptureComponent2D* CaptureComponentPosY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	USceneCaptureComponent2D* CaptureComponentNegY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	USceneCaptureComponent2D* CaptureComponentPosZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	USceneCaptureComponent2D* CaptureComponentNegZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	UTextureRenderTarget2D* RenderTargetPosX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	UTextureRenderTarget2D* RenderTargetNegX;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	UTextureRenderTarget2D* RenderTargetPosY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	UTextureRenderTarget2D* RenderTargetNegY;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	UTextureRenderTarget2D* RenderTargetPosZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	UTextureRenderTarget2D* RenderTargetNegZ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Capture")
	UTextureCube* CubemapTexture;

	UFUNCTION(BlueprintCallable, Category = "Capture")
	void CaptureSceneToCubemap();

private:	
	void CreateCubemap();
	void FindRenderTarget();
};

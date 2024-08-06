// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/PostProcessComponent.h"
#include "GameFramework/Actor.h"
#include "HDRI_Cube.generated.h"

UCLASS()
class CAPTUREPLUGIN_API AHDRI_Cube : public AActor
{
	GENERATED_BODY()

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USceneComponent* Check;
	
	UPROPERTY(VisibleAnywhere)
	UPostProcessComponent* PostProcess;

public:
	// Sets default values for this actor's properties
	AHDRI_Cube();
	
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Plane_1;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Plane_2;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Plane_3;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Plane_4;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Plane_5;
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Plane_6;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
protected:
	void Setup (UStaticMeshComponent* Mesh);
};

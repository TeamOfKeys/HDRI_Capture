// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/StaticMeshComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "HdriSphere.h"

// Sets default values
AHdriSphere::AHdriSphere()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
	RootComponent = CubeMesh;
	ConstructorHelpers::FObjectFinder<UStaticMesh> CubeAsset(TEXT("/Game/StarterContent/EnviroDome.EnviroDome"));
	if (CubeAsset.Succeeded())
	{
		CubeMesh->SetStaticMesh(CubeAsset.Object);
	}
	CubeMesh->CastShadow = false;
	CubeMesh->bAffectDynamicIndirectLighting = false;
	CubeMesh->bCastStaticShadow = false;
	CubeMesh->SetWorldScale3D(FVector(3,3,3));
	CubeMesh->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));
}

// Called when the game starts or when spawned
void AHdriSphere::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHdriSphere::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


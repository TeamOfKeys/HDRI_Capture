
#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputMappingContext.h"
#include "InputActionValue.h"
#include "InputCoreTypes.h"
#include "EnhancedInputComponent.h"
#include "MovementCharecter.generated.h"

UCLASS()
class CAPTUREPLUGIN_API AMovementCharecter : public ACharacter
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"));
	class UCameraComponent* Camera;
	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"));
	class USpringArmComponent* SpringArm;
	
	
	
public:
	// Sets default values for this character's properties
	AMovementCharecter();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	float VelocityLen;
	AActor* MainScanCamera;
	APlayerController* PlayerController;
	AActor* HdriSphere;

	UPROPERTY(EditAnywhere)
	bool bIsMoving = false;
	
protected:
	bool bHasSpawnedCamera = false;
	
	//Mapping Menu
	UPROPERTY(VisibleDefaultsOnly, Category ="EnchancedInput")
	class UInputMappingContext* InputMapping;
	
	//Action Menu
	UPROPERTY(VisibleDefaultsOnly, Category ="EnchancedInput")
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, Category ="EnchancedInput")
	class UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category ="EnchancedInput")
	class UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category ="EnchancedInput")
	class UInputAction* AnyKeyAction;
	
	
	
protected:
// Creating Functions
	void MoveKeyPressed();
	void MoveKeyReleased();
	void Move(const FInputActionValue & InputValue);
	void Look(const FInputActionValue & InputValue);
	void Jump();
	void DestroyCam();
	void AutoCapture();
	void SpawnsHdriSphere();
};

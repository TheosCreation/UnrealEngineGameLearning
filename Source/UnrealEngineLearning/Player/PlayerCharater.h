#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharater.generated.h"

UCLASS()
class UNREALENGINELEARNING_API APlayerCharater : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharater();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void ScrollWeapon(float Input);
	void EquipWeapon(int32 Index);

	void MoveForward(float Input);
	void MoveRight(float Input);

	void LookUp(float Input);
	void LookRight(float Input);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BeginFiring();
	void EndFiring();

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool IsMoving = false;
	FVector2D InputVector;

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<class AGun>> WeaponClasses;


	UPROPERTY(EditAnywhere)
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CameraTilt)
	float CameraTiltAmount = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CameraTilt)
	float CameraTiltSmoothTiming = 5.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	USceneComponent* WeaponSocket;

private:
	AGun* CurrentWeapon = nullptr;
	int32 CurrentWeaponIndex = 0;
	float CurrentRoll = 0;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "RTSTest.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Observer.generated.h"

UCLASS()
class RTSTEST_API AObserver : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AObserver();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void PostInitializeComponents() override;

public:
	
	UPROPERTY(VisibleAnywhere, Category = Character)
		UCapsuleComponent* capsule;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		UCameraComponent* cam;

	UPROPERTY(VisibleAnywhere, Category = Camera)
		USpringArmComponent* springArm;

	UPROPERTY(VisibleAnywhere, Category = Movement)
		UFloatingPawnMovement* movement;

private:

	void MoveLR(float moveInput);
	void MoveFB(float moveInput);
	void MoveUD(float moveInput);

	void LookUD(float lookInput);
	void Turn(float lookInput);
};

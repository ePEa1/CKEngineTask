// Fill out your copyright notice in the Description page of Project Settings.


#include "Observer.h"

// Sets default values
AObserver::AObserver()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CAPSULE"));
	cam = CreateDefaultSubobject<UCameraComponent>(TEXT("CAMERA"));
	springArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SPRINGARM"));
	movement = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("MOVEMENT"));

	capsule->SetCapsuleHalfHeight(88.0f);
	capsule->SetCapsuleRadius(34.0f);

	RootComponent = capsule;
	springArm->SetupAttachment(capsule);
	cam->SetupAttachment(springArm);
}

// Called when the game starts or when spawned
void AObserver::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AObserver::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AObserver::MoveLR);
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AObserver::MoveFB);
	PlayerInputComponent->BindAxis(TEXT("ZUpDown"), this, &AObserver::MoveUD);
	PlayerInputComponent->BindAxis(TEXT("LookUp"), this, &AObserver::LookUD);
	PlayerInputComponent->BindAxis(TEXT("Turn"), this, &AObserver::Turn);
}

void AObserver::PostInitializeComponents()
{
	Super::PostInitializeComponents();
}

void AObserver::MoveLR(float moveInput)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::Y), moveInput);
}

void AObserver::MoveFB(float moveInput)
{
	AddMovementInput(FRotationMatrix(GetControlRotation()).GetUnitAxis(EAxis::X), moveInput);
}

void AObserver::MoveUD(float moveInput)
{
}

void AObserver::LookUD(float lookInput)
{
}

void AObserver::Turn(float lookInput)
{
}

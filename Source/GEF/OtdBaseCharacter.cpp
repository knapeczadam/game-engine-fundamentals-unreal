// Fill out your copyright notice in the Description page of Project Settings.


#include "OtdBaseCharacter.h"

// Sets default values
AOtdBaseCharacter::AOtdBaseCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOtdBaseCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AOtdBaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AOtdBaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


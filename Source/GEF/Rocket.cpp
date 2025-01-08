// Fill out your copyright notice in the Description page of Project Settings.


#include "Rocket.h"

// Sets default values
ARocket::ARocket()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	RootComponent = Root;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);
}

// Called when the game starts or when spawned
void ARocket::BeginPlay()
{
	Super::BeginPlay();

	UMaterialInstanceDynamic* DynamicMaterial = UMaterialInstanceDynamic::Create(Material, this);
	Mesh->SetMaterial(0, DynamicMaterial);
	DynamicMaterial->SetScalarParameterValue(TEXT("EmissivePower"), 0.01f);
	DynamicMaterial->SetVectorParameterValue(TEXT("Color"), FLinearColor::Yellow);
}

// Called every frame
void ARocket::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


// Fill out your copyright notice in the Description page of Project Settings.


#include "TestLightning.h"

// Sets default values
ATestLightning::ATestLightning()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATestLightning::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestLightning::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATestLightning::GenerateLightning()
{
	FActorSpawnParameters spawnParams;
	spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	GetWorld()->SpawnActor<AActor>(lightning, GetActorTransform(), spawnParams);
}
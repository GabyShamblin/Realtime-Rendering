// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestLightning.generated.h"

UCLASS()
class RENDERING_API ATestLightning : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestLightning();

	UFUNCTION(BlueprintCallable, Category="Weather")
	void GenerateLightning();

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> lightning;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

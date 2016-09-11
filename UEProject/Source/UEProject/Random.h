// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Random.generated.h"

UCLASS()
class UEPROJECT_API ARandom : public AActor
{
	GENERATED_BODY()
public:
	float StartHeight;
	UPROPERTY(EditAnywhere)
		float Height;
	
public:	
	// Sets default values for this actor's properties
	ARandom();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};

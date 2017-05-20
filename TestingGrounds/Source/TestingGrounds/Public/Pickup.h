// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "Pickup.generated.h"

UCLASS()
class TESTINGGROUNDS_API APickup : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	APickup();

	UPROPERTY(EditAnywhere)
		USceneComponent* pickupRoot;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* pickupMesh;

	UPROPERTY(EditAnywhere)
		UShapeComponent* pickupBox;

	float runningTime;

	UPROPERTY(EditAnywhere)
	float hoverSpeedFactor = 1;

	UPROPERTY(EditAnywhere)
	float hoverHeightFactor = 1;

	UFUNCTION()
	void OnPlayerEnterPickupBox
		(
			UPrimitiveComponent* OverlappedComp,
			AActor* otherActor,
			UPrimitiveComponent* OtherComp,
			int32 OtherBodyIndex,
			bool bFromSweep,
			const FHitResult& sweepResult
		);


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;



};

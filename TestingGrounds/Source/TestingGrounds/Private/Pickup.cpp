// Fill out your copyright notice in the Description page of Project Settings.

#include "TestingGrounds.h"
#include "Pickup.h"


// Sets default values
APickup::APickup()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pickupRoot = CreateDefaultSubobject<USceneComponent>(TEXT("pickupRoot"));
	RootComponent = pickupRoot;

	pickupMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mMesh"));
	pickupMesh->AttachToComponent(pickupRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

	pickupBox = CreateDefaultSubobject<UBoxComponent>(TEXT("pickupBox"));
	pickupBox->SetWorldScale3D(FVector(1.0f, 1.0f, 1.0f));
	pickupBox->bGenerateOverlapEvents = true;
	pickupBox->OnComponentBeginOverlap.AddDynamic(this, &APickup::OnPlayerEnterPickupBox);
	pickupBox->AttachToComponent(pickupRoot, FAttachmentTransformRules::SnapToTargetNotIncludingScale);

}

void APickup::OnPlayerEnterPickupBox(UPrimitiveComponent * OverlappedComp, AActor * otherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & sweepResult)
{
	

	Destroy();

}

void APickup::OnComponentBeginOverlap()
{
	this->Destroy();
	
}


// Called when the game starts or when spawned
void APickup::BeginPlay()
{
	Super::BeginPlay();




}

// Called every frame
void APickup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector newLocation = GetActorLocation();
	float deltaHeight = (FMath::Sin(runningTime + DeltaTime) - FMath::Sin(runningTime));

	newLocation.Z += deltaHeight * hoverHeightFactor;
	runningTime += DeltaTime * hoverSpeedFactor;

	SetActorLocation(newLocation);

}


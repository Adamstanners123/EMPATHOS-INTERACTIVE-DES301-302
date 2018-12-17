// Fill out your copyright notice in the Description page of Project Settings.

#include "PlaySound.h"
#include "Components/StaticMeshComponent.h"

// Sets default values for this component's properties
UPlaySound::UPlaySound()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
	bWantsBeginPlay = true;

	spin = 0.0f;
}


// Called when the game starts
void UPlaySound::BeginPlay()
{
	Super::BeginPlay();

	// Find owning vinyl mesh
	AActor* Owner = GetOwner();

	// Create rotator
	FRotator spinRotation = FRotator(0.0f, spin, 0.0f);

	// Set record rotation
	Owner->SetActorRotation(spinRotation);
	
}


// Called every frame
void UPlaySound::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	spin += DeltaTime;
	// ...
}


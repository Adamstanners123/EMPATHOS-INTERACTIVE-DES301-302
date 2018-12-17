// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlaySound.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ANXIETY_V1_API UPlaySound : public UActorComponent
{
	GENERATED_BODY()

public:

	// Called when the game starts
	virtual void BeginPlay() override;

	float spin;	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	// Sets default values for this component's properties
	UPlaySound();
		
	
};

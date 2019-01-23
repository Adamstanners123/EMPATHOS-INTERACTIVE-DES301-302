// Fill out your copyright notice in the Description page of Project Settings.
#pragma once
#include "Core.h"
#include "Components/ActorComponent.h"
#include "PlaySounds.generated.h"
class USoundCue;
class UAudioComponent;
class ATriggerSphere;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROTOTYPEC_API UPlaySounds : public UActorComponent
{
	GENERATED_BODY()

public :
	// Sets default values for this component's properties
	UPlaySounds();

	// Called when the game starts
	virtual void BeginPlay() override;

	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Play track 
	void playTrack();

	// Stop Track
	void stopTrack();

	// Spin record
	void spinRecord(float dt);

	// Snap vinyl to record player
	void snapToPlayer(float dt);

	// Rotation Variables
	AActor* Owner = nullptr;
	float rotationSpeed;

	// Sound variables
	UPROPERTY(BlueprintReadOnly, Category = "Audio")
		USoundCue* propellerAudioCue;

	UPROPERTY(BlueprintReadOnly, Category = "Audio")
		USoundCue* propellerStartupCue;

	UPROPERTY(EditAnywhere)
		UAudioComponent* propellerAudioComponent;

	UPROPERTY(EditAnywhere)
		ATriggerSphere* sphereTrigger;

	UPROPERTY(EditAnywhere)
		AActor* recordPlayer;

		
	
};

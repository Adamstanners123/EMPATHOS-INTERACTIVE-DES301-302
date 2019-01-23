// Fill out your copyright notice in the Description page of Project Settings.

#include "PlaySounds.h"
#include <GameFramework/Actor.h>
#include <Sound/SoundCue.h>
#include <ConstructorHelpers.h>
#include <Components/AudioComponent.h>
#include <Components/SceneComponent.h>
#include <Engine/TriggerSphere.h>

// Sets default values for this component's properties
UPlaySounds::UPlaySounds()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// Find owning vinyl
	Owner = GetOwner();

	// Set rotation speed
	rotationSpeed = 180.f;

	// Call tick every frame
	PrimaryComponentTick.bCanEverTick = true;

	// Load sound cue
	static ConstructorHelpers::FObjectFinder<USoundCue> propellerCue(TEXT("/Game/FirstPersonCPP/Sounds/Soundtrack"));

	// Store reference to sound
	propellerAudioCue = propellerCue.Object;

	// Create audio component
	propellerAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("PropellerAudioComp"));

	// Set active to false as we don't want to play the sound immediately
	propellerAudioComponent->bAutoActivate = false;

	// Crashes program
	//propellerAudioComponent->AutoAttachParent = Owner->GetRootComponent();

	// Set sound origin
	propellerAudioComponent->SetRelativeLocation(FVector(0.0f, 0.0f, 0.0f));

	propellerAudioComponent->SetSound(propellerAudioCue);

}


// Called when the game starts
void UPlaySounds::BeginPlay()
{
	Super::BeginPlay();

	// You can fade the sound in... 
	// float startTime = 9.f;
//	 float volume = 1.0f;
//	 float fadeTime = 1.0f;
//	propellerAudioComponent->FadeIn(fadeTime, volume, startTime);

//	propellerAudioComponent->Play();

}


// Called every frame
void UPlaySounds::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//spinRecord(DeltaTime);

	snapToPlayer(DeltaTime);

}

void UPlaySounds::playTrack()
{
	if (!propellerAudioComponent->IsPlaying())
	{
		propellerAudioComponent->Play();
	}

}

void UPlaySounds::stopTrack()
{
	if (propellerAudioComponent->IsPlaying())
	{
		propellerAudioComponent->Stop();
	}

}

void UPlaySounds::spinRecord(float dt)
{
	// Create a rotator
	FRotator spinRotation = Owner->GetActorRotation();

	// Increment y value
	spinRotation.Yaw += rotationSpeed * dt;

	// Set the record rotation
	Owner->SetActorRotation(spinRotation);
}

void UPlaySounds::snapToPlayer(float dt)
{

	if (sphereTrigger)
	{
		if (sphereTrigger->IsOverlappingActor((Owner)))
		{
			spinRecord(dt);
			playTrack();

			if(Owner->)
			Owner->SetActorLocation(FVector(-91, 46, 127));
		}
		else
		{
			stopTrack();
		}
	}
}


// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Anxiety_v1GameMode.h"
#include "Anxiety_v1HUD.h"
#include "Anxiety_v1Character.h"
#include "UObject/ConstructorHelpers.h"

AAnxiety_v1GameMode::AAnxiety_v1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAnxiety_v1HUD::StaticClass();
}

// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PrototypeCGameMode.h"
#include "PrototypeCHUD.h"
#include "PrototypeCCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrototypeCGameMode::APrototypeCGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = APrototypeCHUD::StaticClass();
}

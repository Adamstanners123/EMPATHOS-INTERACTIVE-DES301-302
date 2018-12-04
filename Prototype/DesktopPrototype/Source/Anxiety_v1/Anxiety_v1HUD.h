// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Anxiety_v1HUD.generated.h"

UCLASS()
class AAnxiety_v1HUD : public AHUD
{
	GENERATED_BODY()

public:
	AAnxiety_v1HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};


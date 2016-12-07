// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "OldDriVeRHud.generated.h"


UCLASS(config = Game)
class AOldDriVeRHud : public AHUD
{
	GENERATED_BODY()

public:
	AOldDriVeRHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};

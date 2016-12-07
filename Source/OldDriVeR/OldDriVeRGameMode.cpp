// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "OldDriVeR.h"
#include "OldDriVeRGameMode.h"
#include "OldDriVeRPawn.h"
#include "OldDriVeRHud.h"

AOldDriVeRGameMode::AOldDriVeRGameMode()
{
	DefaultPawnClass = AOldDriVeRPawn::StaticClass();
	HUDClass = AOldDriVeRHud::StaticClass();
}

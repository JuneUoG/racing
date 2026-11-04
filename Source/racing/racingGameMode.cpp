// Copyright Epic Games, Inc. All Rights Reserved.

#include "racingGameMode.h"
#include "racingPlayerController.h"

AracingGameMode::AracingGameMode()
{
	PlayerControllerClass = AracingPlayerController::StaticClass();
}

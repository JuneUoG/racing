// Copyright Epic Games, Inc. All Rights Reserved.

#include "racingWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UracingWheelRear::UracingWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}
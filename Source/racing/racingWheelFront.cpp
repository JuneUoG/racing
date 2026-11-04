// Copyright Epic Games, Inc. All Rights Reserved.

#include "racingWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UracingWheelFront::UracingWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}
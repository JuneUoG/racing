// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "racingPawn.h"
#include "racingSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class AracingSportsCar : public AracingPawn
{
	GENERATED_BODY()
	
public:

	AracingSportsCar();
};

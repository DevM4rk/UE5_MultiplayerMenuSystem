// Copyright Epic Games, Inc. All Rights Reserved.

#include "MenuSystemGameMode.h"
#include "UObject/ConstructorHelpers.h"

AMenuSystemGameMode::AMenuSystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/Character/BP_BlasterCharacter"));
	if (PlayerPawnBPClass.Class != NULL)			
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

// Copyright Epic Games, Inc. All Rights Reserved.

#include "GEFGameMode.h"
#include "GEFCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGEFGameMode::AGEFGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

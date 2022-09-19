// Copyright Epic Games, Inc. All Rights Reserved.

#include "LuGoSplatGameMode.h"
#include "LuGoSplatHUD.h"
#include "LuGoSplatCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALuGoSplatGameMode::ALuGoSplatGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ALuGoSplatHUD::StaticClass();
}

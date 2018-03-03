// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SlackurbatorGameMode.h"
#include "SlackurbatorPlayerController.h"
#include "SlackurbatorCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASlackurbatorGameMode::ASlackurbatorGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ASlackurbatorPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
// Copyright Epic Games, Inc. All Rights Reserved.

#include "CQB_TrainingGameMode.h"
#include "CQB_TrainingCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACQB_TrainingGameMode::ACQB_TrainingGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}

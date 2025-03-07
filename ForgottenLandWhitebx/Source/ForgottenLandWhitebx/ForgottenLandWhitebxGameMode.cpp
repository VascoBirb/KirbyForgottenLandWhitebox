// Copyright Epic Games, Inc. All Rights Reserved.

#include "ForgottenLandWhitebxGameMode.h"
#include "ForgottenLandWhitebxCharacter.h"
#include "UObject/ConstructorHelpers.h"

AForgottenLandWhitebxGameMode::AForgottenLandWhitebxGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

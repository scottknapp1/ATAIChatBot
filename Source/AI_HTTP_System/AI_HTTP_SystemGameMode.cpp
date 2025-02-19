// Copyright Epic Games, Inc. All Rights Reserved.

#include "AI_HTTP_SystemGameMode.h"
#include "AI_HTTP_SystemCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAI_HTTP_SystemGameMode::AAI_HTTP_SystemGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

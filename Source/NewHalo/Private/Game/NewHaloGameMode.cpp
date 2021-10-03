// Copyright Epic Games, Inc. All Rights Reserved.

#include "Game/NewHaloGameMode.h"

#include "NHGameInstance.h"
#include "GameUI/NewHaloHUD.h"
#include "Player/NewHaloCharacter.h"
#include "Player/NHPlayerController.h"
#include "UObject/ConstructorHelpers.h"

ANewHaloGameMode::ANewHaloGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ANewHaloHUD::StaticClass();
}

void ANewHaloGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void ANewHaloGameMode::BeginPlay()
{
	Super::BeginPlay();
	GI = Cast<UNHGameInstance>(GetGameInstance());
}

void ANewHaloGameMode::RestartPlayer(AController* NewPlayer)
{
	Super::RestartPlayer(NewPlayer);
}

void ANewHaloGameMode::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	Super::HandleStartingNewPlayer_Implementation(NewPlayer);
	auto Player = Cast<ANHPlayerController>(NewPlayer);
	if(!Player) return;
	PlayerControllers.Add(Player);
	auto PS = Player->GetPlayerState<ANHPlayerState>();
	if(!PS)
	{
		UE_LOG(LogTemp, Error, TEXT("Cant Get player state in GM!"));
		return;
	}
	auto Name = PS->GetName();
	
	
	
	
}

// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameMode.h"
#include "NewHaloGameMode.generated.h"

class UNHGameInstance;
class ANHPlayerController;
UCLASS(minimalapi)
class ANewHaloGameMode : public AGameMode
{
	GENERATED_BODY()

public:
	ANewHaloGameMode();

	virtual void Tick(float DeltaSeconds) override;
	

protected:
	virtual void BeginPlay() override;

	virtual void RestartPlayer(AController* NewPlayer) override;

	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;


private:
	UPROPERTY()
	TArray<ANHPlayerController*> PlayerControllers;
	UPROPERTY()
	UNHGameInstance* GI;
	
	
};




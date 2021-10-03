// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "NHGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class NEWHALO_API UNHGameInstance : public UGameInstance
{
	GENERATED_BODY()


private:
	int32 TeamSize;
public:
	int32 GetTeamSize() const;
	void SetTeamSize(int32 InTeamSize);
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "GameUI/PlayerOverheadStatus.h"

#include "Components/ProgressBar.h"
#include "Player/NHPlayerState.h"

void UPlayerOverheadStatus::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	PS = GetOwningPlayerState<ANHPlayerState>();
	if(!PS)
	{
		UE_LOG(LogTemp, Error, TEXT("Cant get PS in OnInitialized UPlayerOverheadStatus in %s"), *GetName());
		return;
	}
	PlayerName->SetText(FText::FromString(PS->GetPlayerName()));
	
}

void UPlayerOverheadStatus::NativeTick(const FGeometry& MovieSceneBlends, float InDeltaTime)
{
	Super::NativeTick(MovieSceneBlends, InDeltaTime);
}

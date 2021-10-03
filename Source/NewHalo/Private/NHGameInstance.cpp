// Fill out your copyright notice in the Description page of Project Settings.


#include "NHGameInstance.h"

int32 UNHGameInstance::GetTeamSize() const
{
	return TeamSize;
}

void UNHGameInstance::SetTeamSize(int32 InTeamSize)
{
	this->TeamSize = TeamSize;
}

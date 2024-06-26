// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStateViewMode.h"

const FName& UPlayerStateViewMode::GetPlayerNickName() const
{
	return PlayerNickName;	
}

void UPlayerStateViewMode::SetPlayerNickName(const FName& InPlayerNickName)
{
	UE_MVVM_SET_PROPERTY_VALUE(PlayerNickName, InPlayerNickName);
}

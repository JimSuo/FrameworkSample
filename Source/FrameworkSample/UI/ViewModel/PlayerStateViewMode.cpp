// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerStateViewMode.h"

float UPlayerStateViewMode::GetTestFloat() const
{
	return TestFloat;
}

void UPlayerStateViewMode::SetTestFloat(const float& InTestFloat)
{
	UE_MVVM_SET_PROPERTY_VALUE(TestFloat, InTestFloat);
}


FName UPlayerStateViewMode::GetPlayerNickName() const
{
	return PlayerNickName;	
}

void UPlayerStateViewMode::SetPlayerNickName(const FName& InPlayerNickName)
{
	UE_MVVM_SET_PROPERTY_VALUE(PlayerNickName, InPlayerNickName);
}

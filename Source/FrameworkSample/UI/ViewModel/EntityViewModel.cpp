// Fill out your copyright notice in the Description page of Project Settings.


#include "EntityViewModel.h"

const FGameplayTag& UEntityViewModel::GetEntityTag() const
{
	return EntityTag;
}

void UEntityViewModel::SetEntityTag(const FGameplayTag& InTag)
{
	if (UE_MVVM_SET_PROPERTY_VALUE(EntityTag, InTag))
	{
		UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetEntityTagText);
	}
}

FText UEntityViewModel::GetEntityTagText() const
{
	return FText::FromString(EntityTag.ToString());
}

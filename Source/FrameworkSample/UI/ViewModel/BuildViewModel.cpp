// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildViewModel.h"

UEntityViewModel* UBuildViewModel::GetEntityViewModel() const
{
	return EntityViewModel;
}

void UBuildViewModel::SetEntityViewModel(UEntityViewModel* InEntityViewModel)
{
	UE_MVVM_SET_PROPERTY_VALUE(EntityViewModel, InEntityViewModel);
}

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"

#include "BuildViewModel.generated.h"

/**
 * 
 */
UCLASS()
class FRAMEWORKSAMPLE_API UBuildViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	class UEntityViewModel* EntityViewModel;

	UEntityViewModel* GetEntityViewModel() const;
	void SetEntityViewModel(UEntityViewModel* InEntityViewModel);
	
};

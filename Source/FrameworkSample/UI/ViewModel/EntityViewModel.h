// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameplayTagContainer.h"
#include "MVVMViewModelBase.h"

#include "EntityViewModel.generated.h"

/**
 * 
 */
UCLASS()
class FRAMEWORKSAMPLE_API UEntityViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	FGameplayTag EntityTag;

	const FGameplayTag& GetEntityTag() const;
	void SetEntityTag(const FGameplayTag& InTag);

	UFUNCTION(BlueprintPure, FieldNotify)
	FText GetEntityTagText() const;
};

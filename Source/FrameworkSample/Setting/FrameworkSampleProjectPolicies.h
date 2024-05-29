// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFeaturesProjectPolicies.h"

#include "FrameworkSampleProjectPolicies.generated.h"

/**
 * 
 */
UCLASS()
class FRAMEWORKSAMPLE_API UFrameworkSampleProjectPolicies : public UDefaultGameFeaturesProjectPolicies
{
	GENERATED_BODY()

	virtual void InitGameFeatureManager() override;
};

// Fill out your copyright notice in the Description page of Project Settings.


#include "FrameworkSampleProjectPolicies.h"

void UFrameworkSampleProjectPolicies::InitGameFeatureManager()
{
	auto AdditionalFilter = [&](const FString& PluginFilename, const FGameFeaturePluginDetails& PluginDetails,
	                            FBuiltInGameFeaturePluginBehaviorOptions& OutOptions) -> bool
	{
		// 根据版本对模块是否加载进行控制
		if (auto clientVersion = PluginDetails.AdditionalMetadata.Find(TEXT("ClientVersion")))
		{
			float verison = 0.0f;
			clientVersion->Get()->TryGetNumber(verison);
			if (verison >= 2.0)
			{
				return true;
			}
		}
		return false;
	};

	UGameFeaturesSubsystem::Get().LoadBuiltInGameFeaturePlugins(AdditionalFilter);
}
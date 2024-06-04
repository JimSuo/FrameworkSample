#pragma once

#include "CoreMinimal.h"
#include "BuildDisplayInfoData.h"
#include "GameplayTagContainer.h"

#include "BuildInfoData.generated.h"

/**
 * 建造Info数据
 */
USTRUCT(BlueprintType)
struct BUILDSYSTEMRUNTIME_API FBuildInfoData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	FGameplayTag TypeTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	FGameplayTag BuildCheckTypeTag;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	TMap<int32, TSubclassOf<AActor>> BuildClass;
	TSubclassOf<AActor> BeCheckClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	TMap<int32, FBuildDisplayInfoData> DisplayInfo;
};
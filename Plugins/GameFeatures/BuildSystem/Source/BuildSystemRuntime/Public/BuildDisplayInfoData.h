#pragma once

#include "CoreMinimal.h"
#include "BuildMaterialInfoData.h"

#include "BuildDisplayInfoData.generated.h"

/**
 * 建造显示Info数据
 */
USTRUCT(BlueprintType)
struct BUILDSYSTEMRUNTIME_API FBuildDisplayInfoData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FString ToolTips;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TMap<FName, FBuildMaterialInfoData> Material;
};
#pragma once

#include "CoreMinimal.h"

#include "BuildMaterialInfoData.generated.h"

/**
 * 建造材质Info数据
 */
USTRUCT(BlueprintType)
struct BUILDSYSTEMRUNTIME_API FBuildMaterialInfoData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	FText Tooltip;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	FName Material;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	TSoftObjectPtr<UTexture2D> Texture;
};
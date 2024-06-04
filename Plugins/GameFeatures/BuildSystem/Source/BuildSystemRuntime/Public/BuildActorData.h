#pragma once

#include "CoreMinimal.h"

#include "BuildActorData.generated.h"

/**
 * 建造Actor数据
 */
USTRUCT(BlueprintType)
struct BUILDSYSTEMRUNTIME_API FBuildActorData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	TSubclassOf<AActor> ActorClass;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	FString Data;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=BuildSystem)
	FTransform Transform;
};
#pragma once
#if WITH_GAMEPLAY_DEBUGGER_MENU
#include "GameplayDebuggerCategory.h"
class FGameplayDebuggerCategory_BuildSystem : public FGameplayDebuggerCategory
{
public:
	FGameplayDebuggerCategory_BuildSystem();

	virtual void CollectData(APlayerController* OwnerPC, AActor* DebugActor) override;
	virtual void OnDataPackReplicated(int32 DataPackId) override;
	virtual void DrawData(APlayerController* OwnerPC, FGameplayDebuggerCanvasContext& CanvasContext) override;
	virtual FDebugRenderSceneProxy* CreateDebugSceneProxy(const UPrimitiveComponent* InComponent, FDebugDrawDelegateHelper*& OutDelegateHelper) override;

	BUILDSYSTEMRUNTIME_API static TSharedRef<FGameplayDebuggerCategory> MakeInstance();

	// BuildSystem的信息类
	struct FDebugData
	{
		FString Str;
		void Serialize(FArchive& archive);
	} BuildSystemDebugData;

};
#endif
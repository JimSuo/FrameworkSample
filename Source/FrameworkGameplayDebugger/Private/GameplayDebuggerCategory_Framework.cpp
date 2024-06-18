#include "GameplayDebuggerCategory_Framework.h"

#include "GameplayDebugger.h"

const FName FGameplayDebuggerCategory_Framework::GameplayDebuggerCategoryName = FName(TEXT("Framework"));
TMap<FString, FOnCollectDatas> FGameplayDebuggerCategory_Framework::DebugKeyDelegateMap;
FGameplayDebuggerCategory_Framework* FGameplayDebuggerCategory_Framework::Instance = nullptr;

FGameplayDebuggerCategory_Framework::FGameplayDebuggerCategory_Framework()
{
	SetDataPackReplication(&DebugData);
}

void FGameplayDebuggerCategory_Framework::CollectData(APlayerController* OwnerPC, AActor* DebugActor)
{
	if (DebugActor == nullptr)
	{
		return;
	}
	TArray<FString> DebugDataStrArr;
	for (auto Pair : DebugKeyDelegateMap)
	{
		// 添加开始分隔
		DebugDataStrArr.Add(FString::Printf(TEXT("{red}------------------------------")));
		FString DebugStr;
		auto Delegate = Pair.Value;
		if (Delegate.IsBound())
		{
			DebugDataStrArr.Append(Delegate.Execute());
		}
		// 添加结束分隔
		DebugDataStrArr.Add(FString::Printf(TEXT("{red}------------------------------")));
	}
	DebugData.StrArr = DebugDataStrArr;
}

void FGameplayDebuggerCategory_Framework::OnDataPackReplicated(int32 DataPackId)
{
	MarkRenderStateDirty();
}

void FGameplayDebuggerCategory_Framework::DrawData(APlayerController* OwnerPC,
                                                   FGameplayDebuggerCanvasContext& CanvasContext)
{
	for (auto DebugStr : DebugData.StrArr)
	{
		CanvasContext.Print(DebugStr);	
	}
}

FDebugRenderSceneProxy* FGameplayDebuggerCategory_Framework::CreateDebugSceneProxy(
	const UPrimitiveComponent* InComponent, FDebugDrawDelegateHelper*& OutDelegateHelper)
{
	return FGameplayDebuggerCategory::CreateDebugSceneProxy(InComponent, OutDelegateHelper);
}

TSharedRef<FGameplayDebuggerCategory> FGameplayDebuggerCategory_Framework::MakeInstance()
{
	Instance = new FGameplayDebuggerCategory_Framework();
	return MakeShareable(Instance);
}

void FGameplayDebuggerCategory_Framework::FDebugData::Serialize(FArchive& archive)
{
	archive << StrArr;
}

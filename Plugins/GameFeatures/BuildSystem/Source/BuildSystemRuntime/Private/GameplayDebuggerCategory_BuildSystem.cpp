#include "GameplayDebuggerCategory_BuildSystem.h"

#include "DecorationComponent.h"

bool FGameplayDebuggerCategory_BuildSystem::bRegistered = false;

FGameplayDebuggerCategory_BuildSystem::FGameplayDebuggerCategory_BuildSystem()
{
	SetDataPackReplication(&BuildSystemDebugData);
}

void FGameplayDebuggerCategory_BuildSystem::CollectData(APlayerController* OwnerPC, AActor* DebugActor)
{
	if (DebugActor == nullptr)
	{
		return;
	}
	auto Component = MakeWeakObjectPtr(DebugActor->GetComponentByClass<UDecorationComponent>());
	if(Component.IsValid())
	{
		BuildSystemDebugData.Str = Component->GetHandleDecorationName();
	}
}

void FGameplayDebuggerCategory_BuildSystem::OnDataPackReplicated(int32 DataPackId)
{
	MarkRenderStateDirty();
}

void FGameplayDebuggerCategory_BuildSystem::DrawData(APlayerController* OwnerPC,
	FGameplayDebuggerCanvasContext& CanvasContext)
{
	CanvasContext.Print(BuildSystemDebugData.Str);
}

FDebugRenderSceneProxy* FGameplayDebuggerCategory_BuildSystem::CreateDebugSceneProxy(
	const UPrimitiveComponent* InComponent, FDebugDrawDelegateHelper*& OutDelegateHelper)
{
	return FGameplayDebuggerCategory::CreateDebugSceneProxy(InComponent, OutDelegateHelper);
}

TSharedRef<FGameplayDebuggerCategory> FGameplayDebuggerCategory_BuildSystem::MakeInstance()
{
	return MakeShareable(new FGameplayDebuggerCategory_BuildSystem());
}

void FGameplayDebuggerCategory_BuildSystem::FDebugData::Serialize(FArchive& archive)
{
	archive << Str;
}

#include "LuaWidgetComponent.h"
#include "Net/UnrealNetwork.h"

ULuaWidgetComponent::ULuaWidgetComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
    , EnableLuaTick(false)
{
    bWantsInitializeComponent = true;
}

void ULuaWidgetComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
    if (EnableLuaTick)
    {
        UnRegistLuaTick();
    }
}

FString ULuaWidgetComponent::GetLuaFilePath_Implementation() const
{
    return LuaFilePath;
}

void ULuaWidgetComponent::RegistLuaTick(float TickInterval)
{
    EnableLuaTick = true;
    auto state = NS_SLUA::LuaState::get();
    state->registLuaTick(this, TickInterval);
}

void ULuaWidgetComponent::UnRegistLuaTick()
{
    auto state = NS_SLUA::LuaState::get();
    state->unRegistLuaTick(this);
}

void ULuaWidgetComponent::InitializeComponent()
{
    Super::InitializeComponent();

    TryHook();
}

void ULuaWidgetComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    {
        DOREPLIFETIME_CONDITION(ULuaWidgetComponent, LuaNetSerialization, COND_None);
    }
}

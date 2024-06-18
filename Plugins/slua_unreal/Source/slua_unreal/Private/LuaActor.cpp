#include "LuaActor.h"

#include "GameplayDebuggerCategory_Framework.h"
#include "LuaState.h"
#include "FrameworkGameplayDebugger/Macro/GameplayDebuggerHelperMacro.h"
#include "Net/UnrealNetwork.h"
using namespace slua;

ALuaActor::ALuaActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // REG_EXTENSION_METHOD(ALuaActor, "OnGameplayDebugger", &ALuaActor::OnGameplayDebugger_Implementation)
}

TArray<FString> ALuaActor::K2_OnGameplayDebugger_Implementation()
{
    TArray<FString> Arr;
    return Arr;
}

TArray<FString> ALuaActor::OnGameplayDebugger_Implementation()
{
    return K2_OnGameplayDebugger();
}

void ALuaActor::BeginPlay()
{
    Super::BeginPlay();
#if WITH_GAMEPLAY_DEBUGGER_MENU
    ADD_GAMEPLAY_DEBUG_INFO_BIND_UOBJECT(ALuaActor)
#endif
}

void ALuaActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);

    if (EnableLuaTick)
    {
        UnRegistLuaTick();
    }
#if WITH_GAMEPLAY_DEBUGGER_MENU
    REMOVE_GAMEPLAY_DEBUG_INFO_BIND_UOBJECT(ALuaActor)
#endif
}

FString ALuaActor::GetLuaFilePath_Implementation() const
{
    return LuaFilePath;
}

void ALuaActor::PostInitializeComponents()
{
    Super::PostInitializeComponents();
    ILuaOverriderInterface::PostLuaHook();
}

void ALuaActor::RegistLuaTick(float TickInterval)
{
    EnableLuaTick = true;
    auto state = NS_SLUA::LuaState::get();
    state->registLuaTick(this, TickInterval);
}

void ALuaActor::UnRegistLuaTick()
{
    auto state = NS_SLUA::LuaState::get();
    state->unRegistLuaTick(this);
}

void ALuaActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    {
        DOREPLIFETIME_CONDITION(ALuaActor, LuaNetSerialization, COND_None);
    }
}

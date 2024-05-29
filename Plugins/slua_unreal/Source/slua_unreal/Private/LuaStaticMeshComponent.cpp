// Fill out your copyright notice in the Description page of Project Settings.


#include "LuaStaticMeshComponent.h"
#include "Net/UnrealNetwork.h"

ULuaStaticMeshComponent::ULuaStaticMeshComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, EnableLuaTick(false)
{
	bWantsInitializeComponent = true;
}

void ULuaStaticMeshComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (EnableLuaTick)
	{
		UnRegistLuaTick();
	}
}

FString ULuaStaticMeshComponent::GetLuaFilePath_Implementation() const
{
	return LuaFilePath;
}

void ULuaStaticMeshComponent::RegistLuaTick(float TickInterval)
{
	EnableLuaTick = true;
	auto state = NS_SLUA::LuaState::get();
	state->registLuaTick(this, TickInterval);
}

void ULuaStaticMeshComponent::UnRegistLuaTick()
{
	auto state = NS_SLUA::LuaState::get();
	state->unRegistLuaTick(this);
}

void ULuaStaticMeshComponent::InitializeComponent()
{
	Super::InitializeComponent();

	TryHook();
}

void ULuaStaticMeshComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
	{
		DOREPLIFETIME_CONDITION(ULuaStaticMeshComponent, LuaNetSerialization, COND_None);
	}
}

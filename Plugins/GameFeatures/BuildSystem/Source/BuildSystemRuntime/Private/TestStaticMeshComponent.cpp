// Fill out your copyright notice in the Description page of Project Settings.


#include "TestStaticMeshComponent.h"
using namespace slua;

UTestStaticMeshComponent::UTestStaticMeshComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	REG_EXTENSION_METHOD(UTestStaticMeshComponent, "LuaCallCppFuncTest", &UTestStaticMeshComponent::LuaCallCppFuncTest)
}

void UTestStaticMeshComponent::LuaCallCppFuncTest()
{
	UE_LOG(LogTemp, Warning, TEXT("UBuildRuntimeComponent::LuaCallCppFuncTest"));
}

void UTestStaticMeshComponent::LuaCallTest_Implementation()
{
	UE_LOG(LogTemp, Warning, TEXT("UBuildRuntimeComponent::LuaCallTest"));
}

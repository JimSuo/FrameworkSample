// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildEntity.h"

// Sets default values
ABuildEntity::ABuildEntity()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// TArray<FString> ABuildEntity::OnGameplayDebugger_Implementation()
// {
// 	TArray<FString> Infos;
// 	Infos.Add(FString::Printf(TEXT("{white}ActorLocation : {green}%s"), *GetActorLocation().ToString()));
// 	Infos.Add(FString::Printf(TEXT("{white}GetActorRotation : {green}%s"), *GetActorRotation().ToString()));
// 	return Infos;
// }

// Called when the game starts or when spawned
void ABuildEntity::BeginPlay()
{
	Super::BeginPlay();

// #if WITH_GAMEPLAY_DEBUGGER_MENU
// 	ADD_GAMEPLAY_DEBUG_INFO_BIND_UOBJECT(ABuildEntity, TestDebugFunc)
// 	// FGameplayDebuggerCategory_Framework::AddOnCollectData(FString::Printf(TEXT("ABuildEntity::OnDelegateCall"))).
// 	// 	BindUObject(
// 	// 		this, &ABuildEntity::OnDelegateCall);
// 	// FGameplayDebuggerCategory_Framework::AddOnCollectData(FString::Printf(TEXT("ABuildEntity::OnDelegateCallFuncName"))).
// 	// 	BindUFunction(
// 	// 		this, "OnDelegateCallFuncName");
// #endif
}

void ABuildEntity::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	// #if WITH_GAMEPLAY_DEBUGGER_MENU
 //    	REMOVE_GAMEPLAY_DEBUG_INFO_BIND_UOBJECT(ABuildEntity, TestDebugFunc)
 //    #endif
}

TArray<FString> ABuildEntity::TestDebugFunc()
{
	TArray<FString> Infos;
	Infos.Add(FString::Printf(TEXT("{white}ActorLocation : {green}%s"), *GetActorLocation().ToString()));
	Infos.Add(FString::Printf(TEXT("{white}GetActorRotation : {green}%s"), *GetActorRotation().ToString()));
	return Infos;
}

// Called every frame
void ABuildEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildActor.h"

ABuildActor::ABuildActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;	
}

// Called when the game starts or when spawned
void ABuildActor::BeginPlay()
{
	Super::BeginPlay();
}

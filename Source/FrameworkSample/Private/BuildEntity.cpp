// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildEntity.h"


// Sets default values
ABuildEntity::ABuildEntity()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABuildEntity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABuildEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


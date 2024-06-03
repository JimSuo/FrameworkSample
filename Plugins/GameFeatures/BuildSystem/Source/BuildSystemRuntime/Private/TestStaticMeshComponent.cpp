// Fill out your copyright notice in the Description page of Project Settings.


#include "TestStaticMeshComponent.h"

#include "Kismet/GameplayStatics.h"

UTestStaticMeshComponent::UTestStaticMeshComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	FString test = "";
	FName testName = UGameplayStatics::GetName(); 
}

// Fill out your copyright notice in the Description page of Project Settings.


#include "DecorationComponent.h"

#include "GameplayDebugger/Macro/HelperMacro.h"
#include "FrameworkSample/Utils/TransformLibrary.h"
#include "GameplayDebuggerCategory_Framework.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

UDecorationComponent::UDecorationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryComponentTick.bCanEverTick = true;
}

FString UDecorationComponent::GetHandleDecorationName() const
{
	if (HandleDecoration.IsValid())
	{
		return FString::Printf(TEXT("Currently holding : {green}%s"), *HandleDecoration->GetName());
	}
	return TEXT("{red}Currently not holding any decorations");
}

void UDecorationComponent::SetHandleDecoration(AActor* InDecoration)
{
	// // 测试用, 需要手动触发测试时可打开
	HandleDecoration = TestSetHandleDecoration();

	// 如果当前检测的对象为空或当前持有对象, 不做设置与操作
	if (InDecoration == nullptr || HandleDecoration.IsValid() == true)
	{
		return;
	}
	HandleDecoration = InDecoration;
	HandleDecoration->SetActorRotation(FRotator::ZeroRotator);
}

void UDecorationComponent::PutDecoration()
{
	if (bCanPut == true)
	{
		HandleDecoration.Reset();
	}
	else
	{
#if UE_EDITOR
		UKismetSystemLibrary::PrintString(GetWorld(), "禁止放置在此处");
# endif
	}
}

void UDecorationComponent::RotateDecoration()
{
	if (RotateStateIndex < RotateStateAngleList.Num() - 1)
	{
		++RotateStateIndex;
	}
	else
	{
		RotateStateIndex = 0;
	}
}

void UDecorationComponent::BeginPlay()
{
	Super::BeginPlay();
#if WITH_GAMEPLAY_DEBUGGER_MENU
	ADD_GAMEPLAY_DEBUG_INFO_BIND_CUSTOM(FName("DecorationComponentInfoLambda")).BindLambda([this]()-> TArray<FString>
										{
										TArray<FString> Logs;
										Logs.Add(GetHandleDecorationName());
										return Logs;
										});
#endif
}

// Called every frame
void UDecorationComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                         FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// 装饰对象为空, 什么也不执行
	if (HandleDecoration.IsValid() == false)
	{
		return;
	}
	// 装饰对象不为空时, 射线检测逻辑
	auto World = GetWorld();
	auto Camera = UGameplayStatics::GetPlayerCameraManager(World, 0);
	auto Start = Camera->GetCameraLocation();
	auto End = FTransformLibrary::CalcForwardLocation(
		Start, UKismetMathLibrary::GetForwardVector(Camera->GetCameraRotation()), CheckDistance);
	TArray<AActor*> ActorsToIgnore{HandleDecoration.Get()};
	FHitResult HitResult;
	// 开始射线检测
	auto HasTraced = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(),
																	 Start, End,
																	 TraceObjectTypes,
																	 false,
																	 ActorsToIgnore,
																	 EDrawDebugTrace::ForOneFrame,
																	 HitResult,
																	 true,
																	 FLinearColor::Red,
																	 FLinearColor::Green,
																	 5.0f);
	if (HasTraced == true)
	{
		auto NormalVector = HitResult.ImpactNormal;
		FRotator NewRotator = FTransformLibrary::RotateARotatorAroundVector(
			UKismetMathLibrary::MakeRotFromZ(NormalVector),
			NormalVector,
			RotateStateAngleList[RotateStateIndex]);
		HandleDecoration->SetActorTransform(UKismetMathLibrary::MakeTransform(HitResult.ImpactPoint,
		                                                                      NewRotator,
		                                                                      FVector::One()));
		// 设置是否可以放置
		auto Deg = UKismetMathLibrary::DegAcos(FVector::UpVector.Dot(NormalVector));
		// TODO::需要角度判断字段属性, 根据道具的角度判断属性判断是否可放置
		// bCanPut = UKismetMathLibrary::InRange_FloatFloat(Deg, MinCheckAngle, MaxCheckAngle);
		// TODO::仅作测试用, 允许道具放在任何地方
		bCanPut = true;
	}
	else
	{
		// 未检测到放置平面时处理的逻辑
		auto NewYaw = UKismetMathLibrary::FindLookAtRotation(Start, HandleDecoration->GetActorLocation()).Yaw;
		FRotator newRotator(0.0f, NewYaw, 0.0f);
		HandleDecoration->SetActorTransform(UKismetMathLibrary::MakeTransform(End, newRotator, FVector::One()));
		bCanPut = false;
	}
}

void UDecorationComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
#if WITH_GAMEPLAY_DEBUGGER_MENU
	REMOVE_GAMEPLAY_DEBUG_INFO_BIND_CUSTOM(FName("DecorationComponentInfoLambda"))
#endif
}

AActor* UDecorationComponent::TestSetHandleDecoration()
{
	auto World = GetWorld();
	auto Camera = UGameplayStatics::GetPlayerCameraManager(World, 0);
	auto Start = Camera->GetCameraLocation();
	auto End = FTransformLibrary::CalcForwardLocation(
		Start, UKismetMathLibrary::GetForwardVector(Camera->GetCameraRotation()), CheckDistance);
	TArray<AActor*> ActorsToIgnore{HandleDecoration.Get()};
	FHitResult HitResult;
	// 开始射线检测
	auto HasTraced = UKismetSystemLibrary::LineTraceSingleForObjects(GetWorld(),
																	 Start, End,
																	 TraceObjectTypes,
																	 false,
																	 ActorsToIgnore,
																	 EDrawDebugTrace::ForDuration,
																	 HitResult,
																	 true,
																	 FLinearColor::Red,
																	 FLinearColor::Green,
																	 50.0f);
	if (HasTraced == false)
	{
		return nullptr;
	}
	if (HandleDecoration.IsValid() == true)
	{
		return HandleDecoration.Get();
	}
	auto TracedActor = HitResult.GetActor();
	TracedActor->SetActorRotation(FRotator::ZeroRotator);
	return TracedActor;
}


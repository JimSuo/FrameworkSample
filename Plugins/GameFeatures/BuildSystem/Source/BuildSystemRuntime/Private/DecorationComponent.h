// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DecorationComponent.generated.h"


UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BUILDSYSTEMRUNTIME_API UDecorationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UDecorationComponent();

	FString GetHandleDecorationName() const;
	
	// 设置装饰物
	UFUNCTION(BlueprintCallable, Category=Build)
	void SetHandleDecoration(AActor* InDecoration);
	UFUNCTION(BlueprintCallable, Category=Build)
	// 释放装饰物
	void ReleaseHandleDecoration() { HandleDecoration.Reset(); }
	// 放置装饰物
	void PutDecoration();
	
	// 旋转装饰物
	UFUNCTION(BlueprintCallable, Category=Build)
	void RotateDecoration();
	

protected:
	virtual void BeginPlay() override;
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	

public:
	// 检测类型
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Build)
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
	// 检测距离
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Build)
	float CheckDistance = 400.0f;
protected:
	// 持有的装饰物
	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<AActor> HandleDecoration;
	// 可以放置
	bool bCanPut;
	// 旋转状态索引
	int32 RotateStateIndex = 0;
	// 旋转状态与角度对应的映射表
	TArray<float> RotateStateAngleList = {90.0f, 180.0f, 270.0f, 0.0f};
};

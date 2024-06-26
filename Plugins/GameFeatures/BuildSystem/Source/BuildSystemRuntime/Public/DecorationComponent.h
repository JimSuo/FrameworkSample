// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DecorationComponent.generated.h"

/**
 * 摆放装饰功能组件
 */
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class BUILDSYSTEMRUNTIME_API UDecorationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UDecorationComponent(const FObjectInitializer& ObjectInitializer);

	/**
	* @brief 获取当前持有的装饰物名称
	* @return 当前持有的装饰物名称
	*/
	FString GetHandleDecorationName() const;
	/**
	* @brief 设置装饰物 
	*/
	UFUNCTION(BlueprintCallable, Category=Build)
	void SetHandleDecoration(AActor* InDecoration);
	/**
	 * @brief 放置装饰物
	 */
	UFUNCTION(BlueprintCallable, Category=Build)
	void PutDecoration();
	
	/**
	 * @brief 旋转装饰物
	 */
	UFUNCTION(BlueprintCallable, Category=Build)
	void RotateDecoration();
	

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	
	/**
	 * @brief 释放装饰物
	 */
	void ReleaseHandleDecoration() { HandleDecoration.Reset(); }
	/**
	 * @brief 测试设置装饰物, 可手动触发设置当前控制的交互物
	 */
	AActor* TestSetHandleDecoration();
	

public:
	/**
	 * @brief 检测类型
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Build)
	TArray<TEnumAsByte<EObjectTypeQuery>> TraceObjectTypes;
	/**
	 * @brief 检测距离
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Build)
	float CheckDistance = 400.0f;
protected:
	/**
	 * @brief 持有的装饰物
	 */
	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<AActor> HandleDecoration;
	/**
	 * @brief 是否可以放置
	 */
	bool bCanPut = false;
	/**
	 * @brief 旋转状态索引
	 */
	int32 RotateStateIndex = 0;
	/**
	 * @brief 旋转状态与角度对应的映射表
	 */
	const TArray<float> RotateStateAngleList = {90.0f, 180.0f, 270.0f, 0.0f};
};

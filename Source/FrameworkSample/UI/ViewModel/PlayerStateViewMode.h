// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "PlayerStateViewMode.generated.h"

/**
 * 玩家状态ViewModel
 */
UCLASS()
class FRAMEWORKSAMPLE_API UPlayerStateViewMode : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	/**
     * @brife 测试用float数据
     */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	float TestFloat;
	/**
     * @brife 获取 测试用float数据
     * @return 测试用float数据
     */
	float GetTestFloat() const;
	/**
     * @brife 设置 测试用float数据
     * @param InTestFloat 新传入的 测试用float数据
     */
	void SetTestFloat(const float& InTestFloat);
	
	
	UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	int32 TestInt = 0;
	int32 GetTestInt() const { return TestInt; }
	
	void SetTestInt(const int32& InTestInt)
	{
		UE_MVVM_SET_PROPERTY_VALUE(TestInt, InTestInt);
	}
	
	/**
	 * 玩家昵称
	 */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	FName PlayerNickName = FName(TEXT("Test Player"));

	FName GetPlayerNickName() const;
	void SetPlayerNickName(const FName& InPlayerNickName);
	
	// /**
	//  * 玩加生命值
	//  */
	// UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	// int32 PlayerHp;
	// /**
	//  * 玩加魔法值
	//  */
	// UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	// int32 PlayerMp;

	
};

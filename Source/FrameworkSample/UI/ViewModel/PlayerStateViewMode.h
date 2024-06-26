// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "PlayerStateViewMode.generated.h"

#define TEST(propertyType, propertyName, propertyDefaultName)\
	UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)\
	propertyType propertyName = propertyDefaultName;\
	const propertyType& Get##propertyName() const;\
	void Set##propertyName(const propertyType& In##propertyName);

/**
 * 玩家状态ViewModel
 */
UCLASS()
class FRAMEWORKSAMPLE_API UPlayerStateViewMode : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	// TEST(int32, TestInt, 0)

	UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	int32 TestInt = 0;
	const int32& GetTestInt() const { return TestInt; }
	
	void SetTestInt(const int32& InTestInt)
	{
		UE_MVVM_SET_PROPERTY_VALUE(TestInt, InTestInt);
	}
	
	/**
	 * 玩家昵称
	 */
	UPROPERTY(BlueprintReadWrite, FieldNotify, Getter, Setter)
	FName PlayerNickName = FName(TEXT("Test Player"));

	const FName& GetPlayerNickName() const;
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

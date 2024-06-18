#pragma once

// 添加

#define ADD_GAMEPLAY_DEBUG_INFO_BIND_UOBJECT(className, funcName)\
	if (!K2_OnGameplayDebugger().IsEmpty())\
	{\
		FGameplayDebuggerCategory_Framework::AddOnCollectData(FString::Printf(TEXT("%s.%s.%d"), TEXT(#className), TEXT(#funcName), GetUniqueID())).BindUObject(this, &className::funcName);\
	}\
		
#define ADD_GAMEPLAY_DEBUG_INFO_UOBJECT_WITH_OBJECT(object, className, funcName)\
	FGameplayDebuggerCategory_Framework::AddOnCollectData(FString::Printf(TEXT("%s.%s.%d"), TEXT((#className), TEXT(#funcName), object->GetUniqueID())).BindUObject(object, &className::funcName);
#define ADD_GAMEPLAY_DEBUG_INFO_BIND_LAMBDA(className, lambdaTag, lambdaContent)\
	FGameplayDebuggerCategory_Framework::AddOnCollectData(FString::Printf(TEXT("%s.%s.%d"), TEXT(#className), lambdaTag, GetUniqueID())).BindLambda([this]()-> TArray<FString>lambdaContent);

// 移除

#define REMOVE_GAMEPLAY_DEBUG_INFO_BIND_UOBJECT(className, funcName)\
	if (!K2_OnGameplayDebugger().IsEmpty())\
	{\
		FGameplayDebuggerCategory_Framework::RemoveOnCollectData(FString::Printf(TEXT("%s.%s.%d"), TEXT(#className), TEXT(#funcName), GetUniqueID()));\
	}
#define REMOVE_GAMEPLAY_DEBUG_INFO_UOBJECT_WITH_OBJECT(object, className, funcName)\
	FGameplayDebuggerCategory_Framework::RemoveOnCollectData(FString::Printf(TEXT("%s.%s.%d"), TEXT(#className), TEXT(#funcName), object->GetUniqueID()));
#define REMOVE_GAMEPLAY_DEBUG_INFO_BIND_LAMBDA(className, lambdaTag)\
	FGameplayDebuggerCategory_Framework::RemoveOnCollectData(FString::Printf(TEXT("%s.%s.%d"), TEXT(#className), lambdaTag, GetUniqueID()));

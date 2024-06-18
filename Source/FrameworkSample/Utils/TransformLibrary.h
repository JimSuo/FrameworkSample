#pragma once
#include "Kismet/KismetMathLibrary.h"

/**
 * 变换计算工具类
 */
class FTransformLibrary
{
public:
	// 计算Forward朝向的向量坐标
	static FVector CalcForwardLocation(const FVector& InLocation, const FVector& InForwardVector, float InDistance)
	{
		return InLocation + InForwardVector.GetSafeNormal() * InDistance;
	}
	// 获取一个绕向量旋转的Rotator
	static FRotator RotateARotatorAroundVector(const FRotator& InRotator, const FVector& InVector, float InAngle)
	{
		// 根据传入的Rotator获取三个轴向的方向向量
		FVector F;
		FVector R;
		FVector U;
		UKismetMathLibrary::BreakRotIntoAxes(InRotator, F, R, U);
		// 旋转方向向量
		auto ForwardAxes = UKismetMathLibrary::RotateAngleAxis(F, InAngle, InVector);
		auto RightAxes = UKismetMathLibrary::RotateAngleAxis(R, InAngle, InVector);
		auto UpAxes = UKismetMathLibrary::RotateAngleAxis(U, InAngle, InVector);
		// 构成新的Rotator
		return UKismetMathLibrary::MakeRotationFromAxes(ForwardAxes, RightAxes, UpAxes);
	}
};

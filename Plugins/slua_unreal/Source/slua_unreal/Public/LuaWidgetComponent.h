#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FrameworkWidgetComponent.h"
#include "LuaOverriderInterface.h"
#include "LuaNetSerialization.h"

#include "LuaWidgetComponent.generated.h"

UCLASS(BlueprintType, Blueprintable)
class SLUA_UNREAL_API ULuaWidgetComponent : public UFrameworkWidgetComponent, public ILuaOverriderInterface
{
    GENERATED_UCLASS_BODY()

public:
    FString GetLuaFilePath_Implementation() const override;

    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION(Blueprintcallable)
        void RegistLuaTick(float TickInterval);

    UFUNCTION(Blueprintcallable)
        void UnRegistLuaTick();

    virtual void InitializeComponent() override;

    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(Replicated)
        FLuaNetSerialization LuaNetSerialization;

protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "slua")
        FString LuaFilePath;

private:
    bool EnableLuaTick;
};

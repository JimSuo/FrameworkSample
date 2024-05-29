

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

#include "FrameworkSampleGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FRAMEWORKSAMPLE_API AFrameworkSampleGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
	virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
	virtual void PreLogin(const FString& Options, const FString& Address, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual void PostLogin(APlayerController* NewPlayer) override;
	virtual APlayerController* Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal, const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer) override;
	virtual void RestartPlayer(AController* NewPlayer) override;
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, const FTransform& SpawnTransform) override;

	virtual void BeginPlay() override;
	
	virtual void Logout(AController* Exiting) override;
};

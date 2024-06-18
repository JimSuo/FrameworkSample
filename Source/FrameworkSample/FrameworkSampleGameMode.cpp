#include "FrameworkSampleGameMode.h"

void AFrameworkSampleGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);
}

void AFrameworkSampleGameMode::GameWelcomePlayer(UNetConnection* Connection, FString& RedirectURL)
{
	Super::GameWelcomePlayer(Connection, RedirectURL);
}

void AFrameworkSampleGameMode::PreLogin(const FString& Options, const FString& Address,
                                        const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
}

void AFrameworkSampleGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
}

APlayerController* AFrameworkSampleGameMode::Login(UPlayer* NewPlayer, ENetRole InRemoteRole, const FString& Portal,
	const FString& Options, const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	return Super::Login(NewPlayer, InRemoteRole, Portal, Options, UniqueId, ErrorMessage);
}

void AFrameworkSampleGameMode::HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer)
{
	Super::HandleStartingNewPlayer_Implementation(NewPlayer);
}

void AFrameworkSampleGameMode::RestartPlayer(AController* NewPlayer)
{
	Super::RestartPlayer(NewPlayer);
}

APawn* AFrameworkSampleGameMode::SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer,
	const FTransform& SpawnTransform)
 {
	return Super::SpawnDefaultPawnAtTransform_Implementation(NewPlayer, SpawnTransform);
} 

void AFrameworkSampleGameMode::BeginPlay()
{
	Super::BeginPlay();
	
}

void AFrameworkSampleGameMode::Logout(AController* Exiting)
{
	Super::Logout(Exiting);
}

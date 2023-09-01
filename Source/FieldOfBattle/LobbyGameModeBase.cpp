// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyGameModeBase.h"
#include "FoBGameInstance.h"

void ALobbyGameModeBase::PostLogin(APlayerController* InNewPlayer)
{
    Super::PostLogin(InNewPlayer);

    //UE_LOG(LogTemp, Warning, TEXT("ALobbyGameModeBase::PostLogin: Starting"));

    UpdatePlayersList();
 }

void ALobbyGameModeBase::StartGame(FString Map)
{
    //UE_LOG(LogTemp, Warning, TEXT("LobbyGameMode-StartGame: Starting"));
    
    UFoBGameInstance* FoBGameInstancePtr = Cast<UFoBGameInstance>(GetGameInstance());
    FoBGameInstancePtr->SavePlayersInfo(PlayersInfo);

    UWorld* World = GetWorld();
    bUseSeamlessTravel = true;
    
    if (Map == "Grassy Meadow")
    {
        World->ServerTravel(TEXT("/Game/Maps/BattleFlatlandMap?listen"), true);
    }
    
    if (Map == "Scorched Canyon")
    {
        World->ServerTravel(TEXT("/Game/Maps/BattleCanyonMap?listen"), true);
    }

    if (Map == "Stoney Bowl")
    {
        World->ServerTravel(TEXT("/Game/Maps/BattleBowlMap?listen"), true);
    }

}


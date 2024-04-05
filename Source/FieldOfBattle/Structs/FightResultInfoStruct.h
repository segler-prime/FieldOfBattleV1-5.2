// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FightResultInfoStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FIELDOFBATTLE_API FFightResultInfoStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	bool HasCharged = false;

	UPROPERTY(BlueprintReadWrite)
	AActor* Attacker;

	UPROPERTY(BlueprintReadWrite)
	FString AttackerUnitName;

	UPROPERTY(BlueprintReadWrite)
	FString AttackerBravery;
	
	UPROPERTY(BlueprintReadWrite)
	FString AttackerInitiative;	
	
	UPROPERTY(BlueprintReadWrite)
	int AttackerAttacks = 0;

	UPROPERTY(BlueprintReadWrite)
	int AttackerHits = 0;

	UPROPERTY(BlueprintReadWrite)
	int AttackerWounds = 0;

	UPROPERTY(BlueprintReadWrite)
	int AttackSaves = 0;

	UPROPERTY(BlueprintReadWrite)
	int AttackerDamage = 0;

	UPROPERTY(BlueprintReadWrite)
	int AttackerRankBonus = 0;

	UPROPERTY(BlueprintReadWrite)
	int AttackerOutNumberBonus = 0;

	UPROPERTY(BlueprintReadWrite)
	int AttackerFlankBackBonus = 0;

	UPROPERTY(BlueprintReadWrite)
	int AttackerFightTotal = 0;

	UPROPERTY(BlueprintReadWrite)
	AActor* CounterAttacker;

	UPROPERTY(BlueprintReadWrite)
	FString CounterAttackerUnitName;

	UPROPERTY(BlueprintReadWrite)
	FString CounterAttackerBravery;
	
	UPROPERTY(BlueprintReadWrite)
	FString CounterAttackerInitiative;
		
	UPROPERTY(BlueprintReadWrite)
	int CounterAttackerAttacks = 0;

	UPROPERTY(BlueprintReadWrite)
	int CounterAttackerHits = 0;

	UPROPERTY(BlueprintReadWrite)
	int CounterAttackerWounds = 0;

	UPROPERTY(BlueprintReadWrite)
	int CounterAttackSaves = 0;

	UPROPERTY(BlueprintReadWrite)
	int CounterAttackerDamage = 0;

	UPROPERTY(BlueprintReadWrite)
	int CounterAttackerRankBonus = 0;

	UPROPERTY(BlueprintReadWrite)
	int CounterAttackerOutNumberBonus = 0;

	UPROPERTY(BlueprintReadWrite)
	int CounterAttackerFlankBackBonus = 0;

	UPROPERTY(BlueprintReadWrite)
	int CounterAttackerFightTotal = 0;

	UPROPERTY(BlueprintReadWrite)
	FString FightWinner;

	UPROPERTY(BlueprintReadWrite)
	int BraveryCheck = 0;

	UPROPERTY(BlueprintReadWrite)
	int BraveryCheckRoll = 0;

	UPROPERTY(BlueprintReadWrite)
	FString FleeingUnit;

	UPROPERTY(BlueprintReadWrite)
	int FleeDistance = 0;

	UPROPERTY(BlueprintReadWrite)
	int ChaseDistance = 0;

};

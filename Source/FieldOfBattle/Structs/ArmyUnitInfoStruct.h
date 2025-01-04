// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ArmyUnitInfoStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FIELDOFBATTLE_API FArmyUnitInfoStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	int32 UnitId = 0;

	UPROPERTY(BlueprintReadWrite)
	FString UnitName;

	UPROPERTY(BlueprintReadWrite)
	FString UnitNickname;

	UPROPERTY(BlueprintReadWrite)
	FString UnitClass;

	UPROPERTY(BlueprintReadWrite)
	FString Move;

	UPROPERTY(BlueprintReadWrite)
	FString ShootAttacks;

	UPROPERTY(BlueprintReadWrite)
	FString ShootRange;

	UPROPERTY(BlueprintReadWrite)
	FString ShootSkill;

	UPROPERTY(BlueprintReadWrite)
	FString ShootStrength;
	
	UPROPERTY(BlueprintReadWrite)
	FString FightAttacks;
	
	UPROPERTY(BlueprintReadWrite)
	FString FightSkill;

	UPROPERTY(BlueprintReadWrite)
	FString FightStrength;

	UPROPERTY(BlueprintReadWrite)
	FString Toughness;

	UPROPERTY(BlueprintReadWrite)
	FString Armor;
	
	UPROPERTY(BlueprintReadWrite)
	FString Wounds;

	UPROPERTY(BlueprintReadWrite)
	FString Bravery;

	UPROPERTY(BlueprintReadWrite)
	FString Initiative;

	UPROPERTY(BlueprintReadWrite)
	FString UnitStrength;

	UPROPERTY(BlueprintReadWrite)
	bool Fast = false;

	UPROPERTY(BlueprintReadWrite)
	bool Durable = false;

	UPROPERTY(BlueprintReadWrite)
	bool Loyal = false;

	UPROPERTY(BlueprintReadWrite)
	bool Longbows = false;

	UPROPERTY(BlueprintReadWrite)
	bool Volley = false;

	UPROPERTY(BlueprintReadWrite)
	bool Agressive = false;

	UPROPERTY(BlueprintReadWrite)
	bool Strong = false;

	UPROPERTY(BlueprintReadWrite)
	bool Shields = false;

	UPROPERTY(BlueprintReadWrite)
	int32 BaseCost = 0;

	UPROPERTY(BlueprintReadWrite)
	int32 UnitSpacing = 0;
	
	UPROPERTY(BlueprintReadWrite)
	int32 UnitRankWidth = 0;
	
	UPROPERTY(BlueprintReadWrite)
	int32 UnitSize = 0;
	
	UPROPERTY(BlueprintReadWrite)
	int32 UnitHealth = 0;

	UPROPERTY(BlueprintReadWrite)
	int32 UnitTeam = 0;

	UPROPERTY(BlueprintReadWrite)
	bool UnitDeployed = false;
		
	UPROPERTY(BlueprintReadWrite)
	FString UnitOwner;

	UPROPERTY(BlueprintReadWrite)
	int32 ArmyID = 0;

};

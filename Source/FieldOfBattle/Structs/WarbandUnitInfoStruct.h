// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WarbandUnitInfoStruct.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FIELDOFBATTLE_API FWarbandUnitInfoStruct
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	FString UnitName;

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
	int32 BaseCost = 0;

	UPROPERTY(BlueprintReadWrite)
	int32 UnitSpacing = 0;

	UPROPERTY(BlueprintReadWrite)
	int32 UnitRankWidth = 0;
};

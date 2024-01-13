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
	FString ArmorSave;
	
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
	int32 UnitWidth = 0;
	
	UPROPERTY(BlueprintReadWrite)
	int32 UnitSize = 0;
	
	UPROPERTY(BlueprintReadWrite)
	int32 UnitDamage = 0;

	UPROPERTY(BlueprintReadWrite)
	int32 UnitTeam = 0;

	UPROPERTY(BlueprintReadWrite)
	bool UnitDeployed = false;
		
	UPROPERTY(BlueprintReadWrite)
	FString UnitOwner;

	UPROPERTY(BlueprintReadWrite)
	int32 ArmyID = 0;

};

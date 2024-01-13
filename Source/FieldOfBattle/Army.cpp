// Fill out your copyright notice in the Description page of Project Settings.


#include "Army.h"
#include "SQLiteDatabase.h"

TArray<FWarbandUnitInfoStruct> UArmy::GetWarbandUnits(FString InWarband)
{
    //Open Database
    FoBDB = new FSQLiteDatabase();
    FoBDB->Open(*DBPath);

    //Build SQL Statement
    WarbandUnitTable = new FSQLitePreparedStatement();
    FString GetWarbandUnitsSQL = FString::Printf(TEXT("SELECT * FROM WarbandUnit WHERE WarbandName IS '%s'"), *InWarband);
    WarbandUnitTable->Create(*FoBDB, *GetWarbandUnitsSQL, ESQLitePreparedStatementFlags::Persistent);

    TArray<FWarbandUnitInfoStruct> WarbandUnitInfoArray;
    FWarbandUnitInfoStruct WarbandUnitInfo;

    //Get Warband Unit Info
    while (WarbandUnitTable->Step() == ESQLitePreparedStatementStepResult::Row)
    {
        WarbandUnitTable->GetColumnValueByName(TEXT("UnitName"), WarbandUnitInfo.UnitName);
        WarbandUnitTable->GetColumnValueByName(TEXT("Move"), WarbandUnitInfo.Move);
        WarbandUnitTable->GetColumnValueByName(TEXT("ShootAttacks"), WarbandUnitInfo.ShootAttacks);
        WarbandUnitTable->GetColumnValueByName(TEXT("ShootRange"), WarbandUnitInfo.ShootRange);
        WarbandUnitTable->GetColumnValueByName(TEXT("ShootSkill"), WarbandUnitInfo.ShootSkill);
        WarbandUnitTable->GetColumnValueByName(TEXT("ShootStrength"), WarbandUnitInfo.ShootStrength);
        WarbandUnitTable->GetColumnValueByName(TEXT("FightAttacks"), WarbandUnitInfo.FightAttacks);
        WarbandUnitTable->GetColumnValueByName(TEXT("FightSkill"), WarbandUnitInfo.FightSkill);
        WarbandUnitTable->GetColumnValueByName(TEXT("FightStrength"), WarbandUnitInfo.FightStrength);
        WarbandUnitTable->GetColumnValueByName(TEXT("Toughness"), WarbandUnitInfo.Toughness);
        WarbandUnitTable->GetColumnValueByName(TEXT("ArmorSave"), WarbandUnitInfo.ArmorSave);
        WarbandUnitTable->GetColumnValueByName(TEXT("Wounds"), WarbandUnitInfo.Wounds);
        WarbandUnitTable->GetColumnValueByName(TEXT("Bravery"), WarbandUnitInfo.Bravery);
        WarbandUnitTable->GetColumnValueByName(TEXT("Initiative"), WarbandUnitInfo.Initiative);
        WarbandUnitTable->GetColumnValueByName(TEXT("UnitStrength"), WarbandUnitInfo.UnitStrength);
        WarbandUnitTable->GetColumnValueByName(TEXT("BaseCost"), WarbandUnitInfo.BaseCost);
        WarbandUnitTable->GetColumnValueByName(TEXT("UnitSpacing"), WarbandUnitInfo.UnitSpacing);
        WarbandUnitTable->GetColumnValueByName(TEXT("UnitWidth"), WarbandUnitInfo.UnitWidth);
        WarbandUnitInfoArray.Add(WarbandUnitInfo);
    }

    //Clean Up
    WarbandUnitTable->Destroy();
    delete WarbandUnitTable;
    FoBDB->Close();
    delete FoBDB;

    return WarbandUnitInfoArray;
}

TArray<FArmyHeaderInfoStruct> UArmy::GetArmyHeaders()
{
    //Open Database
    FoBDB = new FSQLiteDatabase();
    FoBDB->Open(*DBPath);

    //Build SQL Statement
    ArmyHeadersTable = new FSQLitePreparedStatement();
    FString GetArmyHeadersSQL = FString::Printf(TEXT("SELECT * FROM ArmyHeader"));
    ArmyHeadersTable->Create(*FoBDB, *GetArmyHeadersSQL, ESQLitePreparedStatementFlags::Persistent);

    TArray<FArmyHeaderInfoStruct> ArmyHeaderInfoArray;
    FArmyHeaderInfoStruct ArmyHeaderInfo;

    //Load the Army Headers
    while (ArmyHeadersTable->Step() == ESQLitePreparedStatementStepResult::Row)
    {
        ArmyHeadersTable->GetColumnValueByName(TEXT("ArmyId"), ArmyHeaderInfo.ArmyID);
        ArmyHeadersTable->GetColumnValueByName(TEXT("ArmyWarband"), ArmyHeaderInfo.ArmyWarband);
        ArmyHeadersTable->GetColumnValueByName(TEXT("ArmyName"), ArmyHeaderInfo.ArmyName);
        ArmyHeadersTable->GetColumnValueByName(TEXT("ArmyDescription"), ArmyHeaderInfo.ArmyDescription);
        ArmyHeadersTable->GetColumnValueByName(TEXT("ArmyPoints"), ArmyHeaderInfo.ArmyPoints);
        ArmyHeadersTable->GetColumnValueByName(TEXT("PlayerId"), ArmyHeaderInfo.PlayerID);
        ArmyHeaderInfoArray.Add(ArmyHeaderInfo);
    }

    //Clean Up
    ArmyHeadersTable->Destroy();
    delete  ArmyHeadersTable;
    FoBDB->Close();
    delete FoBDB;

    return ArmyHeaderInfoArray;
}

TArray<FArmyUnitInfoStruct> UArmy::GetArmyUnits(int32 InArmyID)
{
    //Open Database
    FoBDB = new FSQLiteDatabase();
    FoBDB->Open(*DBPath);

    //Build SQL Statement
    ArmyUnitsTable = new FSQLitePreparedStatement();
    FString GetArmyUnitsSQL = FString::Printf(TEXT("SELECT * FROM ArmyUnitInfo WHERE ArmyId IS '%d'"), InArmyID);
    ArmyUnitsTable->Create(*FoBDB, *GetArmyUnitsSQL, ESQLitePreparedStatementFlags::Persistent);

    TArray<FArmyUnitInfoStruct> ArmyUnitInfoArray;
    FArmyUnitInfoStruct ArmyUnitInfo;

    //Get Army Unit Info
    while (ArmyUnitsTable->Step() == ESQLitePreparedStatementStepResult::Row)
    {
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitId"), ArmyUnitInfo.UnitId);
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitName"), ArmyUnitInfo.UnitName);
        ArmyUnitsTable->GetColumnValueByName(TEXT("Move"), ArmyUnitInfo.Move);
        ArmyUnitsTable->GetColumnValueByName(TEXT("ShootAttacks"), ArmyUnitInfo.ShootAttacks);
        ArmyUnitsTable->GetColumnValueByName(TEXT("ShootRange"), ArmyUnitInfo.ShootRange);
        ArmyUnitsTable->GetColumnValueByName(TEXT("ShootSkill"), ArmyUnitInfo.ShootSkill);
        ArmyUnitsTable->GetColumnValueByName(TEXT("ShootStrength"), ArmyUnitInfo.ShootStrength);
        ArmyUnitsTable->GetColumnValueByName(TEXT("FightAttacks"), ArmyUnitInfo.FightAttacks);
        ArmyUnitsTable->GetColumnValueByName(TEXT("FightSkill"), ArmyUnitInfo.FightSkill);
        ArmyUnitsTable->GetColumnValueByName(TEXT("FightStrength"), ArmyUnitInfo.FightStrength);
        ArmyUnitsTable->GetColumnValueByName(TEXT("Toughness"), ArmyUnitInfo.Toughness);
        ArmyUnitsTable->GetColumnValueByName(TEXT("ArmorSave"), ArmyUnitInfo.ArmorSave);
        ArmyUnitsTable->GetColumnValueByName(TEXT("Wounds"), ArmyUnitInfo.Wounds);
        ArmyUnitsTable->GetColumnValueByName(TEXT("Bravery"), ArmyUnitInfo.Bravery);
        ArmyUnitsTable->GetColumnValueByName(TEXT("Initiative"), ArmyUnitInfo.Initiative);
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitStrength"), ArmyUnitInfo.UnitStrength);
        ArmyUnitsTable->GetColumnValueByName(TEXT("BaseCost"), ArmyUnitInfo.BaseCost);
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitSpacing"), ArmyUnitInfo.UnitSpacing);
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitWidth"), ArmyUnitInfo.UnitWidth);
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitSize"), ArmyUnitInfo.UnitSize);
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitDamage"), ArmyUnitInfo.UnitDamage);
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitTeam"), ArmyUnitInfo.UnitTeam);
        ArmyUnitsTable->GetColumnValueByName(TEXT("UnitOwner"), ArmyUnitInfo.UnitOwner);
        ArmyUnitInfoArray.Add(ArmyUnitInfo);
    }

    //Clean Up
    ArmyUnitsTable->Destroy();
    delete ArmyUnitsTable;
    FoBDB->Close();
    delete FoBDB;

    return ArmyUnitInfoArray;
}

int32 UArmy::SaveArmyHeader(FArmyHeaderInfoStruct NewArmyHeaderInfo)
{
    //UE_LOG(LogTemp, Warning, TEXT("UArmy::SaveArmyHeader - Starting"));
        
    //Open Database
    FoBDB = new FSQLiteDatabase();    
    FoBDB->Open(*DBPath);

    //Insert New Army Header Info
    InsertInArmyHeaderTable = new FSQLitePreparedStatement();
    FString InsertArmyHeaderSQL = FString::Printf(TEXT("INSERT INTO ArmyHeader (ArmyWarband, ArmyName, ArmyDescription, ArmyPoints, PlayerId) VALUES ('%s', '%s', 'A great army', '%d', 0001);"), *NewArmyHeaderInfo.ArmyWarband, *NewArmyHeaderInfo.ArmyName, NewArmyHeaderInfo.ArmyPoints);
    InsertInArmyHeaderTable->Create(*FoBDB, *InsertArmyHeaderSQL, ESQLitePreparedStatementFlags::Persistent);
    InsertInArmyHeaderTable->Execute();

    //Get the Army Id Info
    int32 ArmyId = FoBDB->GetLastInsertRowId();

    //Clean Up
    InsertInArmyHeaderTable->Destroy();
    delete InsertInArmyHeaderTable;
    FoBDB->Close();
    delete FoBDB;

    return ArmyId;
}

void UArmy::SaveArmyUnits(FArmyUnitInfoStruct NewArmyUnitInfo, int32 NewArmyID)
{
    
    //UE_LOG(LogTemp, Warning, TEXT("UArmy::SaveArmyUnits - Starting"));

    //Open Database
    FoBDB = new FSQLiteDatabase();
    FoBDB->Open(*DBPath);

    //Build SQL Statement
    InsertInArmyUnitTable = new FSQLitePreparedStatement();
    FString InsertArmyUnitSQL = FString::Printf(TEXT
    ("INSERT INTO ArmyUnitInfo (UnitName, Move, ShootAttacks, ShootRange, ShootSkill, ShootStrength, FightAttacks, FightSkill, FightStrength, Toughness, ArmorSave, Wounds, Bravery, Initiative, UnitStrength, BaseCost, UnitSpacing, UnitWidth, UnitSize, UnitDamage, UnitTeam, UnitOwner, ArmyId, PlayerId) VALUES ('%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%s', '%d', '%d', '%d', '%d', '%d', '%d', '%s', '%d', 0001);"),
        *NewArmyUnitInfo.UnitName, *NewArmyUnitInfo.Move, *NewArmyUnitInfo.ShootAttacks, *NewArmyUnitInfo.ShootRange, *NewArmyUnitInfo.ShootSkill, *NewArmyUnitInfo.ShootStrength, *NewArmyUnitInfo.FightAttacks, *NewArmyUnitInfo.FightSkill, *NewArmyUnitInfo.FightStrength, *NewArmyUnitInfo.Toughness, *NewArmyUnitInfo.ArmorSave, *NewArmyUnitInfo.Wounds, *NewArmyUnitInfo.Bravery, *NewArmyUnitInfo.Initiative, *NewArmyUnitInfo.UnitStrength, NewArmyUnitInfo.BaseCost, NewArmyUnitInfo.UnitSpacing, NewArmyUnitInfo.UnitWidth, NewArmyUnitInfo.UnitSize, NewArmyUnitInfo.UnitDamage, NewArmyUnitInfo.UnitTeam, *NewArmyUnitInfo.UnitOwner, NewArmyID);
     
    InsertInArmyUnitTable->Create(*FoBDB, *InsertArmyUnitSQL, ESQLitePreparedStatementFlags::Persistent);

    //Insert New Army Info 
    InsertInArmyUnitTable->Execute();

    //Clean Up
    InsertInArmyUnitTable->Destroy();
    delete InsertInArmyUnitTable;
    FoBDB->Close();
    delete FoBDB;
}

void UArmy::DeleteArmy(int32 ArmyID)
{
    //Open Database
    FoBDB = new FSQLiteDatabase();
    FoBDB->Open(*DBPath);

    //Build SQL Statements
    DeleteArmyHeaderStmt = new FSQLitePreparedStatement();
    FString DeleteArmyHeaderSQL = FString::Printf(TEXT("DELETE FROM ArmyHeader WHERE ArmyId=%d"), ArmyID);
    DeleteArmyHeaderStmt->Create(*FoBDB, *DeleteArmyHeaderSQL, ESQLitePreparedStatementFlags::Persistent);

    //Delete the Army
    DeleteArmyHeaderStmt->Execute();

    //Clean Up
    DeleteArmyHeaderStmt->Destroy();
    delete DeleteArmyHeaderStmt;
    FoBDB->Close();
    delete FoBDB;

    DeleteArmyUnits(ArmyID);
}

void UArmy::DeleteArmyUnits(int32 ArmyID)
{
    //Open Database
    FoBDB = new FSQLiteDatabase();
    FoBDB->Open(*DBPath);

    //Build SQL Statements
    DeleteArmyUnitsStmt = new FSQLitePreparedStatement();
    FString DeleteArmyUnitsSQL = FString::Printf(TEXT("DELETE FROM ArmyUnitInfo WHERE ArmyId='%d'"), ArmyID);
    DeleteArmyUnitsStmt->Create(*FoBDB, *DeleteArmyUnitsSQL, ESQLitePreparedStatementFlags::Persistent);

    //Delete the Army
    DeleteArmyUnitsStmt->Execute();

    //Clean Up
    DeleteArmyUnitsStmt->Destroy();
    delete DeleteArmyUnitsStmt;
    FoBDB->Close();
    delete FoBDB;
}
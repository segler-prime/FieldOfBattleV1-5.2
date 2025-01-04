// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class FieldOfBattleEditorTarget : TargetRules
{
	public FieldOfBattleEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_2;
        ExtraModuleNames.AddRange( new string[] { "FieldOfBattle" } );
	}
}

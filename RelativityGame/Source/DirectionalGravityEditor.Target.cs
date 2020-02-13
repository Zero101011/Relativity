// Copyright 29.07.2018 Tefel. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DirectionalGravityEditorTarget : TargetRules
{
	public DirectionalGravityEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "DirectionalGravity" } );
	}
}

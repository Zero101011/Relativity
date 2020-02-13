// Copyright 29.07.2018 Tefel. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class DirectionalGravityTarget : TargetRules
{
	public DirectionalGravityTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "DirectionalGravity" } );
	}
}

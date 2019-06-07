// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class JsonParsing18VersionTarget : TargetRules
{
	public JsonParsing18VersionTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "JsonParsing18Version" } );
	}
}

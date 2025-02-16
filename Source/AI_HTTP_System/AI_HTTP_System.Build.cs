// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AI_HTTP_System : ModuleRules
{
	public AI_HTTP_System(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

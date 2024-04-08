// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CQB_Training : ModuleRules
{
	public CQB_Training(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}

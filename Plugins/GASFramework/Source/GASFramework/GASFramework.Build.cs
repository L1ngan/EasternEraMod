// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GASFramework : ModuleRules
{
	public GASFramework(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(new string[] {});
		
		PrivateIncludePaths.AddRange(new string[] {});
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"CoreUObject",
			"Engine",
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks", "AuroraDevs_RHS","LQuickFrame"
		});
		
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"Slate",
			"SlateCore"
		});
	}
}


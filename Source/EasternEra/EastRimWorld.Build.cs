// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EastRimWorld : ModuleRules
{
	public EastRimWorld(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		OptimizeCode = CodeOptimization.InShippingBuildsOnly;
		PublicIncludePaths.AddRange(
			new string[] {
				"EastRimWorld"
			}
		);
	
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core" ,
			"CoreUObject" ,
			"Engine" ,
			"AIModule",
			"InputCore" , "EnhancedInput", "SmartObjectsModule","GameplayTags","LQuickFrame","GameplayAbilities",
		});

		PrivateDependencyModuleNames.AddRange(new string[] { "AuroraDevs_RHS", "GASFramework", "CommonUI","Slate",
			"SlateCore","UMG", });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
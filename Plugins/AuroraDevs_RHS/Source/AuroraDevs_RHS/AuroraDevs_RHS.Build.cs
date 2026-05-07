// Copyright Aurora Devs 2022. All Rights Reserved.

using UnrealBuildTool;
using System.IO;
public class AuroraDevs_RHS : ModuleRules
{
	public AuroraDevs_RHS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		MinFilesUsingPrecompiledHeaderOverride = 1;
		bUseUnity = false;

		PrivateIncludePaths.Add("AuroraDevs_RHS");
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Core", "CoreUObject", "Engine", "InputCore" 
			}
		);
	}
}

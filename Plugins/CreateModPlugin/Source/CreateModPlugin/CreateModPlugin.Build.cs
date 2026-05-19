using UnrealBuildTool;

public class CreateModPlugin : ModuleRules
{
	public CreateModPlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
			}
		);
				
		PrivateIncludePaths.AddRange(
			new string[] {
			}
		);
			
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				"UMG",
				"DeveloperSettings", "SmartObjectsModule","GameplayTags", "GASFramework",
				"SlateCore",
				"Slate",
			}
		);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CommonUI",
				"LevelSequence",
				"BinkMediaPlayer",
				"GameplayAbilities",
				"Json",
				"JsonUtilities",
			}
		);
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);
	}
}


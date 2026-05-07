using UnrealBuildTool;

public class CreateModPluginEditor : ModuleRules
{
	public CreateModPluginEditor(ReadOnlyTargetRules Target) : base(Target)
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
				"UnrealEd",
				"ToolMenus",
				"EditorStyle",
				"EditorWidgets",
				"PropertyEditor",
				"CreateModPlugin"
			}
		);
			
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"Slate",
				"SlateCore",
				"EditorWidgets",
				"ToolMenus",
				"UnrealEd",
				"PropertyEditor",
				"AssetTools",
				"ContentBrowser",
				"DataTableEditor",
				"Json",
				"JsonUtilities",
				"DesktopPlatform",
				"InputCore", "EditorScriptingUtilities",
			}
		);
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);
	}
}


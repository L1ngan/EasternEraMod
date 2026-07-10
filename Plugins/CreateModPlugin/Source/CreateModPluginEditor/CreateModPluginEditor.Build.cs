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
				"Lua",   // UnLua 插件的 Lua 外部模块：提供 Lua 库链接（打包前校验用 luaL_loadbuffer 做语法检查）
				"UnLua", // lua.hpp 位于 UnLua 模块 Public 目录

			}
		);
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
			}
		);
	}
}


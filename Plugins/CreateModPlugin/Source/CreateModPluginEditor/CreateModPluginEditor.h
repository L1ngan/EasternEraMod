#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FUICommandList;

class FCreateModPluginEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

private:
	// 命令列表
	TSharedPtr<FUICommandList> PluginCommands;

	// 注册菜单
	void RegisterMenus();

	// 打开 Mod Info Editor 窗口
	void OpenModInfoEditor();

	// 打开 Create Mod 窗口
	void OpenCreateModWindow();

	// 打开 Package Mod 窗口
	void OpenPackageModWindow();

	// 导出 usmap 映射文件
	void ExportUsmap();

	// 生成 Mod 工具菜单
	TSharedRef<SWidget> GenerateModToolsMenu();
};


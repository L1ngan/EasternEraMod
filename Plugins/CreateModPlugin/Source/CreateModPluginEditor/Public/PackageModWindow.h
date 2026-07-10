#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

class SPackageModWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SPackageModWindow)
	{}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	
	// 检查是否可以关闭窗口
	bool CanCloseWindow() const { return !bIsPackaging && !bIsCooking; }
	
	// 设置窗口引用（用于阻止关闭）
	void SetWindow(TSharedPtr<class SWindow> InWindow) { WindowPtr = InWindow; }

private:
	TArray<TSharedPtr<FString>> ModList;
	TSharedPtr<class SListView<TSharedPtr<FString>>> ModListView;
	TSharedPtr<class SButton> PackageButton;
	TSharedPtr<class STextBlock> StatusTextBlock;
	TSharedPtr<class SWindow> WindowPtr;
	
	TArray<FString> SelectedModPaths;
	TSet<FString> CheckedModPaths; // 使用TSet来跟踪勾选的mod
	bool bIsPackaging;
	bool bIsCooking; // 是否正在Cook
	bool bIsCheckboxEnabled; // 复选框是否可用（打包时禁用）
	int32 CurrentPackagingIndex;
	int32 TotalPackagingCount;

	void RefreshModList();
	TSharedRef<class ITableRow> GenerateModListRow(TSharedPtr<FString> InItem, const TSharedRef<class STableViewBase>& OwnerTable);
	FReply OnPackageButtonClicked();
	void OnModCheckStateChanged(ECheckBoxState NewState, TSharedPtr<FString> ModPath);
	ECheckBoxState IsModChecked(TSharedPtr<FString> ModPath) const;
	bool IsCheckboxEnabled() const { return bIsCheckboxEnabled; }
	
	// 用于属性绑定的函数，避免使用 Lambda 导致闪烁
	bool IsPackageEnabled() const { return SelectedModPaths.Num() > 0 && !bIsPackaging; }
	
	// 获取状态文本
	FText GetStatusText() const;
	
	// 打包主流程（旧的逐Mod Cook与Standalone旁路已删除：不可达且与主路径漂移）
	void ContinuePackaging();

	// 打包批次出错时的统一收尾：重置全部批次状态并收掉进度通知，避免窗口卡死/通知悬挂
	void AbortPackagingBatch();
	
	// 保存打包所需的变量，以便在 Cook 完成后继续
	FString SavedModPath;
	FString SavedModFolderPath;
	FString SavedCookedModPath;
	FString SavedSavePath;
	FString SavedUnrealPakPath;
	TArray<FString> SavedNonAssetFiles;
	bool bHasAssetFilesToCook;
	FProcHandle CookProcessHandle;
	
	// 批量打包队列
	TArray<FString> ModPackagingQueue;
	
	// 打包前校验：ModInfo.json 必填字段 / Main.lua 语法 / 配置 JSON 与 StructName / 图标与 GameplayTags ini 存在性
	// 返回 false 时 OutErrors 携带逐条问题明细（供弹窗展示）
	bool ValidateModsForPackaging(TArray<FText>& OutErrors) const;

	// 检查是否需要Cook（是否有任何mod包含资产文件）
	bool CheckIfNeedCook();
	
	// 执行Cook（Cook整个项目）
	void ExecuteCookForAllMods();
	
	// Cook完成后开始打包队列
	void StartPackagingAfterCook();
	
	// 打包单个mod的函数（不包含Cook逻辑）
	void PackageSingleMod(const FString& ModPath);
	
	// Cook 进度通知
	TWeakPtr<class SNotificationItem> CookProgressNotification;
	
	// Pak 进度通知
	TWeakPtr<class SNotificationItem> PakProgressNotification;
	
	// 更新 Cook 进度（在主线程中调用）
	void UpdateCookProgress(float Progress, const FText& StatusText);
	
	// 更新 Pak 进度（在主线程中调用）
	void UpdatePakProgress(float Progress, const FText& StatusText);
	
	// 解析 Cook 输出中的进度信息（静态函数，不依赖成员变量）
	static float ParseCookProgress(const FString& Output);
	
	// 解析 Pak 输出中的进度信息（静态函数，不依赖成员变量）
	static float ParsePakProgress(const FString& Output);
};


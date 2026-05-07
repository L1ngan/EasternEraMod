#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPath.h"
#include "ModInfoEditorData.generated.h"

struct FPropertyChangedEvent;

// Mod 依赖信息
USTRUCT(BlueprintType)
struct CREATEMODPLUGINEDITOR_API FModDependencyData
{
	GENERATED_BODY()

	// 依赖的 Mod ID
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency")
	FString ModId;

	// 最小版本号（可选）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency")
	FString MinVersion;

	// 是否必需
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency")
	bool bRequired = true;
};

// Mod 信息数据类
UCLASS(BlueprintType)
class CREATEMODPLUGINEDITOR_API UModInfoData : public UObject
{
	GENERATED_BODY()

public:
	UModInfoData()
	{
		ModId = TEXT("");
		ModName = TEXT("");
		Version = TEXT("1.0.0");
		Author = TEXT("");
		Description = TEXT("");
		Icon = TEXT("");
		MainLuaFile = TEXT("Main.lua");
		ModInformationAssetPath = FSoftObjectPath();
		bNewGameLoad = false;
		MinGameVersion = TEXT("0.1");
		bIncludeGameplayTags = false;
		GameplayTagsIniFile = TEXT("");
		ModFolderPath = TEXT("");
		PublishedFileId = TEXT("");
	}

	// Mod 唯一标识符
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
	FString ModId;

	// Mod 显示名称
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
	FString ModName;

	// Mod 版本号
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
	FString Version;

	// Mod 作者
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
	FString Author;

	// Mod 描述
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic", meta = (MultiLine = true))
	FString Description;

	// Mod 图标路径
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic")
	FString Icon;

	// 主 Lua 文件
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Files", meta = (FilePath, RelativeToGameDir))
	FString MainLuaFile = TEXT("Main.lua");

	// Mod 信息资产路径
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Files", meta = (AllowedClasses = "/Script/CreateModPlugin.ModInformationAsset"))
	FSoftObjectPath ModInformationAssetPath;

	// 依赖列表
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependencies")
	TArray<FModDependencyData> Dependencies;

	// 是否在新游戏时加载
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool bNewGameLoad = false;

	// 支持的游戏最小版本号
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	FString MinGameVersion;

	// 是否包含 GameplayTag配置 使用引擎GameplayTag管理器添加或删除
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	bool bIncludeGameplayTags = false;

	// 当 bIncludeGameplayTags 为真时，GameplayTag 的 ini 路径（相对 Mod 根目录，或选中的路径；保存时会规范为 {ModId}GameplayTags.ini）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (EditCondition = "bIncludeGameplayTags", EditConditionHides))
	FString GameplayTagsIniFile;

	// Mod 文件夹路径（用于保存 JSON 文件）
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings")
	FString ModFolderPath;

	// Steam 发布的文件 ID（由上传流程写入 ModInfo.json，不在本插件编辑器中编辑）
	UPROPERTY(BlueprintReadWrite, Category = "Settings")
	FString PublishedFileId;

	// 额外打包的资产列表（相对于项目Content目录的路径）
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Packaging", meta = (ToolTip = "Additional assets to include in pak file. Paths should be relative to Content directory."))
	TArray<FString> AdditionalAssets;

	/** 默认 GameplayTags ini 相对于 Mod 根目录的文件名：{ModId}GameplayTags.ini */
	static FString MakeGameplayTagsIniFileName(const FString& InModId);

	/** 默认 GameplayTags ini 的绝对路径（与 EnsureDefaultGameplayTagsIni 使用相同规则；若无法解析则空） */
	FString GetDefaultGameplayTagsIniFullPath() const;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	/** 在 Mod 根目录下若不存在则创建默认 GameplayTags ini，并设置 GameplayTagsIniFile 为「{ModId}GameplayTags.ini」 */
	void EnsureDefaultGameplayTagsIni();
#endif
private:
	FString GetModContentRootForGameplayTags() const;
#if WITH_EDITOR
	void WriteDefaultGameplayTagsIniContent(const FString& IniPath) const;
#endif
};


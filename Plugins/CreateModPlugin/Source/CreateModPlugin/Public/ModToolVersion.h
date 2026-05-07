#pragma once

#include "CoreMinimal.h"
#include "ModToolVersion.generated.h"

/**
 * Mod工具版本号定义
 * 当Mod工具功能更新时，需要更新此版本号
 * 格式：主版本号.次版本号.修订号（例如：1.0.0）
 */
UCLASS()
class CREATEMODPLUGIN_API UModToolVersion : public UObject
{
	GENERATED_BODY()

public:
	// 获取当前Mod工具版本号
	static FString GetModToolVersion()
	{
		// Mod工具版本号
		// 更新说明：
		// - 主版本号：重大功能更新或架构变更
		// - 次版本号：添加新功能
		// - 修订号：bug修复或小改动
		return TEXT("1.0.0");
	}
};

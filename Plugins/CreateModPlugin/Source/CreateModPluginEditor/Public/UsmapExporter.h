#pragma once

#include "CoreMinimal.h"

// .usmap 映射文件导出器
// 供 FModel / UAssetGUI / UAssetAPI 等社区工具解析本游戏 cooked 资产使用，
// 随每个游戏版本导出一份分发给 Mod 作者，替代玩家侧注入 dump（UE5.6 注入器普遍不可用）。
// 格式为 usmap v3(LargeEnums) 无压缩（参照 UAssetAPI 读端；引擎存在超 255 条目的枚举，v0 装不下），
// 从编辑器反射数据直接生成；跳过 CPF_EditorOnly 属性以匹配打包后运行时的属性布局。
class FUsmapExporter
{
public:
	// 导出映射文件。InOutputPath 为空时默认写到 Saved/Mappings/<项目名>.usmap
	// 返回是否成功，OutResultMessage 带回结果描述（成功时含路径与统计，失败时含原因）
	static bool Export(const FString& InOutputPath, FString& OutResultMessage);
};

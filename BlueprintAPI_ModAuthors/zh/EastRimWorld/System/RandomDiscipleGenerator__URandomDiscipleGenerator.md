# `class` `URandomDiscipleGenerator`

**源码头文件:** `EastRimWorld/System/RandomDiscipleGenerator.h`

---

## 功能说明（来自头文件注释）

> 随机弟子生成器。
> 根据 FRandomDiscipleConfig 在运行时动态组装一个新弟子的 FCharacterSaveData，
> 不依赖 DT_CharacterPresetConfig 预设表行。
> 关键约定：
>   OutSaveData.CharacterID  = Config.TemplateCharacterID（指向 DT_HumanData 行，供系统查表）
>   OutSaveData.CharacterGuid = 由调用方在外部设置（保证 SAVIOR 注册正确）
>   两者职责不同，不可混用。

## 蓝图暴露函数

### 函数 `GenerateDisciple`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="RandomDisciple" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `Config` | const [FRandomDiscipleConfig](../WorldSystem/WorldStruct__FRandomDiscipleConfig.md)& |
| `ForceGuid` | `const FGuid&` |
| `TeamID` | `int32` |
| `OutSaveData` | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "RandomDisciple", meta = (WorldContext = "WorldContextObject")) static bool GenerateDisciple( UObject* WorldContextObject, const FRandomDiscipleConfig& Config, const FGuid& ForceGuid, int32 TeamID, FCharacterSaveData& OutSaveData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成一个随机弟子的存档数据。
> @param WorldContextObject  任意 UObject，用于获取 GameMode / WorldDirector
> @param Config              随机弟子生成配置（TemplateCharacterID 必须填写）
> @param ForceGuid           所属势力 GUID（当 Config.ForcePool 为空时用于反查 ForceID）
> @param TeamID              生成后所在队伍 ID
> @param OutSaveData         输出的弟子存档数据；CharacterGuid 由调用方在返回后赋值
> @return 是否成功（TemplateCharacterID 为空或 ForceID 找不到时返回 false）

---

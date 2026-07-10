# `class` `URandomDiscipleGenerator`

**Source header:** `EastRimWorld/System/RandomDiscipleGenerator.h`

---

## Functional description (from header comments)

> 随机弟子生成器。
> 根据 FRandomDiscipleConfig 在运行时动态组装一个新弟子的 FCharacterSaveData，
> 不依赖 DT_CharacterPresetConfig 预设表行。
> 关键约定：
>   OutSaveData.CharacterID  = Config.TemplateCharacterID（指向 DT_HumanData 行，供系统查表）
>   OutSaveData.CharacterGuid = 由调用方在外部设置（保证 SAVIOR 注册正确）
>   两者职责不同，不可混用。

## Blueprint-exposed functions

### Function `GenerateDisciple`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="RandomDisciple" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `Config` | const [FRandomDiscipleConfig](../WorldSystem/WorldStruct__FRandomDiscipleConfig.md)& |
| `ForceGuid` | `const FGuid&` |
| `TeamID` | `int32` |
| `OutSaveData` | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "RandomDisciple", meta = (WorldContext = "WorldContextObject")) static bool GenerateDisciple( UObject* WorldContextObject, const FRandomDiscipleConfig& Config, const FGuid& ForceGuid, int32 TeamID, FCharacterSaveData& OutSaveData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 生成一个随机弟子的存档数据。
> @param WorldContextObject  任意 UObject，用于获取 GameMode / WorldDirector
> @param Config              随机弟子生成配置（TemplateCharacterID 必须填写）
> @param ForceGuid           所属势力 GUID（当 Config.ForcePool 为空时用于反查 ForceID）
> @param TeamID              生成后所在队伍 ID
> @param OutSaveData         输出的弟子存档数据；CharacterGuid 由调用方在返回后赋值
> @return 是否成功（TemplateCharacterID 为空或 ForceID 找不到时返回 false）

---

# `class` `UModCharacterLayerLibrary`

**Source header:** `EastRimWorld/Mod/ModCharacterLayerLibrary.h`

---

## Functional description (from header comments)

> MOD 角色数据层。
> MOD 写的捏脸、换的预设、指定的立绘都按角色 Guid 存在 MOD 数据区（ASaveGameDataActor::ModCharacterRecords
> 与 BP_SaveGameData 的蓝图变量 ModAppearanceProfiles），游戏原有字段一律不写；生成外观、取立绘时在这里叠加。
> 写它的 Mod 没加载时 MOD 数据不生效，角色按原数据显示，MOD 数据原样保留。

## Blueprint-exposed functions

### Function `ResolveCharacterAvatarPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="Mod System|Character" |
| Return type | `FSoftObjectPath` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `CharacterGuid` | `FGuid` |
| `OriginalAvatar` | `FSoftObjectPath` |
| `AvatarType` | [EDiscipleAvatarType](../Struct/CharacterStruct__EDiscipleAvatarType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "Mod System|Character", meta = (WorldContext = "WorldContextObject")) static FSoftObjectPath ResolveCharacterAvatarPath(const UObject* WorldContextObject, FGuid CharacterGuid, FSoftObjectPath OriginalAvatar, EDiscipleAvatarType AvatarType);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 界面用：按角色 Guid 取生效的立绘路径；有 MOD 立绘时返回它，否则原样返回 OriginalAvatar

---

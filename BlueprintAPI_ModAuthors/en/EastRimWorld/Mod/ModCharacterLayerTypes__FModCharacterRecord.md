# `struct` `FModCharacterRecord`

**Source header:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## Functional description (from header comments)

> MOD 数据区里一个角色的记录（按角色 Guid 存在 ASaveGameDataActor::ModCharacterRecords）。
> 只记 MOD 写的东西，游戏原有字段（CustomizationId、AvatarConfigID、主角捏脸档案）一律不写；
> 捏脸档案本体是插件的蓝图结构体，放在 BP_SaveGameData 的蓝图变量 ModAppearanceProfiles 里，这里只放元数据。

## Blueprint-exposed variables

### Property `AppearanceModId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) FName AppearanceModId;` |

**Notes:**

> 最后写捏脸的 Mod；None 表示没有捏脸层

---

### Property `AppearanceAssetRefs`

| Field | Details |
|------|------|
| C++ type | `TMap<FString, FSoftObjectPath>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) TMap<FString, FSoftObjectPath> AppearanceAssetRefs;` |

**Notes:**

> 捏脸档案里每个对象引用的软路径（键为属性路径）。档案里的发型等是硬引用，写它的 Mod 停用时读档会变空，靠这份补回

---

### Property `PresetOverrideId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) FString PresetOverrideId;` |

**Notes:**

> Mod 换的捏脸预设（预设表行名）；为空表示没换

---

### Property `PresetModId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) FName PresetModId;` |

**Notes:**

> 换预设的 Mod

---

### Property `AvatarConfigId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) FName AvatarConfigId;` |

**Notes:**

> Mod 指定的立绘行（立绘表行名）；None 表示没指定

---

### Property `AvatarModId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly) FName AvatarModId;` |

**Notes:**

> 指定立绘的 Mod

---

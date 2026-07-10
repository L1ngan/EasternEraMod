# `struct` `FModSaveRecord`

**Source header:** `EastRimWorld/Mod/ModInfo.h`

---

## Functional description (from header comments)

> 存档中记录的单个已启用 Mod（随主存档序列化，读档时用于兼容检查）

## Blueprint-exposed variables

### Property `ModId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) FName ModId;` |

**Notes:**

> Unique identifier of the enabled mod recorded in the save file

---

### Property `Version`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, SaveGame) FString Version;` |

**Notes:**

> Version of the mod at the time the game was saved

---

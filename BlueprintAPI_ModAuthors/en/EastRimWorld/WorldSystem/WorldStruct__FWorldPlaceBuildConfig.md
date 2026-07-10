# `struct` `FWorldPlaceBuildConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> World Place Build Config data structure.

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText Name;` |

**Notes:**

> 建筑名称

---

### Property `BuildType`

| Field | Details |
|------|------|
| C++ type | [EWorldPlaceBuildType](WorldStruct__EWorldPlaceBuildType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EWorldPlaceBuildType BuildType = EWorldPlaceBuildType::Produce;` |

**Notes:**

> 建筑类型(用于势力建造倾向)

---

### Property `FuncType`

| Field | Details |
|------|------|
| C++ type | [EPlaceBuildFuncType](WorldStruct__EPlaceBuildFuncType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EPlaceBuildFuncType FuncType = EPlaceBuildFuncType::PlaceAttribute;` |

**Notes:**

> 建筑功能类型

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText Desc;` |

**Notes:**

> 建筑描述

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> 图标

---

### Property `PriorityBase`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 PriorityBase = 0;` |

**Notes:**

> 建筑的基础建造优先级(数值越大越优先)

---

### Property `LevelInfos`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FPlaceBuildLevelInfo](WorldStruct__FPlaceBuildLevelInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<int32,FPlaceBuildLevelInfo> LevelInfos;` |

**Notes:**

> 建筑设施等级信息(从1开始)

---

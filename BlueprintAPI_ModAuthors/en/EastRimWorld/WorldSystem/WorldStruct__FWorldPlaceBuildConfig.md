# `struct` `FWorldPlaceBuildConfig`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText Name;` |

**Source comments:**

> 建筑名称

---

### Property `BuildType`

| Field | Details |
|------|------|
| C++ type | `EWorldPlaceBuildType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EWorldPlaceBuildType BuildType = EWorldPlaceBuildType::Produce;` |

**Source comments:**

> 建筑类型(用于势力建造倾向)

---

### Property `FuncType`

| Field | Details |
|------|------|
| C++ type | `EPlaceBuildFuncType` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EPlaceBuildFuncType FuncType = EPlaceBuildFuncType::PlaceAttribute;` |

**Source comments:**

> 建筑功能类型

---

### Property `Desc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText Desc;` |

**Source comments:**

> 建筑描述

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UTexture2D> Icon;` |

**Source comments:**

> 图标

---

### Property `PriorityBase`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 PriorityBase = 0;` |

**Source comments:**

> 建筑的基础建造优先级(数值越大越优先)

---

### Property `LevelInfos`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FPlaceBuildLevelInfo](WorldStruct__FPlaceBuildLevelInfo.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TMap<int32,FPlaceBuildLevelInfo> LevelInfos;` |

**Source comments:**

> 建筑设施等级信息(从1开始)

---

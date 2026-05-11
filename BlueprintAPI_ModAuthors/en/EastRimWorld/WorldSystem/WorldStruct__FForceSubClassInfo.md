# `struct` `FForceSubClassInfo`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> 势力堂口信息（内门、外门、外事）

## Blueprint-exposed variables

### Property `SubClassIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 SubClassIndex = 0;` |

**Source comments:**

> 堂口Id(直属于势力=0)，分堂从1开始

---

### Property `SubClassName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText SubClassName;` |

**Source comments:**

> 堂口名称

---

### Property `SubClassFeatureIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> SubClassFeatureIDs;` |

**Source comments:**

> 堂口已经配置的特性

---

### Property `SubClassForceSexApparels`

| Field | Details |
|------|------|
| C++ type | TMap<bool,[FCustomApparelsSkin](WorldStruct__FCustomApparelsSkin.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<bool,FCustomApparelsSkin>SubClassForceSexApparels;` |

**Source comments:**

> 当前堂口服饰（门派换装保存的）(分性别)

---

### Property `bUseSubClassForceApparel`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bUseSubClassForceApparel = false;` |

**Source comments:**

> 是否使用堂口统一服饰

---

### Property `ItemUseStates`

| Field | Details |
|------|------|
| C++ type | `TMap<FGameplayTag , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FGameplayTag , bool> ItemUseStates;` |

**Source comments:**

> 物品使用状态
> TMap<总标签 , 状态>

---

### Property `ActionStates`

| Field | Details |
|------|------|
| C++ type | `TMap<FName , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FName , bool> ActionStates;` |

**Source comments:**

> 行为控制

---

### Property `TreasureStalls`

| Field | Details |
|------|------|
| C++ type | `TMap<int32 , bool>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<int32 , bool> TreasureStalls;` |

**Source comments:**

> 允许使用的珍宝阁货柜

---

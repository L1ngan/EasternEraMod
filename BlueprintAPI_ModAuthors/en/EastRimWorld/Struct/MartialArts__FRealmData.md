# `struct` `FRealmData`

**Source header:** `EastRimWorld/Struct/MartialArts.h`

---

## Functional description (from header comments)

> 境界数据

## Blueprint-exposed variables

### Property `LevelName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="MartialArtsLevel" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MartialArtsLevel") FText LevelName;` |

**Notes:**

> 等级名字

---

### Property `MartialArtsScore`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Realm" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Realm") int MartialArtsScore = 0;` |

**Notes:**

> 所需的武学分数

---

### Property `RealmLevel`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Realm" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Realm") int RealmLevel = 0;` |

**Notes:**

> 境界等级

---

### Property `Characteristic`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="Realm" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Realm") TArray<FName> Characteristic;` |

**Notes:**

> 包含的特性

---

### Property `SlotNumber`

| Field | Details |
|------|------|
| C++ type | TMap<[EMartialArtsMajorCategories](MartialArts__EMartialArtsMajorCategories.md),int> |
| Reflection specifiers | BlueprintReadWrite, Category="Realm" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Realm") TMap<EMartialArtsMajorCategories,int> SlotNumber;` |

**Notes:**

> 携带的插槽数量

---

### Property `AddReputation`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Force" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Force") float AddReputation = 0.f;` |

**Notes:**

> 增加所属势力声望

---

### Property `AddGrowScore`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Force" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Force") float AddGrowScore = 0.f;` |

**Notes:**

> 提供给NPC势力的成长积分

---

### Property `bBreakThrough`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Force" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category="Force") bool bBreakThrough = false;` |

**Notes:**

> 是否需要突破

---

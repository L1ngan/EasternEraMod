# `struct` `FSocialRelationshipConfig`

**Source header:** `EastRimWorld/Struct/CharacterChatStruct.h`

---

## Functional description (from header comments)

> 社交关系配置

## Blueprint-exposed variables

### Property `Name`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FText Name;` |

**Notes:**

> 关系名称

---

### Property `MinGoodOpinion`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) int32 MinGoodOpinion = 0;` |

**Notes:**

> 好感度

---

### Property `MaxGoodOpinion`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) int32 MaxGoodOpinion = 0;` |

**Notes:**

> Upper bound of good opinion (favorability) for this relationship

---

### Property `OnlyOppositeSex`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) bool OnlyOppositeSex = false;` |

**Notes:**

> 仅异性?

---

### Property `MaleDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FText MaleDesc;` |

**Notes:**

> 关系中对男性的描述(例如丈夫)

---

### Property `FemaleDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FText FemaleDesc;` |

**Notes:**

> 关系中对女性的描述(例如妻子)

---

### Property `LevelUpType`

| Field | Details |
|------|------|
| C++ type | [ERelationshipLevelUpType](CharacterChatStruct__ERelationshipLevelUpType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) ERelationshipLevelUpType LevelUpType = ERelationshipLevelUpType::Auto;` |

**Notes:**

> 达成此关系的方式

---

### Property `LevelUpBuilding`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FName> LevelUpBuilding;` |

**Notes:**

> 非自动升级时所需仪式建筑ID

---

### Property `ApplyTimes`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) int32 ApplyTimes = 0;` |

**Notes:**

> 申请次数

---

### Property `ChatBuffs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FName> ChatBuffs;` |

**Notes:**

> 对话buff

---

### Property `DeathBuffs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FName> DeathBuffs;` |

**Notes:**

> 关系人死亡触发buff

---

### Property `ConflictRelationID`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FName> ConflictRelationID;` |

**Notes:**

> 冲突关系(当与其他人存在以下关系时不能发展为此关系)

---

### Property `UIOrder`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) int32 UIOrder = 0;` |

**Notes:**

> UI显示上的排序

---

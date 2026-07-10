# `struct` `FFightPawnSkillSlotInfo`

**Source header:** `EastRimWorld/Framework/ERW_FightPawn.h`

---

## Functional description (from header comments)

> 技能槽信息（UI 初始化用）
> SlotIndex = -1 表示鼠标左键普攻；0~N 表示 1234... 技能槽

## Blueprint-exposed variables

### Property `SlotIndex`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Skill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") int32 SlotIndex = -2;` |

**Notes:**

> Slot index: -1 = left-mouse normal attack, 0~N = skill slots, -2 = invalid

---

### Property `AbilityID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Skill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") FName AbilityID;` |

**Notes:**

> Ability ID bound to this skill slot

---

### Property `BookID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Skill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") FName BookID;` |

**Notes:**

> 武学书ID（招式所属武学；普攻等无武学来源时为 None）

---

### Property `SkillName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Skill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") FText SkillName;` |

**Notes:**

> Display name of the skill

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly, Category="FightPawn|Skill" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="FightPawn|Skill") TSoftObjectPtr<UTexture2D> Icon;` |

**Notes:**

> Skill icon texture (soft reference)

---

# `struct` `FMijiMoveVM`

**Source header:** `EastRimWorld/UI/MartialArts/WuxueMijiTujianWidget.h`

---

## Functional description (from header comments)

> 秘籍招式视图模型

## Blueprint-exposed variables

### Property `MoveID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FName MoveID;` |

**Notes:**

> 招式ID（关联 GameAbilityStruct，源自 FMartialArtsBookData::GiveAbility）

---

### Property `MoveName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText MoveName;` |

**Notes:**

> 招式名称（来自 FGameAbilityStruct::SkillName）

---

### Property `MoveDesc`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") FText MoveDesc;` |

**Notes:**

> 招式介绍（来自 FGameAbilityStruct::SkillDescribe）

---

### Property `RealmReq`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") int32 RealmReq = 0;` |

**Notes:**

> 需要的境界等级

---

### Property `bOwned`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Miji" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Miji") bool bOwned = false;` |

**Notes:**

> 玩家是否已掌握

---

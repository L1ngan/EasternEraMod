# `struct` `FCharacterWeapon`

**Source header:** `EastRimWorld/Struct/ItemStruct.h`

---

## Functional description (from header comments)

> 角色武器

## Blueprint-exposed variables

### Property `WeaponType`

| Field | Details |
|------|------|
| C++ type | `EWeaponType` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") EWeaponType WeaponType = EWeaponType::None;` |

**Notes:**

> 武器类型

---

### Property `EquipWeaponAbility`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName EquipWeaponAbility;` |

**Notes:**

> 装备此武器的能力

---

### Property `DemountWeaponAbility`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName DemountWeaponAbility;` |

**Notes:**

> 卸载此武器的能力

---

### Property `HandParentSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Weapon" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, Category = "Weapon",BlueprintReadOnly) FName HandParentSocket = NAME_None;` |

**Notes:**

> 手持武器的插槽

---

### Property `CarryParentSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly, Category="Weapon" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, Category = "Weapon",BlueprintReadOnly) FName CarryParentSocket = NAME_None;` |

**Notes:**

> 携带武器的插槽

---

### Property `WeaponStaticMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") TSoftObjectPtr<UStaticMesh> WeaponStaticMesh;` |

**Notes:**

> 武器的模型

---

### Property `WeaponInjuryType`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FText WeaponInjuryType;` |

**Notes:**

> 伤害类型

---

### Property `bSecondaryWeapon`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Weapon" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, Category = "Weapon",BlueprintReadOnly) bool bSecondaryWeapon = false;` |

**Notes:**

> 是否有第二个武器

---

### Property `SecondaryHandParentSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon",meta=(EditConditionHides,EditCondition = "bSecondaryWeapon")) FName SecondaryHandParentSocket = NAME_None;` |

**Notes:**

> 第二手持武器的插槽

---

### Property `SecondaryCarryParentSocket`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon",meta=(EditConditionHides,EditCondition = "bSecondaryWeapon")) FName SecondaryCarryParentSocket = NAME_None;` |

**Notes:**

> 第二携带武器的插槽

---

### Property `SecondaryWeaponStaticMesh`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UStaticMesh>` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon",meta=(EditConditionHides,EditCondition = "bSecondaryWeapon")) TSoftObjectPtr<UStaticMesh> SecondaryWeaponStaticMesh;` |

**Notes:**

> 第二武器模型

---

### Property `BattleBlendSpace`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UBlendSpace>` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") TSoftObjectPtr<UBlendSpace> BattleBlendSpace;` |

**Notes:**

> 武器对应的混合空间

---

### Property `AttackLossDurability`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Weapon" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") float AttackLossDurability;` |

**Notes:**

> 使用技能时减少的武器耐久

---

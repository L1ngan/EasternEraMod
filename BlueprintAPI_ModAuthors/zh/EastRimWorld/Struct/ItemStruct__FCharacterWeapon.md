# `struct` `FCharacterWeapon`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 角色武器

## 蓝图暴露变量

### 属性 `WeaponType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EWeaponType` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") EWeaponType WeaponType = EWeaponType::None;` |

**说明:**

> 武器类型

---

### 属性 `EquipWeaponAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName EquipWeaponAbility;` |

**说明:**

> 装备此武器的能力

---

### 属性 `DemountWeaponAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName DemountWeaponAbility;` |

**说明:**

> 卸载此武器的能力

---

### 属性 `HandParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Weapon" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, Category = "Weapon",BlueprintReadOnly) FName HandParentSocket = NAME_None;` |

**说明:**

> 手持武器的插槽

---

### 属性 `CarryParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Weapon" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, Category = "Weapon",BlueprintReadOnly) FName CarryParentSocket = NAME_None;` |

**说明:**

> 携带武器的插槽

---

### 属性 `WeaponStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") TSoftObjectPtr<UStaticMesh> WeaponStaticMesh;` |

**说明:**

> 武器的模型

---

### 属性 `WeaponInjuryType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FText WeaponInjuryType;` |

**说明:**

> 伤害类型

---

### 属性 `bSecondaryWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Weapon" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, Category = "Weapon",BlueprintReadOnly) bool bSecondaryWeapon = false;` |

**说明:**

> 是否有第二个武器

---

### 属性 `SecondaryHandParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon",meta=(EditConditionHides,EditCondition = "bSecondaryWeapon")) FName SecondaryHandParentSocket = NAME_None;` |

**说明:**

> 第二手持武器的插槽

---

### 属性 `SecondaryCarryParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon",meta=(EditConditionHides,EditCondition = "bSecondaryWeapon")) FName SecondaryCarryParentSocket = NAME_None;` |

**说明:**

> 第二携带武器的插槽

---

### 属性 `SecondaryWeaponStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon",meta=(EditConditionHides,EditCondition = "bSecondaryWeapon")) TSoftObjectPtr<UStaticMesh> SecondaryWeaponStaticMesh;` |

**说明:**

> 第二武器模型

---

### 属性 `BattleBlendSpace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UBlendSpace>` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") TSoftObjectPtr<UBlendSpace> BattleBlendSpace;` |

**说明:**

> 武器对应的混合空间

---

### 属性 `AttackLossDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") float AttackLossDurability;` |

**说明:**

> 使用技能时减少的武器耐久

---

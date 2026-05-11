# `struct` `FModCharacterWeapon`

**源码头文件：** `CreateModPlugin/Public/EquipmentDataStruct.h`

---

## 功能说明（来自头文件注释）

> Mod 武器结构

## 蓝图暴露变量

### 属性 `WeaponType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") uint8 WeaponType = 0;` |

**源码注释：**

> 武器类型

---

### 属性 `EquipWeaponAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName EquipWeaponAbility;` |

**源码注释：**

> 装备此武器的能力

---

### 属性 `DemountWeaponAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName DemountWeaponAbility;` |

**源码注释：**

> 卸载此武器的能力

---

### 属性 `HandParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName HandParentSocket = NAME_None;` |

**源码注释：**

> 手持武器的插槽

---

### 属性 `CarryParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName CarryParentSocket = NAME_None;` |

**源码注释：**

> 携带武器的插槽

---

### 属性 `WeaponStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") TSoftObjectPtr<UStaticMesh> WeaponStaticMesh;` |

**源码注释：**

> 武器的模型

---

### 属性 `WeaponInjuryType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FText WeaponInjuryType;` |

**源码注释：**

> 伤害类型

---

### 属性 `bSecondaryWeapon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") bool bSecondaryWeapon = false;` |

**源码注释：**

> 是否有第二个武器

---

### 属性 `SecondaryHandParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName SecondaryHandParentSocket = NAME_None;` |

**源码注释：**

> 第二手持武器的插槽

---

### 属性 `SecondaryCarryParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") FName SecondaryCarryParentSocket = NAME_None;` |

**源码注释：**

> 第二携带武器的插槽

---

### 属性 `SecondaryWeaponStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UStaticMesh>` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") TSoftObjectPtr<UStaticMesh> SecondaryWeaponStaticMesh;` |

**源码注释：**

> 第二武器模型

---

### 属性 `BattleBlendSpace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UBlendSpace>` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") TSoftObjectPtr<UBlendSpace> BattleBlendSpace;` |

**源码注释：**

> 武器对应的混合空间

---

### 属性 `AttackLossDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") float AttackLossDurability = 0.f;` |

**源码注释：**

> 使用技能时减少的武器耐久

---

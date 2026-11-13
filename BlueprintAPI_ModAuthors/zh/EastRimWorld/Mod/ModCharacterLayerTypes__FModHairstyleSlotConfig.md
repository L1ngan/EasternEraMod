# `struct` `FModHairstyleSlotConfig`

**源码头文件:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## 功能说明（来自头文件注释）

> 开放给 Mod 的发型槽（头发、胡子各一个），按发型数据资产的类区分

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ID;` |

---

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText DisplayName;` |

---

### 属性 `HairstyleClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UObject>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) TSoftClassPtr<UObject> HairstyleClass;` |

**说明:**

> 这个槽的发型数据资产类（插件的 BP_CDA_Hairstyle 子类）

---

### 属性 `bAllowEmpty`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAllowEmpty = false;` |

**说明:**

> 是否允许留空（如胡子）

---

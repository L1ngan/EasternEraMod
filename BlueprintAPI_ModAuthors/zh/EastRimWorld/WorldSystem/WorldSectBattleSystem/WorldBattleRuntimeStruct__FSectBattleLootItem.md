# `struct` `FSectBattleLootItem`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## 功能说明（来自头文件注释）

> 门派战拾取的战利品（队伍共享）。一条 = 一种物品（同 id 累加数量）。供 UI 展示战利品/背包列表。

## 蓝图暴露变量

### 属性 `ItemId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName ItemId;` |

**说明:**

> 物品 id

---

### 属性 `ItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](../../Struct/CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EGroundInventoryType ItemType = EGroundInventoryType::None;` |

**说明:**

> 物品类型（决定查哪张物品表）

---

### 属性 `Num`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 Num = 0;` |

**说明:**

> 数量（同 id 拾取时累加）

---

### 属性 `ItemName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FText ItemName;` |

**说明:**

> 名字

---

### 属性 `ItemDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FText ItemDescription;` |

**说明:**

> 描述

---

### 属性 `ItemIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TSoftObjectPtr<UTexture2D> ItemIcon;` |

**说明:**

> 图标

---

### 属性 `ItemQuality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemQuality` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EItemQuality ItemQuality = EItemQuality::None;` |

**说明:**

> 品质

---

### 属性 `ItemGrade`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FText ItemGrade;` |

**说明:**

> 品阶

---

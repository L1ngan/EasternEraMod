# `struct` `FUseItemSaveData`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> Use Item Save Data 数据结构。

## 蓝图暴露变量

### 属性 `InventoryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Common") FName InventoryID;` |

**说明:**

> 物品的id

---

### 属性 `GroundInventoryType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundInventoryType](CommonEnum__EGroundInventoryType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Common" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EGroundInventoryType GroundInventoryType = EGroundInventoryType::None;` |

**说明:**

> 物品的大分类

---

### 属性 `EquipmentType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EEquipmentType](CommonEnum__EEquipmentType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Common" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EEquipmentType EquipmentType = EEquipmentType::None;` |

**说明:**

> 装备的类型

---

### 属性 `ArmorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EArmorType](CommonEnum__EArmorType.md) |
| 反射说明符 | BlueprintReadWrite, Category="Common" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EArmorType ArmorType = EArmorType::None;` |

**说明:**

> 防具的类型

---

### 属性 `ItemTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame,Category = "Common") FTransform ItemTransform;` |

**说明:**

> 物品在世界中的位置

---

### 属性 `bOperationMark`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") bool bOperationMark = false;` |

**说明:**

> 是否被操作标记

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ECommonButtonType](../UI/Struct/UIStruct__ECommonButtonType.md),bool> |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") TMap<ECommonButtonType,bool> ButtonOperationState;` |

**说明:**

> 相关按钮的状态 是否选中

---

### 属性 `InventoryItemStateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EInventoryItemStateType](ItemStruct__EInventoryItemStateType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") EInventoryItemStateType InventoryItemStateType = EInventoryItemStateType::None;` |

**说明:**

> 物品状态

---

### 属性 `ItemGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Common") FGuid ItemGuid;` |

**说明:**

> 物品的GUID

---

### 属性 `SmallGrids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FWarehouseSmallGrid](ItemStruct__FWarehouseSmallGrid.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") TArray<FWarehouseSmallGrid> SmallGrids;` |

**说明:**

> 此物品占用的小格子信息

---

### 属性 `ItemCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") int32 ItemCount = 1;` |

**说明:**

> 物品的数量

---

### 属性 `GroundSoilType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGroundSoilType](../ERW_Enumerations__EGroundSoilType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**说明:**

> 物品所在的地面类型

---

### 属性 `ResidueItemShelfLife`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float ResidueItemShelfLife = 0.f;` |

**说明:**

> 剩余保质期

---

### 属性 `CurDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float CurDurability = 0.f;` |

**说明:**

> 当前耐久度

---

### 属性 `CurCopyNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float CurCopyNum = 0.f;` |

**说明:**

> 当前已抄录次数

---

### 属性 `CurAirDryingDegree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") int32 CurAirDryingDegree = 0;` |

**说明:**

> 当前风干度

---

### 属性 `MainAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> MainAttributes;` |

**说明:**

> 此装备的主属性(EquipmentAttribute表）

---

### 属性 `SubAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> SubAttributes;` |

**说明:**

> 此装备的次属性(EquipmentAttribute表）

---

### 属性 `EquipmentAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> EquipmentAbility;` |

**说明:**

> 此装备自带的技能

---

### 属性 `CharacterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") FString CharacterName;` |

**说明:**

> 打造的人名字

---

### 属性 `ItemState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EItemUseState](ItemStruct__EItemUseState.md) |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite ,SaveGame , Category = "Equipment") EItemUseState ItemState = EItemUseState::None;` |

**说明:**

> 装备的使用状态

---

### 属性 `GrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldForce" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "WorldForce") float GrowScore = 0.f;` |

**说明:**

> Grow Score 字段。

---

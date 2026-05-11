# `struct` `FUseItemSaveData`

**源码头文件：** `EastRimWorld/Struct/ItemStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `InventoryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Common") FName InventoryID;` |

**源码注释：**

> 物品的id

---

### 属性 `GroundInventoryType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGroundInventoryType` |
| 反射说明符 | BlueprintReadWrite, Category="Common" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EGroundInventoryType GroundInventoryType = EGroundInventoryType::None;` |

**源码注释：**

> 物品的大分类

---

### 属性 `EquipmentType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EEquipmentType` |
| 反射说明符 | BlueprintReadWrite, Category="Common" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EEquipmentType EquipmentType = EEquipmentType::None;` |

**源码注释：**

> 装备的类型

---

### 属性 `ArmorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EArmorType` |
| 反射说明符 | BlueprintReadWrite, Category="Common" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Common") EArmorType ArmorType = EArmorType::None;` |

**源码注释：**

> 防具的类型

---

### 属性 `ItemTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame,Category = "Common") FTransform ItemTransform;` |

**源码注释：**

> 物品在世界中的位置

---

### 属性 `bOperationMark`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") bool bOperationMark = false;` |

**源码注释：**

> 是否被操作标记

---

### 属性 `ButtonOperationState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECommonButtonType,bool>` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") TMap<ECommonButtonType,bool> ButtonOperationState;` |

**源码注释：**

> 相关按钮的状态 是否选中

---

### 属性 `InventoryItemStateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EInventoryItemStateType` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") EInventoryItemStateType InventoryItemStateType = EInventoryItemStateType::None;` |

**源码注释：**

> 物品状态

---

### 属性 `ItemGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Common") FGuid ItemGuid;` |

**源码注释：**

> 物品的GUID

---

### 属性 `SmallGrids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FWarehouseSmallGrid>` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") TArray<FWarehouseSmallGrid> SmallGrids;` |

**源码注释：**

> 此物品占用的小格子信息

---

### 属性 `ItemCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") int32 ItemCount = 1;` |

**源码注释：**

> 物品的数量

---

### 属性 `GroundSoilType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGroundSoilType` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") EGroundSoilType GroundSoilType = EGroundSoilType::None;` |

**源码注释：**

> 物品所在的地面类型

---

### 属性 `ResidueItemShelfLife`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float ResidueItemShelfLife = 0.f;` |

**源码注释：**

> 剩余保质期

---

### 属性 `CurDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float CurDurability = 0.f;` |

**源码注释：**

> 当前耐久度

---

### 属性 `CurCopyNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") float CurCopyNum = 0.f;` |

**源码注释：**

> 当前已抄录次数

---

### 属性 `CurAirDryingDegree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "Common") int32 CurAirDryingDegree = 0;` |

**源码注释：**

> 当前风干度

---

### 属性 `MainAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> MainAttributes;` |

**源码注释：**

> 此装备的主属性(EquipmentAttribute表）

---

### 属性 `SubAttributes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> SubAttributes;` |

**源码注释：**

> 此装备的次属性(EquipmentAttribute表）

---

### 属性 `EquipmentAbility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") TArray<FName> EquipmentAbility;` |

**源码注释：**

> 此装备自带的技能

---

### 属性 `CharacterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Equipment") FString CharacterName;` |

**源码注释：**

> 打造的人名字

---

### 属性 `ItemState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemUseState` |
| 反射说明符 | BlueprintReadWrite, Category="Equipment" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite ,SaveGame , Category = "Equipment") EItemUseState ItemState = EItemUseState::None;` |

**源码注释：**

> 装备的使用状态

---

### 属性 `GrowScore`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldForce" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,SaveGame, Category = "WorldForce") float GrowScore = 0.f;` |

---

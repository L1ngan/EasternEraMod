# `struct` `FCollectSaveData`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> Collect Save Data 数据结构。

## 蓝图暴露变量

### 属性 `InventoryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly, Category = "Common") FName InventoryID;` |

**说明:**

> 采集物id

---

### 属性 `CurHealth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurHealth = 0.0f;` |

**说明:**

> 当前健康值

---

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid Guid;` |

**说明:**

> Guid

---

### 属性 `SubstituteGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FGuid SubstituteGuid;` |

**说明:**

> 替身Actor的Guid

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

### 属性 `bSelectState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Common" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame, Category = "Common") bool bSelectState = false;` |

**说明:**

> 是否是选中状态

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

### 属性 `bSuspendGrow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) bool bSuspendGrow = false;` |

**说明:**

> 是否暂停生长

---

### 属性 `CurGrowStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGrowStageType](ItemStruct__EGrowStageType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) EGrowStageType CurGrowStage = EGrowStageType::None;` |

**说明:**

> 当前的阶段

---

### 属性 `CurGrowTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurGrowTime = {0.f};` |

**说明:**

> Cur Grow Time 字段。

---

### 属性 `CurHarvestTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurHarvestTime = {0.f};` |

**说明:**

> 总收成时间 如果会结果

---

### 属性 `CurStageGrowTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurStageGrowTime = {0.f};` |

**说明:**

> 阶段生长时间

---

### 属性 `FellDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int FellDurability { -1 };` |

**说明:**

> 砍伐耐久度

---

### 属性 `HarvestDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int HarvestDurability { -1 };` |

**说明:**

> 收割耐久度

---

### 属性 `MiningDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int MiningDurability { -1 };` |

**说明:**

> 开采耐久度

---

### 属性 `ExplorationTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int ExplorationTime { -1 };` |

**说明:**

> Exploration Time 字段。

---

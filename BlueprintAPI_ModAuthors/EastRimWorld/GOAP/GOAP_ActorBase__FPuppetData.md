# `struct` `FPuppetData`

**源码头文件：** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## 功能说明（来自头文件注释）

> 傀儡相关数据

## 蓝图暴露变量

### 属性 `AddedPuppetIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, EditAnywhere, BlueprintReadWrite) TArray<FName> AddedPuppetIDs;` |

**源码注释：**

> 建筑物中已添加的傀儡ID列表（相同的傀儡只能添加一次）

---

### 属性 `CurrentRefit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FGameplayTag CurrentRefit;` |

---

### 属性 `RefitMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag,FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) TMap<FGameplayTag,FName> RefitMap;` |

---

### 属性 `RefitItemSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUseItemSaveData](../Struct/ItemStruct__FUseItemSaveData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FUseItemSaveData RefitItemSaveData;` |

---

### 属性 `RefitCarrayReourceActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly , SaveGame) FName RefitCarrayReourceActionID;` |

---

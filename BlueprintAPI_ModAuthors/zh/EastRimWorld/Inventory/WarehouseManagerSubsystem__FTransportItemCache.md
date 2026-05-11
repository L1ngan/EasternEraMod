# `struct` `FTransportItemCache`

**源码头文件:** `EastRimWorld/Inventory/WarehouseManagerSubsystem.h`

---

## 功能说明（来自头文件注释）

> 物品缓存

## 蓝图暴露变量

### 属性 `ObjectData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FUObjectData ObjectData;` |

**源码注释:**

> 对应的ItemAction

---

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGOAP_Actions` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGOAP_Actions Actions;` |

**源码注释:**

> ActionData

---

### 属性 `Plans`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FGOAP_Action> Plans;` |

**源码注释:**

> 执行的计划链

---

### 属性 `ActionCost`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float ActionCost = 99999;` |

**源码注释:**

> 消耗

---

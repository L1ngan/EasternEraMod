# `struct` `FExplorationReward`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> Exploration Reward 数据结构。

## 蓝图暴露变量

### 属性 `Rewards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName, [FAllTypeItemDrop](ItemStruct__FAllTypeItemDrop.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TMap<FName, FAllTypeItemDrop> Rewards;` |

**说明:**

> 物品ID及数量

---

### 属性 `Weight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) int32 Weight = 0;` |

**说明:**

> 权重

---

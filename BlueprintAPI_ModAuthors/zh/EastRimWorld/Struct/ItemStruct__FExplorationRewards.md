# `struct` `FExplorationRewards`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> Exploration Rewards 数据结构。

## 蓝图暴露变量

### 属性 `Rewards`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FExplorationReward](ItemStruct__FExplorationReward.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TArray<FExplorationReward> Rewards;` |

**说明:**

> 奖池

---

### 属性 `Level`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) int32 Level = -1;` |

**说明:**

> 需要达到的境界

---

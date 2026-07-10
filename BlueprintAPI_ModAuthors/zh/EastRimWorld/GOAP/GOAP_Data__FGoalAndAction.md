# `struct` `FGoalAndAction`

**源码头文件:** `EastRimWorld/GOAP/GOAP_Data.h`

---

## 功能说明（来自头文件注释）

> GOAP目标与行动的组合数据

## 蓝图暴露变量

### 属性 `GoalID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) FName GoalID;` |

**说明:**

> GOAP目标配置表ID

---

### 属性 `Action`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGOAP_Action](GOAP_Data__FGOAP_Action.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) FGOAP_Action Action;` |

**说明:**

> GOAP行动数据

---

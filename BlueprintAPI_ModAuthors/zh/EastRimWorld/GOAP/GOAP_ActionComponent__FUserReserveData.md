# `struct` `FUserReserveData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ActionComponent.h`

---

## 功能说明（来自头文件注释）

> 用户预留的物品数据

## 蓝图暴露变量

### 属性 `ItemID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FName ItemID;` |

**源码注释:**

> 物品ID

---

### 属性 `Num`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 Num { 0 };` |

**源码注释:**

> 预留数量

---

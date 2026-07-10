# `struct` `FTaskSelectableAward`

**源码头文件:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> Task Selectable Award 数据结构。

## 蓝图暴露变量

### 属性 `ItemData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FItemSimpleData](CommonStruct__FItemSimpleData.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FItemSimpleData ItemData;` |

**说明:**

> 物品信息

---

### 属性 `ConsumeFavor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ConsumeFavor = 0.f;` |

**说明:**

> 消耗好感度(暂不实现)

---

### 属性 `ConsumeItems`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FItemSimpleData](CommonStruct__FItemSimpleData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FItemSimpleData> ConsumeItems;` |

**说明:**

> 消耗物品(暂不实现)

---

# `struct` `FChatTypeData`

**源码头文件:** `EastRimWorld/Struct/CharacterChatStruct.h`

---

## 功能说明（来自头文件注释）

> 社交类型数据

## 蓝图暴露变量

### 属性 `TriggerProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) float TriggerProbability = 0.f;` |

**说明:**

> 触发概率(0~1)

---

### 属性 `TriggerDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) float TriggerDistance = 0.f;` |

**说明:**

> 触发距离

---

### 属性 `ChatRichTexts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FText> ChatRichTexts;` |

**说明:**

> 富文本

---

### 属性 `GoodOpinionWeights`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FChatConditionWeight](CharacterChatStruct__FChatConditionWeight.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FChatConditionWeight> GoodOpinionWeights;` |

**说明:**

> 好感度变化概率

---

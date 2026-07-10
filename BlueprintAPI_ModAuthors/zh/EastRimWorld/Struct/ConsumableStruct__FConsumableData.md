# `struct` `FConsumableData`

**源码头文件:** `EastRimWorld/Struct/ConsumableStruct.h`

---

## 功能说明（来自头文件注释）

> 耗材

## 蓝图暴露变量

### 属性 `MainEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Consumable" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TArray<FName> MainEffects;` |

**说明:**

> 主效果（耗材效果表ID 使用时全部生效）

---

### 属性 `BonusEffects`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadWrite, Category="Consumable" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TMap<FName,int32> BonusEffects;` |

**说明:**

> 带权重的附加效果（key=耗材效果表ID 可配置为None视为不触发任何效果 value=权重 使用时按权重随机一条）

---

### 属性 `Conditions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Consumable" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TArray<FName> Conditions;` |

**说明:**

> 使用条件（耗材条件表ID 需全部满足才能使用）

---

### 属性 `TriggerOnActionStart`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Consumable" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TArray<FName> TriggerOnActionStart;` |

**说明:**

> 哪些行为开始时可以触发（GOAP行为配置表ID）

---

### 属性 `TriggerOnActionEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Consumable" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Consumable") TArray<FName> TriggerOnActionEnd;` |

**说明:**

> 哪些行为结束时可以触发（GOAP行为配置表ID）

---

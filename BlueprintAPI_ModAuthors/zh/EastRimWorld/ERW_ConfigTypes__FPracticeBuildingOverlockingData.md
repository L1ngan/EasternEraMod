# `struct` `FPracticeBuildingOverlockingData`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 练功建筑超频配置数据，包含超频优先级、概率、比例、消耗、时长、冷却、耐久损耗、修炼Buff概率、可能附加的伤势及显示图标。

## 蓝图暴露变量

### 属性 `OverlockingLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 OverlockingLevel = 0;` |

**说明:**

> 超频优先级

---

### 属性 `OverlockingProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OverlockingProbability = 0.f;` |

**说明:**

> 超频概率

---

### 属性 `OverlockingProportion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OverlockingProportion = 0.f;` |

**说明:**

> 超频比例

---

### 属性 `OverlockingExpend`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 OverlockingExpend = 0;` |

**说明:**

> 超频消耗

---

### 属性 `OverlockingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OverlockingTime = 0.f;` |

**说明:**

> 超频时长

---

### 属性 `OverlockingCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float OverlockingCD = 0.f;` |

**说明:**

> 冷却时长

---

### 属性 `PracticeReduceDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float PracticeReduceDurability = 0.f;` |

**说明:**

> 超频每次修炼减少的耐久度（负数）

---

### 属性 `CharacterPracticeGetBuffProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) float CharacterPracticeGetBuffProbability = 0.f;` |

**说明:**

> 当前超频时角色修炼获得BUFF的概率

---

### 属性 `PracticeBuildingWhenOverlockingCharacterAddInjury`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FOverlockingAddInjuryData](ERW_CommonTypes__FOverlockingAddInjuryData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FOverlockingAddInjuryData> PracticeBuildingWhenOverlockingCharacterAddInjury;` |

**说明:**

> 当前超频可能使修炼的角色获得的伤势数组

---

### 属性 `OverlockingIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TSoftObjectPtr<UTexture2D> OverlockingIcon;` |

**说明:**

> 显示图标

---

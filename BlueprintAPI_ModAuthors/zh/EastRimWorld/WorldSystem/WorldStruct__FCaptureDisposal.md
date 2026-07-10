# `struct` `FCaptureDisposal`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 俘虏的处置

## 蓝图暴露变量

### 属性 `CaptureCharacterDisposalType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ECaptureCharacterDisposalType](WorldStruct__ECaptureCharacterDisposalType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECaptureCharacterDisposalType CaptureCharacterDisposalType = ECaptureCharacterDisposalType::None;` |

**说明:**

> 处置类型

---

### 属性 `Weight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Weight = 1;` |

**说明:**

> 权重

---

### 属性 `FavorabilityChanges`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float FavorabilityChanges = 0.f;` |

**说明:**

> 好感度变化

---

### 属性 `ReputationChanges`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float ReputationChanges = 0.f;` |

**说明:**

> 声望变化

---

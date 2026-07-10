# `struct` `FLetterPaperConfig`

**源码头文件:** `EastRimWorld/System/Letterpaper/BirdLetterSystem.h`

---

## 功能说明（来自头文件注释）

> 对话碎片表

## 蓝图暴露变量

### 属性 `DialogueId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName DialogueId;` |

**说明:**

> id

---

### 属性 `DialogueType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ELetterDialogueType](BirdLetterSystem__ELetterDialogueType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ELetterDialogueType DialogueType = ELetterDialogueType::None;` |

**说明:**

> 类型

---

### 属性 `DialogueTitle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText DialogueTitle;` |

**说明:**

> 信笺标题

---

### 属性 `Dialogue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<UDialogue*>` |
| 反射说明符 | BlueprintReadWrite, Category="LetterBase" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LetterBase") TArray<UDialogue*> Dialogue;` |

**说明:**

> 对应对话

---

### 属性 `Probability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="LetterBase" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LetterBase") int32 Probability = 0;` |

**说明:**

> 概率

---

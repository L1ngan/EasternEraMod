# `struct` `FDialogueSpec`

**源码头文件:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## 功能说明（来自头文件注释）

> 具体对话

## 蓝图暴露变量

### 属性 `DialogueGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FGuid DialogueGuid;` |

**说明:**

> 对话的唯一GUID

---

### 属性 `CompleteDialogue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) TArray<FName> CompleteDialogue;` |

**说明:**

> 完成的对话ID

---

### 属性 `DialogueGroupID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FName DialogueGroupID;` |

**说明:**

> 所属的对话分组表ID

---

### 属性 `DialogueGroupItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FDialogueGroupItem](DialogueStruct__FDialogueGroupItem.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FDialogueGroupItem DialogueGroupItem;` |

**说明:**

> 实际触发的对话组

---

### 属性 `DialogueInitiator`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FGuid DialogueInitiator;` |

**说明:**

> 对话发起者

---

### 属性 `DialogueTarget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) FGuid DialogueTarget;` |

**说明:**

> 对话目标

---

### 属性 `DialogueInitiatorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EDialogueActorType](DialogueStruct__EDialogueActorType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) EDialogueActorType DialogueInitiatorType = EDialogueActorType::None;` |

**说明:**

> 对话发起者类型

---

### 属性 `DialogueTargetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EDialogueActorType](DialogueStruct__EDialogueActorType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) EDialogueActorType DialogueTargetType = EDialogueActorType::None;` |

**说明:**

> 对话目标类型

---

# `struct` `FDialogueInfo`

**源码头文件:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## 功能说明（来自头文件注释）

> 对话信息

## 蓝图暴露变量

### 属性 `DialogueText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DialogueText;` |

**说明:**

> 对话文本

---

### 属性 `DialogueOptions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> DialogueOptions;` |

**说明:**

> 对话选项

---

### 属性 `RandOptions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FDialogueRandOptions](DialogueStruct__FDialogueRandOptions.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueRandOptions> RandOptions;` |

**说明:**

> 随机选项

---

### 属性 `bClickSpacePass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bClickSpacePass;` |

**说明:**

> 点击空白处跳过

---

### 属性 `NextDialogueID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition="bClickSpacePass")) FName NextDialogueID;` |

**说明:**

> 空白处跳过的下一个对话

---

### 属性 `DialogueCharacterInfoType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EDialogueCharacterInfoType](DialogueStruct__EDialogueCharacterInfoType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EDialogueCharacterInfoType DialogueCharacterInfoType = EDialogueCharacterInfoType::None;` |

**说明:**

> 是否显示角色信息类型

---

### 属性 `OverrideAvatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoftObjectPath OverrideAvatar;` |

**说明:**

> 强制使用此立绘

---

### 属性 `OverrideFirstName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OverrideFirstName;` |

**说明:**

> 强制使用此名字

---

### 属性 `OverrideName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OverrideName;` |

**说明:**

> 强制使用此名字

---

### 属性 `OverrideTitle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OverrideTitle;` |

**说明:**

> /强制使用此称号

---

### 属性 `MaleVoiceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName MaleVoiceID;` |

**说明:**

> 语音id 读取 GameSoundInfo 配置表

---

### 属性 `FemaleVoiceID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName FemaleVoiceID;` |

**说明:**

> Female Voice ID 字段。

---

### 属性 `ForceCommonRandOptions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FDialogueRandOptions](DialogueStruct__FDialogueRandOptions.md) |
| 反射说明符 | BlueprintReadWrite, Category="WorldForce" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="WorldForce") FDialogueRandOptions ForceCommonRandOptions;` |

**说明:**

> 通用势力选项(对话目标为势力时使用与特殊势力选项ForceSpecialRandOptions组合随机一个)

---

### 属性 `ForceSpecialRandOptions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FDialogueRandOptions](DialogueStruct__FDialogueRandOptions.md)> |
| 反射说明符 | BlueprintReadWrite, Category="WorldForce" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="WorldForce") TMap<FName,FDialogueRandOptions> ForceSpecialRandOptions;` |

**说明:**

> 特殊势力选项(对话目标为势力时使用，与通用势力选项ForceCommonRandOptions组合随机一个)

---

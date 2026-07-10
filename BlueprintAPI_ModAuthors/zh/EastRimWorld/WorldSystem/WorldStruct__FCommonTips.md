# `struct` `FCommonTips`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> Common Tips 数据结构。

## 蓝图暴露变量

### 属性 `TipsType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETipsType](WorldStruct__ETipsType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType TipsType = ETipsType::None;` |

**说明:**

> 提示的类型

---

### 属性 `TipsSeverity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETipsSeverity](WorldStruct__ETipsSeverity.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsSeverity TipsSeverity = ETipsSeverity::Normal;` |

**说明:**

> 提示的分级

---

### 属性 `bNeedSave`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bNeedSave = false;` |

**说明:**

> 是否需要存档

---

### 属性 `InitiatesPromptTargetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EInitiatesPromptTargetType](WorldStruct__EInitiatesPromptTargetType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EInitiatesPromptTargetType InitiatesPromptTargetType = EInitiatesPromptTargetType::None;` |

**说明:**

> 发起提示的对象

---

### 属性 `InstigatorGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid InstigatorGuid;` |

**说明:**

> 发起者的GUID

---

### 属性 `TipsLabel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipsLabel;` |

**说明:**

> 提示条显示文字

---

### 属性 `bIsOverride`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIsOverride = false;` |

**说明:**

> 覆盖显示，同类型只显示一条

---

### 属性 `AnswerTitle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText AnswerTitle;` |

**说明:**

> 提示主Tip的标题，鼠标移上去显示Tip的标题

---

### 属性 `AnswerText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText AnswerText;` |

**说明:**

> 提示主Tip的内容

---

### 属性 `Time`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Time;` |

**说明:**

> 提示的显示时间，0为不自动消失(bRightClickRemove为true时,才有效)

---

### 属性 `bIsShowTimebar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIsShowTimebar = false;` |

**说明:**

> 是否显示倒计时进度条

---

### 属性 `TipItemWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSoftClassPath TipItemWidget;` |

**说明:**

> 显示一行的Widget

---

### 属性 `TipInfoWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSoftClassPath TipInfoWidget;` |

**说明:**

> 鼠标悬浮时显示的Widget

---

### 属性 `bLiftClickForward`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bLiftClickForward = false;` |

**说明:**

> 左键点击"前往"

---

### 属性 `InteractionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ETipInteractionType](WorldStruct__ETipInteractionType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipInteractionType InteractionType = ETipInteractionType::None;` |

**说明:**

> 左键点击交互操作

---

### 属性 `OpenWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftClassPath` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSoftClassPath OpenWidget;` |

**说明:**

> 左键点击打开窗口

---

### 属性 `InteractionTargetGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FGuid> InteractionTargetGuids;` |

**说明:**

> 交互对象数组(用于储存多个跳转对象)

---

### 属性 `bRightClickRemove`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bRightClickRemove = false;` |

**说明:**

> 是否能右键点击后删除该提示

---

### 属性 `GuidArray`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FGuid> GuidArray;` |

**说明:**

> 提示现在存在的相关对象GUID

---

### 属性 `ValueId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FName> ValueId;` |

**说明:**

> 提示的对象ID（对于没有Guid的信息值）

---

### 属性 `Value`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TArray<FText> Value;` |

**说明:**

> 提示的替换文本值（用于动态替换文本模块中的{0}..{9}）

---

### 属性 `CommonModuleIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CommonModuleIds;` |

**说明:**

> 要添加的公共模块id

---

### 属性 `bNeedReplace`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bNeedReplace = true;` |

**说明:**

> 是否需要直接代码替换文本（方便UI主动更新提示文本）

---

### 属性 `TipsSound`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName TipsSound;` |

**说明:**

> 音效 读取GameSoundInfo配置

---

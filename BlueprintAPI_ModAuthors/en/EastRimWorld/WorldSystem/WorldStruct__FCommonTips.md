# `struct` `FCommonTips`

**Source header:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## Functional description (from header comments)

> Common Tips data structure.

## Blueprint-exposed variables

### Property `TipsType`

| Field | Details |
|------|------|
| C++ type | [ETipsType](WorldStruct__ETipsType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsType TipsType = ETipsType::None;` |

**Notes:**

> 提示的类型

---

### Property `TipsSeverity`

| Field | Details |
|------|------|
| C++ type | [ETipsSeverity](WorldStruct__ETipsSeverity.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipsSeverity TipsSeverity = ETipsSeverity::Normal;` |

**Notes:**

> 提示的分级

---

### Property `bNeedSave`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bNeedSave = false;` |

**Notes:**

> 是否需要存档

---

### Property `InitiatesPromptTargetType`

| Field | Details |
|------|------|
| C++ type | [EInitiatesPromptTargetType](WorldStruct__EInitiatesPromptTargetType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EInitiatesPromptTargetType InitiatesPromptTargetType = EInitiatesPromptTargetType::None;` |

**Notes:**

> 发起提示的对象

---

### Property `InstigatorGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid InstigatorGuid;` |

**Notes:**

> 发起者的GUID

---

### Property `TipsLabel`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TipsLabel;` |

**Notes:**

> 提示条显示文字

---

### Property `bIsOverride`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIsOverride = false;` |

**Notes:**

> 覆盖显示，同类型只显示一条

---

### Property `AnswerTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText AnswerTitle;` |

**Notes:**

> 提示主Tip的标题，鼠标移上去显示Tip的标题

---

### Property `AnswerText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText AnswerText;` |

**Notes:**

> 提示主Tip的内容

---

### Property `Time`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Time;` |

**Notes:**

> 提示的显示时间，0为不自动消失(bRightClickRemove为true时,才有效)

---

### Property `bIsShowTimebar`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIsShowTimebar = false;` |

**Notes:**

> 是否显示倒计时进度条

---

### Property `TipItemWidget`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSoftClassPath TipItemWidget;` |

**Notes:**

> 显示一行的Widget

---

### Property `TipInfoWidget`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSoftClassPath TipInfoWidget;` |

**Notes:**

> 鼠标悬浮时显示的Widget

---

### Property `bLiftClickForward`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bLiftClickForward = false;` |

**Notes:**

> 左键点击"前往"

---

### Property `InteractionType`

| Field | Details |
|------|------|
| C++ type | [ETipInteractionType](WorldStruct__ETipInteractionType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ETipInteractionType InteractionType = ETipInteractionType::None;` |

**Notes:**

> 左键点击交互操作

---

### Property `OpenWidget`

| Field | Details |
|------|------|
| C++ type | `FSoftClassPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FSoftClassPath OpenWidget;` |

**Notes:**

> 左键点击打开窗口

---

### Property `InteractionTargetGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FGuid> InteractionTargetGuids;` |

**Notes:**

> 交互对象数组(用于储存多个跳转对象)

---

### Property `bRightClickRemove`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bRightClickRemove = false;` |

**Notes:**

> 是否能右键点击后删除该提示

---

### Property `GuidArray`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FGuid> GuidArray;` |

**Notes:**

> 提示现在存在的相关对象GUID

---

### Property `ValueId`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FName> ValueId;` |

**Notes:**

> 提示的对象ID（对于没有Guid的信息值）

---

### Property `Value`

| Field | Details |
|------|------|
| C++ type | `TArray<FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) TArray<FText> Value;` |

**Notes:**

> 提示的替换文本值（用于动态替换文本模块中的{0}..{9}）

---

### Property `CommonModuleIds`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FName> CommonModuleIds;` |

**Notes:**

> 要添加的公共模块id

---

### Property `bNeedReplace`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bNeedReplace = true;` |

**Notes:**

> 是否需要直接代码替换文本（方便UI主动更新提示文本）

---

### Property `TipsSound`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName TipsSound;` |

**Notes:**

> 音效 读取GameSoundInfo配置

---

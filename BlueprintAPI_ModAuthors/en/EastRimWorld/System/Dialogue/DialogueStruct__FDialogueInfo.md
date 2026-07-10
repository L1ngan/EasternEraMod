# `struct` `FDialogueInfo`

**Source header:** `EastRimWorld/System/Dialogue/DialogueStruct.h`

---

## Functional description (from header comments)

> 对话信息

## Blueprint-exposed variables

### Property `DialogueText`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DialogueText;` |

**Notes:**

> 对话文本

---

### Property `DialogueOptions`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> DialogueOptions;` |

**Notes:**

> 对话选项

---

### Property `RandOptions`

| Field | Details |
|------|------|
| C++ type | TArray<[FDialogueRandOptions](DialogueStruct__FDialogueRandOptions.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FDialogueRandOptions> RandOptions;` |

**Notes:**

> 随机选项

---

### Property `bClickSpacePass`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bClickSpacePass;` |

**Notes:**

> 点击空白处跳过

---

### Property `NextDialogueID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,meta=(EditCondition="bClickSpacePass")) FName NextDialogueID;` |

**Notes:**

> 空白处跳过的下一个对话

---

### Property `DialogueCharacterInfoType`

| Field | Details |
|------|------|
| C++ type | [EDialogueCharacterInfoType](DialogueStruct__EDialogueCharacterInfoType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) EDialogueCharacterInfoType DialogueCharacterInfoType = EDialogueCharacterInfoType::None;` |

**Notes:**

> 是否显示角色信息类型

---

### Property `OverrideAvatar`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FSoftObjectPath OverrideAvatar;` |

**Notes:**

> 强制使用此立绘

---

### Property `OverrideFirstName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OverrideFirstName;` |

**Notes:**

> 强制使用此名字

---

### Property `OverrideName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OverrideName;` |

**Notes:**

> 强制使用此名字

---

### Property `OverrideTitle`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText OverrideTitle;` |

**Notes:**

> /强制使用此称号

---

### Property `MaleVoiceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName MaleVoiceID;` |

**Notes:**

> 语音id 读取 GameSoundInfo 配置表

---

### Property `FemaleVoiceID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName FemaleVoiceID;` |

**Notes:**

> Female Voice ID field.

---

### Property `ForceCommonRandOptions`

| Field | Details |
|------|------|
| C++ type | [FDialogueRandOptions](DialogueStruct__FDialogueRandOptions.md) |
| Reflection specifiers | BlueprintReadWrite, Category="WorldForce" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="WorldForce") FDialogueRandOptions ForceCommonRandOptions;` |

**Notes:**

> 通用势力选项(对话目标为势力时使用与特殊势力选项ForceSpecialRandOptions组合随机一个)

---

### Property `ForceSpecialRandOptions`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FDialogueRandOptions](DialogueStruct__FDialogueRandOptions.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="WorldForce" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite,Category="WorldForce") TMap<FName,FDialogueRandOptions> ForceSpecialRandOptions;` |

**Notes:**

> 特殊势力选项(对话目标为势力时使用，与通用势力选项ForceCommonRandOptions组合随机一个)

---

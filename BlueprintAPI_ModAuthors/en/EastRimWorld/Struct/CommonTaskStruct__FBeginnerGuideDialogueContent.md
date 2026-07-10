# `struct` `FBeginnerGuideDialogueContent`

**Source header:** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## Functional description (from header comments)

> 新手引导对话内容

## Blueprint-exposed variables

### Property `Index`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 Index { 0 };` |

**Notes:**

> 说话角色索引

---

### Property `Text`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Text;` |

**Notes:**

> 显示文本

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

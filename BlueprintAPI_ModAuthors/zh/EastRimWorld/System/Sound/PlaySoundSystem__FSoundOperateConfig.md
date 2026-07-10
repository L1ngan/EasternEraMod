# `struct` `FSoundOperateConfig`

**源码头文件:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

## 功能说明（来自头文件注释）

> Sound Operate Config 数据结构。

## 蓝图暴露变量

### 属性 `SoundGroupTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGameplayTagContainer SoundGroupTag;` |

**说明:**

> 影响的音效组 填分组标签

---

### 属性 `SoundOperateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [ESoundOperateType](PlaySoundSystem__ESoundOperateType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ESoundOperateType SoundOperateType = ESoundOperateType::None;` |

**说明:**

> 音效操作类型

---

### 属性 `VolumePercentage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::Gradient || SoundOperateType == ESoundOperateType::ResetPlay", EditConditionHides)) float VolumePercentage = 0.2;` |

**说明:**

> 音量百分比

---

### 属性 `GradientTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::Gradient", EditConditionHides)) float GradientTime = 1.f;` |

**说明:**

> 渐变时间

---

### 属性 `PlaySoundID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::NewPlay", EditConditionHides)) TArray<FName> PlaySoundID;` |

**说明:**

> 播放的新的音效 读取GameSoundInfo表

---

# `struct` `FSoundOperateConfig`

**源码头文件：** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `SoundGroupTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTagContainer` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGameplayTagContainer SoundGroupTag;` |

**源码注释：**

> 影响的音效组 填分组标签

---

### 属性 `SoundOperateType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ESoundOperateType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ESoundOperateType SoundOperateType = ESoundOperateType::None;` |

**源码注释：**

> 音效操作类型

---

### 属性 `VolumePercentage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::Gradient || SoundOperateType == ESoundOperateType::ResetPlay", EditConditionHides)) float VolumePercentage = 0.2;` |

**源码注释：**

> 音量百分比

---

### 属性 `GradientTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::Gradient", EditConditionHides)) float GradientTime = 1.f;` |

**源码注释：**

> 渐变时间

---

### 属性 `PlaySoundID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (EditCondition = "SoundOperateType == ESoundOperateType::NewPlay", EditConditionHides)) TArray<FName> PlaySoundID;` |

**源码注释：**

> 播放的新的音效 读取GameSoundInfo表

---

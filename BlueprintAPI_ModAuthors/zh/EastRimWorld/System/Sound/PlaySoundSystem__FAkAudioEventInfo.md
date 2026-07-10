# `struct` `FAkAudioEventInfo`

**源码头文件:** `EastRimWorld/System/Sound/PlaySoundSystem.h`

---

## 功能说明（来自头文件注释）

> Ak Audio Event Info 数据结构。

## 蓝图暴露变量

### 属性 `SoundTag`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGameplayTag` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") FGameplayTag SoundTag;` |

**说明:**

> 标签

---

### 属性 `AkAudioEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UAkAudioEvent *` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,Category = "Base") class UAkAudioEvent * AkAudioEvent = nullptr;` |

**说明:**

> 播放事件

---

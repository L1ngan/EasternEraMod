# `class` `ASoundActor`

**源码头文件：** `EastRimWorld/System/Sound/SoundActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `AudioComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UAudioComponent*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, VisibleAnywhere) UAudioComponent* AudioComponent = nullptr;` |

---

### 属性 `PlaySoundGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, VisibleAnywhere) FGuid PlaySoundGuid;` |

---

## 蓝图暴露函数

### 函数 `PlaySoundEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PlaySoundEnd();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PlaySound`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `float InVolumePercentage = 1.f` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PlaySound(float InVolumePercentage = 1.f);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `StopSound`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StopSound();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PauseSound`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bPause` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void PauseSound(bool bPause);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `InitSoundActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewGameSoundInfo` | `const FGameSoundInfo &` |
| `（匿名/仅类型）` | `FGuid PlayGuid = FGuid()` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitSoundActor(const FGameSoundInfo & NewGameSoundInfo,FGuid PlayGuid = FGuid());`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化音效Actor

---

### 函数 `OnSoundChangeEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `SoundOperate` | `const FSoundOperateConfig &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnSoundChangeEvent(const FSoundOperateConfig & SoundOperate);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetPlaySoundSpeed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewPitchMultiplier` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetPlaySoundSpeed(float NewPitchMultiplier);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置播放的速度

---

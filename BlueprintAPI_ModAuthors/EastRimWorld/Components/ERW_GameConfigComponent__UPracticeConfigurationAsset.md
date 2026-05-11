# `class` `UPracticeConfigurationAsset`

**源码头文件：** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 修炼配置

## 蓝图暴露变量

### 属性 `RoomAddExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPracticeAddAttributeRange](ERW_GameConfigComponent__FPracticeAddAttributeRange.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FPracticeAddAttributeRange> RoomAddExperience;` |

**源码注释：**

> 房间增加经验

---

### 属性 `FiveElementsAddExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPracticeAddAttributeRange](ERW_GameConfigComponent__FPracticeAddAttributeRange.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FPracticeAddAttributeRange> FiveElementsAddExperience;` |

**源码注释：**

> 五行增加经验

---

### 属性 `MoodAddExperience`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FPracticeAddAttributeRange](ERW_GameConfigComponent__FPracticeAddAttributeRange.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FPracticeAddAttributeRange> MoodAddExperience;` |

**源码注释：**

> 心情增加经验

---

### 属性 `AptitudeConversion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AptitudeConversion = 0.1;` |

**源码注释：**

> 资质转化率 每点资质额外提升百分比经验加成

---

### 属性 `ContinuouslyIncreaseIntervalTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 ContinuouslyIncreaseIntervalTime = 40;` |

**源码注释：**

> 持续增加经验间隔时间

---

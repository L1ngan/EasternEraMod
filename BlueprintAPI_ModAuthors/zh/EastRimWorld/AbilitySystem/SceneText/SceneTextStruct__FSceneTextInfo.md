# `struct` `FSceneTextInfo`

**源码头文件:** `EastRimWorld/AbilitySystem/SceneText/SceneTextStruct.h`

---

## 功能说明（来自头文件注释）

> 场景文字配置

## 蓝图暴露变量

### 属性 `SceneTextType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ESceneTextType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ESceneTextType SceneTextType = ESceneTextType::None;` |

**源码注释:**

> 显示字体的类型

---

### 属性 `TextAnimationType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ETextAnimationType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) ETextAnimationType TextAnimationType = ETextAnimationType::None;` |

**源码注释:**

> 动画类型

---

### 属性 `SpawnAngleRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SpawnAngleRange = 0.f;` |

**源码注释:**

> 生成角度区间

---

### 属性 `RandomSpawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector2D RandomSpawnOffset = FVector2D::ZeroVector;` |

**源码注释:**

> 生成位置偏移

---

### 属性 `DirectionalSpawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DirectionalSpawnOffset = 0.0f;` |

**源码注释:**

> 生成方向偏移

---

### 属性 `PopSizeType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EPopSizeType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) EPopSizeType PopSizeType = EPopSizeType::None;` |

**源码注释:**

> 弹出大小

---

### 属性 `bComeToStop`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bComeToStop = false;` |

**源码注释:**

> 是否停止

---

### 属性 `DecelerationRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float DecelerationRate = 0.0f;` |

**源码注释:**

> 减速效率

---

### 属性 `LifeTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float LifeTime = 0.f;` |

**源码注释:**

> 持续时间

---

### 属性 `Speed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float Speed = 0.f;` |

**源码注释:**

> 速度

---

### 属性 `bShowNumber`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bShowNumber = true;` |

**源码注释:**

> 是否显示数字

---

### 属性 `OptionalIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UTexture2D *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) UTexture2D * OptionalIcon = nullptr;` |

**源码注释:**

> 操作图标

---

### 属性 `IconScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float IconScale = 0.f;` |

**源码注释:**

> 图标大小

---

### 属性 `OptionalMessage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText OptionalMessage;` |

**源码注释:**

> 操作信息

---

### 属性 `OptionalMessageSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float OptionalMessageSize = 10.f;` |

**源码注释:**

> 操作信息字体大小

---

### 属性 `PlayerTextInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FTeamTextInfo](SceneTextStruct__FTeamTextInfo.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FTeamTextInfo PlayerTextInfo;` |

**源码注释:**

> 玩家阵营文字

---

### 属性 `EnemyTextInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FTeamTextInfo](SceneTextStruct__FTeamTextInfo.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FTeamTextInfo EnemyTextInfo;` |

**源码注释:**

> 玩家阵营文字

---

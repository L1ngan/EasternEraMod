# `struct` `FHungryEffectConfig`

**源码头文件：** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 饥饿伤势配置表

## 蓝图暴露变量

### 属性 `HungryEffectName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="FHungryEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") FText HungryEffectName;` |

**源码注释：**

> 饥饿阶段名称

---

### 属性 `HungryDegree`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EHungryDegree` |
| 反射说明符 | BlueprintReadWrite, Category="FHungryEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") EHungryDegree HungryDegree = EHungryDegree::None;` |

**源码注释：**

> 饥饿阶段程度

---

### 属性 `HungryMiniTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FHungryEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") float HungryMiniTime = 0.f;` |

**源码注释：**

> 饥饿阶段最少时间

---

### 属性 `HungryMaxTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="FHungryEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") float HungryMaxTime = 0.f;` |

**源码注释：**

> 饥饿阶段最大时间

---

### 属性 `ActiveMoodIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="FHungryEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") TArray<FName> ActiveMoodIds;` |

**源码注释：**

> 激活心情

---

### 属性 `ActiveInjuryIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,EBodyOrganType>` |
| 反射说明符 | BlueprintReadWrite, Category="FHungryEffectConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FHungryEffectConfig") TMap<FName,EBodyOrganType> ActiveInjuryIds;` |

**源码注释：**

> 激活伤势

---

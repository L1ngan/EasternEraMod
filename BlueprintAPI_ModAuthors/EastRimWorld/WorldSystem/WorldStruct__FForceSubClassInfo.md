# `struct` `FForceSubClassInfo`

**源码头文件：** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 势力堂口信息（内门、外门、外事）

## 蓝图暴露变量

### 属性 `SubClassIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 SubClassIndex = 0;` |

**源码注释：**

> 堂口Id(直属于势力=0)，分堂从1开始

---

### 属性 `SubClassName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FText SubClassName;` |

**源码注释：**

> 堂口名称

---

### 属性 `SubClassFeatureIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> SubClassFeatureIDs;` |

**源码注释：**

> 堂口已经配置的特性

---

### 属性 `SubClassForceSexApparels`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<bool,FCustomApparelsSkin>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<bool,FCustomApparelsSkin>SubClassForceSexApparels;` |

**源码注释：**

> 当前堂口服饰（门派换装保存的）(分性别)

---

### 属性 `bUseSubClassForceApparel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bUseSubClassForceApparel = false;` |

**源码注释：**

> 是否使用堂口统一服饰

---

### 属性 `ItemUseStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag , bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FGameplayTag , bool> ItemUseStates;` |

**源码注释：**

> 物品使用状态
> TMap<总标签 , 状态>

---

### 属性 `ActionStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<FName , bool> ActionStates;` |

**源码注释：**

> 行为控制

---

### 属性 `TreasureStalls`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , bool>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TMap<int32 , bool> TreasureStalls;` |

**源码注释：**

> 允许使用的珍宝阁货柜

---

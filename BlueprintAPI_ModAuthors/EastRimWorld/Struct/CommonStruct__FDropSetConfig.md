# `struct` `FDropSetConfig`

**源码头文件：** `EastRimWorld/Struct/CommonStruct.h`

---

## 功能说明（来自头文件注释）

> 掉落配置

## 蓝图暴露变量

### 属性 `MinAwardNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MinAwardNum = 1;` |

**源码注释：**

> 物品类型掉落最小数量 既选取DropSet最少多少个

---

### 属性 `MaxAwardNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 MaxAwardNum = 1;` |

**源码注释：**

> 物品类型掉落最大数量 既选取DropSet最多多少个

---

### 属性 `DropSet`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FDropItemInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,FDropItemInfo> DropSet;` |

**源码注释：**

> 掉落合集 key 道具ID Value 权重

---

### 属性 `MustDrop`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FDropItemInfo>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,FDropItemInfo> MustDrop;` |

**源码注释：**

> 必定额外掉落 key 道具ID value 数量

---

### 属性 `bRemoveDuplicate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) bool bRemoveDuplicate = false;` |

**源码注释：**

> 是否在随机多次时，随机到后不在参与随机（去重）

---

### 属性 `AwardImage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> AwardImage;` |

**源码注释：**

> 奖励图标

---

### 属性 `Describe`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText Describe;` |

**源码注释：**

> 奖励描述

---

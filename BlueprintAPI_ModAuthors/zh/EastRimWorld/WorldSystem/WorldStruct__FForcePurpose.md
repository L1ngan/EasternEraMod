# `struct` `FForcePurpose`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 门派宗旨

## 蓝图暴露变量

### 属性 `ForcePurposeID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FName ForcePurposeID;` |

**说明:**

> 门派宗旨ID

---

### 属性 `UnlockLevel`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) int32 UnlockLevel = 0;` |

**说明:**

> 门派宗旨解锁等级

---

### 属性 `ForcePurposeIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftObjectPtr<UTexture2D> ForcePurposeIcon;` |

**说明:**

> Force Purpose Icon 字段。

---

### 属性 `CostCoin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) int32 CostCoin = 0;` |

**说明:**

> 启用消耗的金钱

---

### 属性 `CostItem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName , int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName , int32> CostItem;` |

**说明:**

> 启用消耗的道具

---

### 属性 `PurposeBuffID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TArray<FName> PurposeBuffID;` |

**说明:**

> 门派宗旨BUFFID

---

### 属性 `PurposeName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText PurposeName;` |

**说明:**

> 门派宗旨名称

---

### 属性 `PurposeDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FText PurposeDesc;` |

**说明:**

> 门派宗旨描述

---

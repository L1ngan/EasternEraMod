# `struct` `FModTechUnlockItemConigStruct`

**源码头文件：** `CreateModPlugin/Public/TechnologyDataStruct.h`

---

## 功能说明（来自头文件注释）

> 科技解锁物品配置表结构

## 蓝图暴露变量

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FText DisplayName;` |

**源码注释：**

> 显示物品

---

### 属性 `FormatItemDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FModFormatText](BaseDataStruct__FModFormatText.md) |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") FModFormatText FormatItemDesc;` |

**源码注释：**

> 描述(格式化)

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TSoftObjectPtr<UTexture2D> Icon;` |

**源码注释：**

> 显示的图标

---

### 属性 `UnlockType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModTechUnlockItemType` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") EModTechUnlockItemType UnlockType = EModTechUnlockItemType::Building;` |

**源码注释：**

> 解锁物品类型

---

### 属性 `UnlockItemsIds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<FName> UnlockItemsIds;` |

**源码注释：**

> 解锁物品Ids

---

### 属性 `UnlockItemsNums`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<int32>` |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TArray<int32> UnlockItemsNums;` |

**源码注释：**

> 解锁物品数量(he )

---

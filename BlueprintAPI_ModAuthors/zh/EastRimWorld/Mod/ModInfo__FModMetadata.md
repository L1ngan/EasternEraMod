# `struct` `FModMetadata`

**源码头文件:** `EastRimWorld/Mod/ModInfo.h`

---

## 功能说明（来自头文件注释）

> Mod元数据信息

## 蓝图暴露变量

### 属性 `ModId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ModId;` |

**说明:**

> Mod唯一标识符

---

### 属性 `ModName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ModName;` |

**说明:**

> Mod名称

---

### 属性 `Version`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString Version;` |

**说明:**

> Mod版本号

---

### 属性 `Author`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString Author;` |

**说明:**

> Mod作者

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Description;` |

**说明:**

> Mod描述

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString Icon;` |

**说明:**

> Mod图标

---

### 属性 `Dependencies`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModDependency](ModInfo__FModDependency.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FModDependency> Dependencies;` |

**说明:**

> 依赖的Mod列表

---

### 属性 `MinGameVersion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString MinGameVersion;` |

**说明:**

> 支持的游戏最小版本（可选）

---

### 属性 `MainLuaFile`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString MainLuaFile = TEXT("Main.lua");` |

**说明:**

> 主Lua入口文件路径（相对于Mod根目录）

---

### 属性 `bNewGameLoad`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bNewGameLoad = false;` |

**说明:**

> 是否在新游戏时加载

---

### 属性 `ModToolVersion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString ModToolVersion;` |

**说明:**

> Mod工具版本号（用于检查Mod是否与当前游戏版本兼容）

---

### 属性 `bIncludeGameplayTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIncludeGameplayTags = false;` |

**说明:**

> 是否包含 GameplayTag 配置

---

### 属性 `PublishedFileId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString PublishedFileId;` |

**说明:**

> Steam 发布的文件 ID（上传到 Steam 后自动填充）

---

### 属性 `DataTableConfigs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModDataTableJsonConfig](ModInfo__FModDataTableJsonConfig.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FModDataTableJsonConfig> DataTableConfigs;` |

**说明:**

> 打包导出的配置表 JSON 列表（存在时运行时优先从此加载，不依赖 Cook 资产）

---

### 属性 `DataAssetConfigs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModDataAssetJsonConfig](ModInfo__FModDataAssetJsonConfig.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FModDataAssetJsonConfig> DataAssetConfigs;` |

**说明:**

> 打包导出的数据资产 JSON 列表

---

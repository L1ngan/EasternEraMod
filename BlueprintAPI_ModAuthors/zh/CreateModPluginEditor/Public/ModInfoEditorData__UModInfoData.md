# `class` `UModInfoData`

**源码头文件:** `CreateModPluginEditor/Public/ModInfoEditorData.h`

---

## 功能说明（来自头文件注释）

> Mod 信息数据类

## 蓝图暴露变量

### 属性 `ModId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Basic" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString ModId;` |

**源码注释:**

> Mod 唯一标识符

---

### 属性 `ModName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Basic" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString ModName;` |

**源码注释:**

> Mod 显示名称

---

### 属性 `Version`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Basic" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString Version;` |

**源码注释:**

> Mod 版本号

---

### 属性 `Author`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Basic" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString Author;` |

**源码注释:**

> Mod 作者

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Basic" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic", meta = (MultiLine = true)) FString Description;` |

**源码注释:**

> Mod 描述

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Basic" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString Icon;` |

**源码注释:**

> Mod 图标路径

---

### 属性 `MainLuaFile`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Files" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Files", meta = (FilePath, RelativeToGameDir)) FString MainLuaFile = TEXT("Main.lua");` |

**源码注释:**

> 主 Lua 文件

---

### 属性 `ModInformationAssetPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Files" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Files", meta = (AllowedClasses = "/Script/CreateModPlugin.ModInformationAsset")) FSoftObjectPath ModInformationAssetPath;` |

**源码注释:**

> Mod 信息资产路径

---

### 属性 `Dependencies`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FModDependencyData](ModInfoEditorData__FModDependencyData.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Dependencies" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependencies") TArray<FModDependencyData> Dependencies;` |

**源码注释:**

> 依赖列表

---

### 属性 `bNewGameLoad`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") bool bNewGameLoad = false;` |

**源码注释:**

> 是否在新游戏时加载

---

### 属性 `MinGameVersion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Settings" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") FString MinGameVersion;` |

**源码注释:**

> 支持的游戏最小版本号

---

### 属性 `bIncludeGameplayTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Settings" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") bool bIncludeGameplayTags = false;` |

**源码注释:**

> 是否包含 GameplayTag配置 使用引擎GameplayTag管理器添加或删除

---

### 属性 `GameplayTagsIniFile`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Settings" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (EditCondition = "bIncludeGameplayTags", EditConditionHides)) FString GameplayTagsIniFile;` |

**源码注释:**

> 当 bIncludeGameplayTags 为真时，GameplayTag 的 ini 路径（相对 Mod 根目录，或选中的路径；保存时会规范为 {ModId}GameplayTags.ini）

---

### 属性 `ModFolderPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Settings" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings") FString ModFolderPath;` |

**源码注释:**

> Mod 文件夹路径（用于保存 JSON 文件）

---

### 属性 `PublishedFileId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite, Category="Settings" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, Category = "Settings") FString PublishedFileId;` |

**源码注释:**

> Steam 发布的文件 ID（由上传流程写入 ModInfo.json，不在本插件编辑器中编辑）

---

### 属性 `AdditionalAssets`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FString>` |
| 反射说明符 | BlueprintReadWrite, Category="Packaging" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Packaging", meta = (ToolTip = "Additional assets to include in pak file. Paths should be relative to Content directory.")) TArray<FString> AdditionalAssets;` |

**源码注释:**

> 额外打包的资产列表（相对于项目Content目录的路径）

---

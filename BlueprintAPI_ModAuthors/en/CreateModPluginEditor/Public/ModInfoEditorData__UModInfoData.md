# `class` `UModInfoData`

**Source header:** `CreateModPluginEditor/Public/ModInfoEditorData.h`

---

## Functional description (from header comments)

> Mod 信息数据类

## Blueprint-exposed variables

### Property `ModId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Basic" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString ModId;` |

**Notes:**

> Mod 唯一标识符

---

### Property `ModName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Basic" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString ModName;` |

**Notes:**

> Mod 显示名称

---

### Property `Version`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Basic" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString Version;` |

**Notes:**

> Mod 版本号

---

### Property `Author`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Basic" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString Author;` |

**Notes:**

> Mod 作者

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Basic" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic", meta = (MultiLine = true)) FString Description;` |

**Notes:**

> Mod 描述

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Basic" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Basic") FString Icon;` |

**Notes:**

> Mod 图标路径

---

### Property `MainLuaFile`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Files" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Files", meta = (FilePath, RelativeToGameDir)) FString MainLuaFile = TEXT("Main.lua");` |

**Notes:**

> 主 Lua 文件

---

### Property `ModInformationAssetPath`

| Field | Details |
|------|------|
| C++ type | `FSoftObjectPath` |
| Reflection specifiers | BlueprintReadWrite, Category="Files" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Files", meta = (AllowedClasses = "/Script/CreateModPlugin.ModInformationAsset")) FSoftObjectPath ModInformationAssetPath;` |

**Notes:**

> Mod 信息资产路径

---

### Property `Dependencies`

| Field | Details |
|------|------|
| C++ type | TArray<[FModDependencyData](ModInfoEditorData__FModDependencyData.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="Dependencies" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependencies") TArray<FModDependencyData> Dependencies;` |

**Notes:**

> 依赖列表

---

### Property `bNewGameLoad`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") bool bNewGameLoad = false;` |

**Notes:**

> 是否在新游戏时加载

---

### Property `MinGameVersion`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") FString MinGameVersion;` |

**Notes:**

> 支持的游戏最小版本号

---

### Property `bIncludeGameplayTags`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings") bool bIncludeGameplayTags = false;` |

**Notes:**

> 是否包含 GameplayTag配置 使用引擎GameplayTag管理器添加或删除

---

### Property `GameplayTagsIniFile`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings", meta = (EditCondition = "bIncludeGameplayTags", EditConditionHides)) FString GameplayTagsIniFile;` |

**Notes:**

> 当 bIncludeGameplayTags 为真时，GameplayTag 的 ini 路径（相对 Mod 根目录，或选中的路径；保存时会规范为 {ModId}GameplayTags.ini）

---

### Property `ModFolderPath`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Settings" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Settings") FString ModFolderPath;` |

**Notes:**

> Mod 文件夹路径（用于保存 JSON 文件）

---

### Property `PublishedFileId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Settings" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, Category = "Settings") FString PublishedFileId;` |

**Notes:**

> Steam 发布的文件 ID（由上传流程写入 ModInfo.json，不在本插件编辑器中编辑）

---

### Property `AdditionalAssets`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadWrite, Category="Packaging" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Packaging", meta = (ToolTip = "Additional assets to include in pak file. Paths should be relative to Content directory.")) TArray<FString> AdditionalAssets;` |

**Notes:**

> 额外打包的资产列表（相对于项目Content目录的路径）

---

# `struct` `FModMetadata`

**Source header:** `EastRimWorld/Mod/ModInfo.h`

---

## Functional description (from header comments)

> Mod元数据信息

## Blueprint-exposed variables

### Property `ModId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName ModId;` |

**Notes:**

> Mod唯一标识符

---

### Property `ModName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ModName;` |

**Notes:**

> Mod名称

---

### Property `Version`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString Version;` |

**Notes:**

> Mod版本号

---

### Property `Author`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString Author;` |

**Notes:**

> Mod作者

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText Description;` |

**Notes:**

> Mod描述

---

### Property `Icon`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString Icon;` |

**Notes:**

> Mod图标

---

### Property `Dependencies`

| Field | Details |
|------|------|
| C++ type | TArray<[FModDependency](ModInfo__FModDependency.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FModDependency> Dependencies;` |

**Notes:**

> 依赖的Mod列表

---

### Property `MinGameVersion`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString MinGameVersion;` |

**Notes:**

> 支持的游戏最小版本（可选）

---

### Property `MainLuaFile`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString MainLuaFile = TEXT("Main.lua");` |

**Notes:**

> 主Lua入口文件路径（相对于Mod根目录）

---

### Property `bNewGameLoad`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bNewGameLoad = false;` |

**Notes:**

> 是否在新游戏时加载

---

### Property `ModToolVersion`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString ModToolVersion;` |

**Notes:**

> Mod工具版本号（用于检查Mod是否与当前游戏版本兼容）

---

### Property `bIncludeGameplayTags`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIncludeGameplayTags = false;` |

**Notes:**

> 是否包含 GameplayTag 配置

---

### Property `PublishedFileId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString PublishedFileId;` |

**Notes:**

> Steam 发布的文件 ID（上传到 Steam 后自动填充）

---

### Property `DataTableConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FModDataTableJsonConfig](ModInfo__FModDataTableJsonConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FModDataTableJsonConfig> DataTableConfigs;` |

**Notes:**

> 打包导出的配置表 JSON 列表（存在时运行时优先从此加载，不依赖 Cook 资产）

---

### Property `DataAssetConfigs`

| Field | Details |
|------|------|
| C++ type | TArray<[FModDataAssetJsonConfig](ModInfo__FModDataAssetJsonConfig.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FModDataAssetJsonConfig> DataAssetConfigs;` |

**Notes:**

> 打包导出的数据资产 JSON 列表

---

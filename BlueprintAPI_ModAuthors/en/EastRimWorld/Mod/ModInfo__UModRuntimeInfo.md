# `class` `UModRuntimeInfo`

**Source header:** `EastRimWorld/Mod/ModInfo.h`

---

## Functional description (from header comments)

> Mod运行时信息
> 用于在运行时管理Mod的状态

## Blueprint-exposed variables

### Property `Metadata`

| Field | Details |
|------|------|
| C++ type | [FModMetadata](ModInfo__FModMetadata.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FModMetadata Metadata;` |

**Source comments:**

> Mod元数据

---

### Property `LoadState`

| Field | Details |
|------|------|
| C++ type | `EModLoadState` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EModLoadState LoadState = EModLoadState::NotLoaded;` |

**Source comments:**

> Mod加载状态

---

### Property `ModRootPath`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString ModRootPath;` |

**Source comments:**

> Mod根目录路径

---

### Property `LuaEnvironmentName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString LuaEnvironmentName;` |

**Source comments:**

> Mod的Lua环境（如果使用Lua）

---

### Property `LoadTime`

| Field | Details |
|------|------|
| C++ type | `FDateTime` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FDateTime LoadTime;` |

**Source comments:**

> 加载时间戳

---

### Property `ErrorMessage`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString ErrorMessage;` |

**Source comments:**

> 错误信息（如果加载失败）

---

### Property `MountedPakFiles`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FString> MountedPakFiles;` |

**Source comments:**

> 已挂载的Pak中的文件

---

### Property `MountedPaks`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FString> MountedPaks;` |

**Source comments:**

> 已挂载的Pak

---

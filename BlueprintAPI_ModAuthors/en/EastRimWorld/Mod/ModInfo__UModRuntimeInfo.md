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

**Notes:**

> Mod元数据

---

### Property `LoadState`

| Field | Details |
|------|------|
| C++ type | [EModLoadState](ModInfo__EModLoadState.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EModLoadState LoadState = EModLoadState::NotLoaded;` |

**Notes:**

> Mod加载状态

---

### Property `ModRootPath`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString ModRootPath;` |

**Notes:**

> Mod根目录路径

---

### Property `LuaEnvironmentName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString LuaEnvironmentName;` |

**Notes:**

> Mod的Lua环境（如果使用Lua）

---

### Property `LoadTime`

| Field | Details |
|------|------|
| C++ type | `FDateTime` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FDateTime LoadTime;` |

**Notes:**

> 加载时间戳

---

### Property `LoadDurationSeconds`

| Field | Details |
|------|------|
| C++ type | `double` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) double LoadDurationSeconds = 0.0;` |

**Notes:**

> 本次加载耗时（秒，Mod.Status 调试命令展示用）

---

### Property `ErrorMessage`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString ErrorMessage;` |

**Notes:**

> 错误信息（如果加载失败）

---

### Property `MountedPakFiles`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FString> MountedPakFiles;` |

**Notes:**

> 已挂载的Pak中的文件

---

### Property `MountedPaks`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FString> MountedPaks;` |

**Notes:**

> 已挂载的Pak

---

### Property `RegisteredMountPaths`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<FString> RegisteredMountPaths;` |

**Notes:**

> 挂载时注册进 /Game/ 的内容路径（卸载时用于 UnRegisterMountPoint 撤销）

---

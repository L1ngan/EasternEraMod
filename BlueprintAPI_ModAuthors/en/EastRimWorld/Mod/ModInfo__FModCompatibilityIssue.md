# `struct` `FModCompatibilityIssue`

**Source header:** `EastRimWorld/Mod/ModInfo.h`

---

## Functional description (from header comments)

> 读档时发现的单个 Mod 兼容问题（供 UI 弹窗展示）

## Blueprint-exposed variables

### Property `ModId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName ModId;` |

**Notes:**

> Unique identifier of the mod that has the compatibility issue

---

### Property `IssueType`

| Field | Details |
|------|------|
| C++ type | [EModCompatIssueType](ModInfo__EModCompatIssueType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) EModCompatIssueType IssueType = EModCompatIssueType::Missing;` |

**Notes:**

> Type of the compatibility issue (Missing / Disabled / VersionMismatch)

---

### Property `SavedVersion`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString SavedVersion;` |

**Notes:**

> 存档时的版本

---

### Property `CurrentVersion`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FString CurrentVersion;` |

**Notes:**

> 当前安装的版本（Missing 时为空）

---

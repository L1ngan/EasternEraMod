# `struct` `FModDependencyData`

**Source header:** `CreateModPluginEditor/Public/ModInfoEditorData.h`

---

## Functional description (from header comments)

> Mod 依赖信息

## Blueprint-exposed variables

### Property `ModId`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Dependency" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency") FString ModId;` |

**Source comments:**

> 依赖的 Mod ID

---

### Property `MinVersion`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadWrite, Category="Dependency" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency") FString MinVersion;` |

**Source comments:**

> 最小版本号（可选）

---

### Property `bRequired`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Dependency" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dependency") bool bRequired = true;` |

**Source comments:**

> 是否必需

---

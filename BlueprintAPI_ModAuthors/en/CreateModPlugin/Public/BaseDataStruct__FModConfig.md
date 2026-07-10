# `struct` `FModConfig`

**Source header:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## Functional description (from header comments)

> Mod数据表

## Blueprint-exposed variables

### Property `ModConfigType`

| Field | Details |
|------|------|
| C++ type | [EModConfigType](BaseDataStruct__EModConfigType.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) EModConfigType ModConfigType = EModConfigType::None;` |

**Notes:**

> 配置类型

---

### Property `DataTable`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UDataTable>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TSoftObjectPtr<UDataTable> DataTable;` |

**Notes:**

> 配置表

---

### Property `StructName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Exposed to Blueprint; whether it is editable in defaults depends on Edit* specifiers. |
| Original declaration (excerpt) | `UPROPERTY() FString StructName;` |

**Notes:**

> 结构名称

---

### Property `bOverrideData`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) bool bOverrideData = false;` |

**Notes:**

> 勾选后Map或Array则直接覆盖原来的数据，不勾选则在原有的基础增加。其他类型的属性如果是默认值则不生效

---

# `struct` `FCharacterOrganUIConfig`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 角色器官显示UI显示配置（综合显示多个器官的汇总值）

## Blueprint-exposed variables

### Property `OrganName`

| Field | Details |
|------|------|
| C++ type | TMap<[ESpeciesType](CommonEnum__ESpeciesType.md),FText> |
| Reflection specifiers | BlueprintReadWrite, Category="FCharacterOrganUIConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCharacterOrganUIConfig") TMap<ESpeciesType,FText> OrganName;` |

**Notes:**

> 显示总器官名称

---

### Property `OrganIDs`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,float>` |
| Reflection specifiers | BlueprintReadWrite, Category="FCharacterOrganUIConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCharacterOrganUIConfig") TMap<FName,float> OrganIDs;` |

**Notes:**

> 包含哪些器官 key 部位id  value 部位占比

---

### Property `OrganDesc`

| Field | Details |
|------|------|
| C++ type | TMap<[ESpeciesType](CommonEnum__ESpeciesType.md),FText> |
| Reflection specifiers | BlueprintReadWrite, Category="FCharacterOrganUIConfig" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCharacterOrganUIConfig") TMap<ESpeciesType,FText> OrganDesc;` |

**Notes:**

> 显示总器官描述(左右眼，左右耳，左右手，左右腿 这些都合并在一起显示的)

---

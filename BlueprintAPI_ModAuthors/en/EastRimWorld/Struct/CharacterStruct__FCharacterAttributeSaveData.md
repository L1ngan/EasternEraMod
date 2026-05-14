# `struct` `FCharacterAttributeSaveData`

**Source header:** `EastRimWorld/Struct/CharacterStruct.h`

---

## Functional description (from header comments)

> 角色属性存档数据

## Blueprint-exposed variables

### Property `Data`

| Field | Details |
|------|------|
| C++ type | TMap<FString , [FAttributeSetSaveData](CharacterStruct__FAttributeSetSaveData.md)> |
| Reflection specifiers | (Blueprint visibility-related specifiers only) |
| Blueprint semantics | Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame) TMap<FString , FAttributeSetSaveData> Data;` |

**Source comments:**

> TMap<属性名 , 属性存档数据>

---

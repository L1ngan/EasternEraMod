# `struct` `FBattlefieldAward`

**Source header:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## Functional description (from header comments)

> 战场结果

## Blueprint-exposed variables

### Property `RewardResources`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FItemSimpleData](../../Struct/CommonStruct__FItemSimpleData.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FName,FItemSimpleData> RewardResources;` |

**Notes:**

> 获得的资源

---

### Property `PostwarCharacterDispose`

| Field | Details |
|------|------|
| C++ type | TMap<int32,[FPostwarCharacterDispose](WorldBattleStruct__FPostwarCharacterDispose.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32,FPostwarCharacterDispose> PostwarCharacterDispose;` |

**Notes:**

> 处置的角色 阵营ID

---

### Property `PlaceGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid PlaceGuid;` |

**Notes:**

> 占领的地点

---

### Property `Reputation`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 Reputation = 0;` |

**Notes:**

> 声望

---

### Property `FavorabilityChange`

| Field | Details |
|------|------|
| C++ type | `TMap<FGuid,float>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,float> FavorabilityChange;` |

**Notes:**

> 势力好感度变化 key 势力Guid value 变化的值

---

### Property `JusticeValue`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 JusticeValue = 0;` |

**Notes:**

> 正义值

---

### Property `bNPCDisposal`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bNPCDisposal = false;` |

**Notes:**

> 是否已经处理NPC的战斗结算

---

### Property `PlaceDisposalType`

| Field | Details |
|------|------|
| C++ type | [EPlaceDisposalType](../WorldStruct__EPlaceDisposalType.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EPlaceDisposalType PlaceDisposalType = EPlaceDisposalType::OccupyPlace;` |

**Notes:**

> 城镇处理

---

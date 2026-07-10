# `struct` `FWorldBattleRuntimeTeam`

**Source header:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldBattleRuntimeStruct.h`

---

## Functional description (from header comments)

> 门派战中的一支队伍。这里只记录身份数据，不记录点数、抽卡、小兵等玩法资源。

## Blueprint-exposed variables

### Property `TeamGuid`

| Field | Details |
|------|------|
| C++ type | `FGuid` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid TeamGuid;` |

**Notes:**

> 本场战斗里的队伍唯一 ID，加入前必须有效。

---

### Property `TeamID`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 TeamID = INDEX_NONE;` |

**Notes:**

> 旧阵营系统常用的数字 TeamID，方便和已有队伍逻辑对接。

---

### Property `ForceName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText ForceName;` |

**Notes:**

> 参战门派的显示名字，UI 直接读这个，不用再回头找 WorldForce。

---

### Property `TeamRole`

| Field | Details |
|------|------|
| C++ type | [EWorldBattleRuntimeTeamRole](WorldBattleRuntimeStruct__EWorldBattleRuntimeTeamRole.md) |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EWorldBattleRuntimeTeamRole TeamRole = EWorldBattleRuntimeTeamRole::None;` |

**Notes:**

> Team Role field.

---

### Property `CharacterGuids`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> CharacterGuids;` |

**Notes:**

> 计划参战的角色 Guid。后续是否生成 Actor，由门派战玩法逻辑决定。

---

### Property `bCharactersSpawned`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bCharactersSpawned = false;` |

**Notes:**

> 是否已经把这支队伍的弟子生成到当前战场。

---

### Property `Prosperity`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Prosperity = 0.f;` |

**Notes:**

> 城市繁荣度（join 传入后存进 Team，供 manager / 宝箱掉落读取）。

---

### Property `Offering`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float Offering = 0.f;` |

**Notes:**

> 供奉值（join 传入后存进 Team）。

---

### Property `SectName`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FName SectName = NAME_None;` |

**Notes:**

> 门派名字（join 传入后存进 Team，特殊箱掉落据此查表）。

---

### Property `CityName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText CityName;` |

**Notes:**

> 城市名字（join 传入后存进 Team，FText 用于 UI 显示，不参与宝箱查表）。

---

### Property `bIsPlayer`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bIsPlayer = false;` |

**Notes:**

> 这支队伍是否是玩家所属队伍。

---

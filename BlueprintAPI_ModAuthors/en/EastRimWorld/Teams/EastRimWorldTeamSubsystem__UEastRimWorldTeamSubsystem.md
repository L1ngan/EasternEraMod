# `class` `UEastRimWorldTeamSubsystem`

**Source header:** `EastRimWorld/Teams/EastRimWorldTeamSubsystem.h`

---

## Functional description (from header comments)

> A subsystem for easy access to team information for team-based actors (e.g., pawns or player states)

## Blueprint-exposed variables

### Property `OnPerceiveActorDeath`

| Field | Details |
|------|------|
| C++ type | `FOnPerceiveActorDeath` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPerceiveActorDeath OnPerceiveActorDeath;` |

**Notes:**

> On Perceive Actor Death event or callback.

---

### Property `OnPerceiveActorSeriousInjury`

| Field | Details |
|------|------|
| C++ type | `FOnPerceiveActorDeath` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPerceiveActorDeath OnPerceiveActorSeriousInjury;` |

**Notes:**

> 重伤(门派战中的死亡)

---

### Property `OnPerceiveActorKnockDown`

| Field | Details |
|------|------|
| C++ type | `FOnPerceiveActorDeath` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnPerceiveActorDeath OnPerceiveActorKnockDown;` |

**Notes:**

> 驻地战斗中被击倒

---

### Property `OnTeamBuffChange`

| Field | Details |
|------|------|
| C++ type | `FOnTeamBuffChange` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FOnTeamBuffChange OnTeamBuffChange;` |

**Notes:**

> On Team Buff Change event or callback.

---

### Property `AllTeamActors`

| Field | Details |
|------|------|
| C++ type | `TArray<AActor*>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TArray<AActor*> AllTeamActors;` |

**Notes:**

> 所有的阵营actor

---

## Blueprint-exposed functions

### Function `IsPlayerFaction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InActor` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPlayerFaction(AActor* InActor) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否为玩家阵营（玩家阵营ID固定为1）

---

### Function `GetTeamRelation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `ETeamAttitude::Type` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamIdA` | `int32` |
| `TeamIdB` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) ETeamAttitude::Type GetTeamRelation(int32 TeamIdA, int32 TeamIdB);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Get Team Relation.

---

### Function `FindShortestDistanceTarget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `AActor *` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OriginPosition` | `const FVector &` |
| `TeamId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) AActor * FindShortestDistanceTarget(const FVector & OriginPosition, int32 TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 寻找距离位置最短的目标

---

### Function `GetAllTeamActorByCharacterType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<AActor*>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `int32` |
| `CharacterType` | [ECharacterType](../Struct/CommonEnum__ECharacterType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AActor*> GetAllTeamActorByCharacterType(int32 TeamId,ECharacterType CharacterType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取所有阵营actor 根据类型

---

### Function `GetHostileActorsInRadius`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<AActor*>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Target` | `const AActor*` |
| `Radius` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<AActor*> GetHostileActorsInRadius(const AActor* Target, float Radius);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取以 Target 为中心、半径内、对 Target 持敌对态度的所有 Actor（范围内敌人死亡被动触发用）

---

### Function `GetAllTeamBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `TeamId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FCommonBuff> GetAllTeamBuff(int32 TeamId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Get All Team Buff.

---

### Function `PlayBattleMusic`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bPlay` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void PlayBattleMusic(bool bPlay);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 播放战斗音乐

---

### Function `IsOnBattlePlayer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool IsOnBattlePlayer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Gets or queries Is On Battle Player.

---

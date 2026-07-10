# `class` `AMonsterNestActor`

**Source header:** `EastRimWorld/System/MonsterNest/MonsterNestActor.h`

---

## Functional description (from header comments)

> Monster Nest Actor actor type.

## Blueprint-exposed variables

### Property `GenerateCharacterComponent`

| Field | Details |
|------|------|
| C++ type | TObjectPtr<[UEventGenerateCharacterComponent](../EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

**Notes:**

> 事件生成角色组件

---

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<USceneComponent> SceneComponent;` |

**Notes:**

> Scene Component field.

---

### Property `AllMonsters`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FGuid,AEastRimWorldCharacter*> AllMonsters;` |

**Notes:**

> All Monsters field.

---

### Property `MonsterNestInfo`

| Field | Details |
|------|------|
| C++ type | [FMonsterNestInfo](../../WorldSystem/WorldStruct__FMonsterNestInfo.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FMonsterNestInfo MonsterNestInfo;` |

**Notes:**

> 怪物巢穴信息

---

### Property `AllWaitAttackMonsters`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> AllWaitAttackMonsters;` |

**Notes:**

> 所有生成的怪物且没有发动攻击的怪物

---

### Property `bMonsterNestInit`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool bMonsterNestInit = false;` |

**Notes:**

> Boolean flag indicating whether Monster Nest Init is enabled or true.

---

### Property `AllAttackMonsters`

| Field | Details |
|------|------|
| C++ type | `TArray<FGuid>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FGuid> AllAttackMonsters;` |

**Notes:**

> 已经发动攻击的怪物

---

## Blueprint-exposed functions

### Function `GetGenericTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `FGenericTeamId` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual FGenericTeamId GetGenericTeamId() const override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> ~IEastRimWorldTeamAgentInterface interface

---

### Function `SetGenericTeamId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NewTeamID` | `const FGenericTeamId&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) virtual void SetGenericTeamId(const FGenericTeamId& NewTeamID) override;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Set Generic Team Id operation.

---

### Function `RemoveGenerationActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Actor` | `AActor *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveGenerationActor(AActor * Actor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除生成记录的单位

---

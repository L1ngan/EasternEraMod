# `class` `UEastRimWorldCharacterChatComponent`

**Source header:** `EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `RelationshipDataMap`

| Field | Details |
|------|------|
| C++ type | TMap<FGuid,[FSocialRelationshipData](../../Struct/CharacterChatStruct__FSocialRelationshipData.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FSocialRelationshipData> RelationshipDataMap;` |

---

## Blueprint-exposed functions

### Function `StartFindChatPartnerTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StartFindChatPartnerTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `StopFindChatPartnerTimer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void StopFindChatPartnerTimer();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `TryStartChat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Initiator` | [UEastRimWorldCharacterChatComponent](EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TryStartChat(UEastRimWorldCharacterChatComponent* Initiator);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `EndChatting`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `(unnamed / type only)` | `bool IsAbort=false` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void EndChatting(bool IsAbort=false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetChatState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `const EChatState&` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) const EChatState& GetChatState() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `GetChatTargetTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `const FTransform&` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) const FTransform& GetChatTargetTransform() const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `GetChatTargetComponent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [UEastRimWorldCharacterChatComponent](EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)* |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) UEastRimWorldCharacterChatComponent* GetChatTargetComponent();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

---

### Function `FindRelationshipData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `OutRelationshipData` | [FSocialRelationshipData](../../Struct/CharacterChatStruct__FSocialRelationshipData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool FindRelationshipData(const FGuid& InCharacterGuid,FSocialRelationshipData& OutRelationshipData);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 根据角色的guid查找关系数据

---

### Function `OnCeremonyComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `NewRelationshipID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnCeremonyComplete(const FGuid& InCharacterGuid,const FName& NewRelationshipID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

---

### Function `GetAllCanDevelopingRelationship`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `OutNewRelationships` | `TArray<FName>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAllCanDevelopingRelationship(const FGuid& InCharacterGuid,TArray<FName>& OutNewRelationships);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获得所有当前可发展的非自动升级的新关系

---

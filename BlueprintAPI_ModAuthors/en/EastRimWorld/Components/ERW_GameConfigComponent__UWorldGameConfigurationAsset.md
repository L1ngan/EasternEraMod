# `class` `UWorldGameConfigurationAsset`

**Source header:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## Functional description (from header comments)

> 世界

## Blueprint-exposed variables

### Property `WorldMapPossessPlayerPawn`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<AERW_PlayerPawn> WorldMapPossessPlayerPawn;` |

**Source comments:**

> 世界地图使用的pawn

---

### Property `WorldMapOffset`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform WorldMapOffset = FTransform::Identity;` |

**Source comments:**

> 世界地图的位置偏移

---

### Property `MainWidgetUI`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> MainWidgetUI;` |

**Source comments:**

> 世界地图界面UI

---

### Property `WorldMapMoveActorClass`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<AWorldMapMoveActor> WorldMapMoveActorClass;` |

**Source comments:**

> 世界中移动的actor

---

### Property `AfterNewlyBornAttackMultiplyingPower`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AfterNewlyBornAttackMultiplyingPower = 1.f;` |

**Source comments:**

> 新生后攻击期望值倍率

---

### Property `WorldPlaceTypeName`

| Field | Details |
|------|------|
| C++ type | `TMap<EWorldPlaceType,FText>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EWorldPlaceType,FText> WorldPlaceTypeName;` |

**Source comments:**

> 世界地点类型名称

---

### Property `ForceCharacterEditorWidgetUI`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> ForceCharacterEditorWidgetUI;` |

**Source comments:**

> 门派换装-界面UI

---

### Property `ForceCharacterEditorPawn`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<AERW_PlayerPawn> ForceCharacterEditorPawn;` |

**Source comments:**

> 门派换装-Pawn

---

### Property `ForceCharacterEditorPawnOffset`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform ForceCharacterEditorPawnOffset = FTransform::Identity;` |

**Source comments:**

> 门派换装-Pawn生成位置

---

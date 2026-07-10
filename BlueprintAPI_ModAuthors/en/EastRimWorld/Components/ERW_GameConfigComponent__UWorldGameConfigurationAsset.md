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

**Notes:**

> 世界地图使用的pawn

---

### Property `WorldMapOffset`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform WorldMapOffset = FTransform::Identity;` |

**Notes:**

> 世界地图的位置偏移

---

### Property `MainWidgetUI`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> MainWidgetUI;` |

**Notes:**

> 世界地图界面UI

---

### Property `WorldMapMoveActorClass`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<AWorldMapMoveActor> WorldMapMoveActorClass;` |

**Notes:**

> 世界中移动的actor

---

### Property `AfterNewlyBornAttackMultiplyingPower`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AfterNewlyBornAttackMultiplyingPower = 1.f;` |

**Notes:**

> 新生后攻击期望值倍率

---

### Property `WorldPlaceTypeName`

| Field | Details |
|------|------|
| C++ type | TMap<[EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md),FText> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EWorldPlaceType,FText> WorldPlaceTypeName;` |

**Notes:**

> 世界地点类型名称

---

### Property `ForceCharacterEditorWidgetUI`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> ForceCharacterEditorWidgetUI;` |

**Notes:**

> 门派换装-界面UI

---

### Property `ForceCharacterEditorPawn`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<AERW_PlayerPawn> ForceCharacterEditorPawn;` |

**Notes:**

> 门派换装-Pawn

---

### Property `ForceCharacterEditorPawnOffset`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform ForceCharacterEditorPawnOffset = FTransform::Identity;` |

**Notes:**

> 门派换装-Pawn生成位置

---

### Property `ForceSkillTestWidgetUI`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="SkillTest|技能测试" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="SkillTest|技能测试") TSoftClassPtr<UEastRimWorldActivatableWidget> ForceSkillTestWidgetUI;` |

**Notes:**

> 技能/武学测试沙盒-界面UI

---

### Property `ForceSkillTestPawn`

| Field | Details |
|------|------|
| C++ type | TSoftClassPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| Reflection specifiers | BlueprintReadWrite, Category="SkillTest|技能测试" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="SkillTest|技能测试") TSoftClassPtr<AERW_PlayerPawn> ForceSkillTestPawn;` |

**Notes:**

> 技能/武学测试沙盒-观察Pawn

---

### Property `ForceSkillTestPawnOffset`

| Field | Details |
|------|------|
| C++ type | `FTransform` |
| Reflection specifiers | BlueprintReadOnly, Category="SkillTest|技能测试" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="SkillTest|技能测试") FTransform ForceSkillTestPawnOffset = FTransform::Identity;` |

**Notes:**

> 技能/武学测试沙盒-观察Pawn生成位置

---

# `class` `AWorldMapWayPoint`

**Source header:** `EastRimWorld/WorldSystem/WroldMapPath/WorldMapWayPoint.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USceneComponent>` |
| Reflection specifiers | BlueprintReadWrite, Category="Waypoint" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY( BlueprintReadWrite, Category="Waypoint") TObjectPtr<USceneComponent> SceneComponent;` |

---

### Property `SelectLinkWaypoints`

| Field | Details |
|------|------|
| C++ type | TArray<[AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)*> |
| Reflection specifiers | BlueprintReadWrite, Category="Waypoint" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Waypoint") TArray<AWorldMapWayPoint*> SelectLinkWaypoints;` |

**Source comments:**

> 选择的点位

---

### Property `LinkWaypoints`

| Field | Details |
|------|------|
| C++ type | TArray<[AWorldMapWayPoint](WorldMapWayPoint__AWorldMapWayPoint.md)*> |
| Reflection specifiers | BlueprintReadOnly, Category="Waypoint" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category="Waypoint") TArray<AWorldMapWayPoint*> LinkWaypoints;` |

**Source comments:**

> 可以到达的下一个路点

---

## Blueprint-exposed functions

### Function `UpdateAllActorSplines`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Waypoint" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,CallInEditor,Category="Waypoint") void UpdateAllActorSplines();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 仅在编辑器模式下更新样条线

---

### Function `LinkShortestDistance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Waypoint" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,CallInEditor,Category="Waypoint") void LinkShortestDistance();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 仅在编辑器模式下更新样条线

---

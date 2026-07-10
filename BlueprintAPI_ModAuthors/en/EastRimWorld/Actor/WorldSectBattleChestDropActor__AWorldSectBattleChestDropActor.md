# `class` `AWorldSectBattleChestDropActor`

**Source header:** `EastRimWorld/Actor/WorldSectBattleChestDropActor.h`

---

## Functional description (from header comments)

> Visual drop spawned by a sect battle chest.
> It starts at the chest center, flies along a short arc, then stops at a random XY point around the chest.

## Blueprint-exposed variables

### Property `DropCollisionSphere`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USphereComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") TObjectPtr<USphereComponent> DropCollisionSphere;` |

**Notes:**

> 物理刚体 = 碰撞球（一定有碰撞，落地稳定）；挡地面但放行玩家/角色，避免挡路。物品模型只挂它上面做显示。

---

### Property `StaticMeshComponent`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<UStaticMeshComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

**Notes:**

> Static mesh component for the item's display model, attached to the collision sphere for visuals only.

---

### Property `PickupSphere`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<USphereComponent>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") TObjectPtr<USphereComponent> PickupSphere;` |

**Notes:**

> Sphere collision component for pickup detection.

---

### Property `RandomStaticMeshes`

| Field | Details |
|------|------|
| C++ type | `TArray<TObjectPtr<UStaticMesh>>` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop") TArray<TObjectPtr<UStaticMesh>> RandomStaticMeshes;` |

**Notes:**

> Candidate list of static meshes for random appearance.

---

### Property `ItemData`

| Field | Details |
|------|------|
| C++ type | [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md) |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") FItemSimpleData ItemData;` |

**Notes:**

> Basic item data carried by the drop.

---

### Property `ItemName`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") FText ItemName;` |

**Notes:**

> 物品展示数据：InitChestDropItem 时按 ItemData.Id/Type 从物品配置表(FInventoryGeneralData)查得，供拾取提示/头顶icon等UI读取。

---

### Property `ItemDescription`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") FText ItemDescription;` |

**Notes:**

> Item description, looked up from the item config table by the ItemData Id/Type on init, for UI to read.

---

### Property `ItemIcon`

| Field | Details |
|------|------|
| C++ type | `TSoftObjectPtr<UTexture2D>` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") TSoftObjectPtr<UTexture2D> ItemIcon;` |

**Notes:**

> Soft-referenced item icon looked up from the item config table, for pickup prompt / overhead icon UI.

---

### Property `ItemQuality`

| Field | Details |
|------|------|
| C++ type | `EItemQuality` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") EItemQuality ItemQuality = EItemQuality::None;` |

**Notes:**

> Item quality looked up from the item config table, for UI to read.

---

### Property `ItemGrade`

| Field | Details |
|------|------|
| C++ type | `FText` |
| Reflection specifiers | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") FText ItemGrade;` |

**Notes:**

> Item grade text looked up from the item config table, for UI to read.

---

### Property `SpawnRandomOffsetRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float SpawnRandomOffsetRadius = 10.f;` |

**Notes:**

> Random offset radius of the spawn location; defaults to 10.

---

### Property `DropCollisionRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float DropCollisionRadius = 20.f;` |

**Notes:**

> 掉落物物理碰撞球半径（决定落地停留高度，不影响显示模型大小）。

---

### Property `PickupRadius`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float PickupRadius = 80.f;` |

**Notes:**

> Radius of the pickup detection sphere; defaults to 80.

---

### Property `PickupDelaySeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float PickupDelaySeconds = 0.5f;` |

**Notes:**

> Delay in seconds after spawning before the drop can be picked up; defaults to 0.5.

---

### Property `DropTravelDuration`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.01")) float DropTravelDuration = 0.35f;` |

**Notes:**

> 从宝箱中心飞到落点的总时长（秒）。纯轨迹插值，不再依赖物理落地，避免穿地。

---

### Property `DropArcHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float DropArcHeight = 120.f;` |

**Notes:**

> 飞行轨迹的最高抛物线高度（相对起点/终点连线的额外抬高）。

---

## Blueprint-exposed functions

### Function `InitChestDropItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InItemData` | const [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void InitChestDropItem(const FItemSimpleData& InItemData);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 用一条掉落数据初始化掉落物：存物品基础数据，并按 Id/Type 从物品配置表查出展示数据(名字/描述/icon/品质/品阶/3D模型)。

---

### Function `RandomSetStaticMesh`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void RandomSetStaticMesh();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Sets the display mesh to one randomly chosen from the RandomStaticMeshes list.

---

### Function `StartDropFromOrigin`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OriginLocation` | `const FVector&` |
| `ActorToIgnore` | `AActor*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void StartDropFromOrigin(const FVector& OriginLocation, AActor* ActorToIgnore);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Starts the drop from the origin location: jumps up then lands on the ground with a random horizontal offset; an actor to ignore for collision can be specified.

---

### Function `StartDropToLocation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StartLocation` | `const FVector&` |
| `TargetLocation` | `const FVector&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void StartDropToLocation(const FVector& StartLocation, const FVector& TargetLocation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Starts the drop from a start location to a specified target location.

---

### Function `K2_OnChestDropLanded`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="WorldSectBattle|ChestDrop" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|ChestDrop", meta = (DisplayName = "OnChestDropLanded")) void K2_OnChestDropLanded();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnChestDropLanded".

**Notes:**

> Blueprint implementable event called when the chest drop lands.

---

### Function `K2_OnChestDropItemInitialized`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent, Category="WorldSectBattle|ChestDrop" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|ChestDrop", meta = (DisplayName = "OnChestDropItemInitialized")) void K2_OnChestDropItemInitialized();`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OnChestDropItemInitialized".

**Notes:**

> 掉落物展示数据(名字/描述/icon/品质/品阶/模型)初始化完成后触发。蓝图在此刷新头顶icon/品质描边等表现。
> 仅在 InitChestDropItem 成功查到配置并填好数据后调用；配置缺失(提前 return)时不触发。

---

# `class` `AGWOSectorsDirector`

**Source header:** `EastRimWorld/SpawnActorSystem/GWOSectorsDirector.h`

---

## Functional description (from header comments)

> GWO sectors director actor that manages sector creation/activation/caching and actor freezing/defrosting for sector-based global world optimization, participating in save games via the Savior interfaces

## Blueprint-exposed variables

### Property `backgroundInstanceMeshComponent`

| Field | Details |
|------|------|
| C++ type | `class UInstancedStaticMeshComponent*` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* backgroundInstanceMeshComponent;` |

**Notes:**

> ************************************************************************
> Component
> ************************************************************************

---

### Property `SceneComponent`

| Field | Details |
|------|------|
| C++ type | `class USceneComponent *` |
| Reflection specifiers | BlueprintReadWrite, Category="Component" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class USceneComponent * SceneComponent;` |

**Notes:**

> Root scene component

---

### Property `bActivateDirector`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.01f,Tooltip = "激活导演功能。可以在测试中禁用它，这将停用基于扇区的优化中的导演干预。")) bool bActivateDirector = true;` |

**Notes:**

> Activates the director; can be disabled for testing, which deactivates the director's intervention in sector-based optimization

---

### Property `workerRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.01f,Tooltip = "扇区搜索功能的触发频率，包括新扇区的创建以及向生成器传递信息的频率。")) float workerRate = 0.5f;` |

**Notes:**

> Rate in seconds of the sector worker, including creating new sectors and passing information to spawners

---

### Property `clearWorkRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.01f,Tooltip = "搜索无关演员 ID 的功能的触发频率，并将此信息传递给生成器，以便生成器知道演员已被销毁并可以重新生成。我不建议设置过小的值。")) float clearWorkRate = 60.f;` |

**Notes:**

> Rate in seconds for searching irrelevant actor unique IDs and passing this info to spawners so destroyed actors can be respawned; very small values are not recommended

---

### Property `sectorSize`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 200.f,Tooltip = "扇区的大小。请注意，如果您将演员的生成距离设置为 2000，那么您应增加扇区的大小，以确保其与相邻块的大小包含在演员的生成区域内。")) float sectorSize = 6000.f;` |

**Notes:**

> Size of a sector; if actor spawn distance is large, increase the sector size so the spawn area is covered by adjacent blocks

---

### Property `maxCacheSize`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 1,Tooltip = "用于缓存的扇区数量。例如，扇区的搜索顺序是：首先在活跃扇区中搜索信息，然后在缓存中，最后在所有其他扇区中搜索，排除活跃和缓存扇区。")) int maxCacheSize = 1000;` |

**Notes:**

> Number of sectors kept in cache; sector search order is active sectors first, then cache, then all remaining sectors

---

### Property `bUseDefrostSpawnQueue`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta = (Tooltip = "- 启用生成队列。任何生成操作都不会在一帧内完成，而是使用队列。可以使用 ")) bool bUseDefrostSpawnQueue = true;` |

**Notes:**

> Enables the spawn queue; spawning is not done within a single frame but processed through a queue over multiple frames

---

### Property `unfreezeActorPerFrame`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta = (ClampMin = 1), meta = (EditCondition="bUseDefrostSpawnQueue", EditConditionHides,Tooltip = "每帧需要生成的演员数量")) int unfreezeActorPerFrame = 1;` |

**Notes:**

> Number of actors to defrost/spawn per frame

---

### Property `skipFrameBeforeNextSpawn`

| Field | Details |
|------|------|
| C++ type | `int` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta = (ClampMin = 0), meta = (EditCondition="bUseDefrostSpawnQueue", EditConditionHides,Tooltip = "上一次生成后需要跳过的帧数。这个设置也可能影响生成并减少卡顿。")) int skipFrameBeforeNextSpawn = 2;` |

**Notes:**

> Number of frames to skip after the previous spawn; affects spawn pacing and can reduce hitches

---

### Property `bRemoveNonUsedSectors`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters" ,meta = (Tooltip = "如果启用，系统将删除不再使用的扇区。我建议启用此选项。")) bool bRemoveNonUsedSectors = true;` |

**Notes:**

> I recommend checking this option for your specific project. If the FPS is higher with it, then turn it on.

---

### Property `sectorPositionTolerance`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta = (Tooltip = "用于比较扇区坐标的误差容忍度。通常无需更改，但在非常大的地图上出现误差时，可能需要增加此值。")) float sectorPositionTolerance = 0.5f;` |

**Notes:**

> I recommend value 0.5f. This is an infelicity when comparing the position of the sector. Perhaps this value needs to be increased on huge worlds for use in the formula.

---

### Property `replaceMeshRule`

| Field | Details |
|------|------|
| C++ type | `UDataTable*` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta = (Tooltip = "用于将演员替换为静态网格的规则。如果需要指定特殊规则，请将所需的静态网格添加到表中。如果未找到规则，则网格将使用默认规则。")) UDataTable* replaceMeshRule = nullptr;` |

**Notes:**

> Data table of rules for replacing actors with static meshes; add meshes needing special rules to the table, otherwise the default rule is used

---

### Property `bDebugSectorsVisual`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSectorsVisual = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugSectorsTelemetry`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSectorsTelemetry = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugIsFoundInActive`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsFoundInActive = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugIsFoundInCache`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsFoundInCache = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugIsFoundInDeepSearch`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsFoundInDeepSearch = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugIsCreatePlayerNewSector`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsCreatePlayerNewSector = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugIsCreateActorNewSector`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsCreateActorNewSector = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugIsCreateSpawnerNewSector`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsCreateSpawnerNewSector = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugCheckDuplicate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugCheckDuplicate = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugFoundUnusedUniqID`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugFoundUnusedUniqID = false;` |

**Notes:**

> Debug flag: outputs debug info when searching for unused unique IDs

---

### Property `bDebugSaveState`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSaveState = false;` |

**Notes:**

> Debug flag: outputs debug info about the save state

---

### Property `bDebugRemoveActorInBackground`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugRemoveActorInBackground = false;` |

**Notes:**

> Debug flag: outputs debug info when removing actors in the background

---

### Property `bDebugDrawSectorID`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugDrawSectorID = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `bDebugBackgroundActors`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugBackgroundActors = false;` |

**Notes:**

> It reduces fps. Use for development only.

---

### Property `generalAccess`

| Field | Details |
|------|------|
| C++ type | class [AGWOGeneralAccess](GWOGeneralAccess__AGWOGeneralAccess.md) * |
| Reflection specifiers | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Global World Optimization | Variables") class AGWOGeneralAccess * generalAccess = nullptr;` |

**Notes:**

> Reference to the GWO general access actor (AGWOGeneralAccess)

---

### Property `GameModeBase`

| Field | Details |
|------|------|
| C++ type | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) AERW_GameModeBase* GameModeBase { nullptr };` |

**Notes:**

> Cached reference to the game mode (AERW_GameModeBase)

---

# `class` `UERW_HISMManager`

**Source header:** `EastRimWorld/Components/ERW_HISMManager.h`

---

## Functional description (from header comments)

> 管理各种物体的ISM组件(该组件需要挂在一个能出现在场景中的Actor上)
> 
> ----------! Warning !----------
> 由于UE5的新特性Nanite, 使用ISM进行管理的模型需要开启Nanite, 否则移动模型会出现消失的BUG
> ----------! Warning !----------

## Blueprint-exposed variables

### Property `SceneManager`

| Field | Details |
|------|------|
| C++ type | [AERW_SceneManager](../ERW_SceneManager__AERW_SceneManager.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) AERW_SceneManager* SceneManager { nullptr };` |

**Notes:**

> 场景管理器类

---

### Property `MapDataMgr`

| Field | Details |
|------|------|
| C++ type | [UERW_MapDataMgr](ERW_MapDataMgr__UERW_MapDataMgr.md)* |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UERW_MapDataMgr* MapDataMgr { nullptr };` |

**Notes:**

> Reference to the map data manager component

---

### Property `TransparentMaterial`

| Field | Details |
|------|------|
| C++ type | `UMaterialInstance*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UMaterialInstance* TransparentMaterial { nullptr };` |

**Notes:**

> 透明材质

---

### Property `PlumbBobMaterial`

| Field | Details |
|------|------|
| C++ type | `UMaterialInstance*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UMaterialInstance* PlumbBobMaterial { nullptr };` |

**Notes:**

> 铅锤材质

---

### Property `RoomUnitMaterial`

| Field | Details |
|------|------|
| C++ type | `UMaterialInstance*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UMaterialInstance* RoomUnitMaterial { nullptr };` |

**Notes:**

> 房间单元材质

---

### Property `EntranceArrowMaterial`

| Field | Details |
|------|------|
| C++ type | `UMaterialInstance*` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) UMaterialInstance* EntranceArrowMaterial { nullptr };` |

**Notes:**

> 建筑入口箭头材质

---

### Property `EntranceArrowLightColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FLinearColor EntranceArrowLightColor;` |

**Notes:**

> 建筑入口箭头高亮显示颜色

---

### Property `EntranceArrowNormalColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FLinearColor EntranceArrowNormalColor;` |

**Notes:**

> 建筑入口箭头普通颜色

---

### Property `EntranceArrowDisableColor`

| Field | Details |
|------|------|
| C++ type | `FLinearColor` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) FLinearColor EntranceArrowDisableColor;` |

**Notes:**

> 建筑入口箭头不可用颜色

---

### Property `HideRoof`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,SaveGame) bool HideRoof { false };` |

**Notes:**

> 是否需要隐藏屋顶(通过UI按钮进行的隐藏)

---

### Property `StairFlatHeight`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite) float StairFlatHeight { 0.f };` |

**Notes:**

> 阶梯平台模型高度

---

### Property `RuntimeVirtualTexture`

| Field | Details |
|------|------|
| C++ type | `TObjectPtr<URuntimeVirtualTexture>` |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TObjectPtr<URuntimeVirtualTexture> RuntimeVirtualTexture;` |

**Notes:**

> 动态虚拟纹理 用于消除草

---

### Property `PlumbBobExist`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) bool PlumbBobExist { false };` |

**Notes:**

> 铅锤是否存在

---

## Blueprint-exposed functions

### Function `ClearISMData`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearISMData();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清空ISM相关数据

---

### Function `FindActorByISMIndex`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ISMComponent` | `UInstancedStaticMeshComponent*` |
| `Index` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) AGOAP_ActorBase* FindActorByISMIndex(UInstancedStaticMeshComponent* ISMComponent , int32 Index) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 通过ISM组件和索引找到对应的Actor

---

### Function `ClearObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearObjects();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清空本次操作的物体

---

### Function `GetBuildObjectTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `Transform` | `FTransform&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetBuildObjectTransform(AGOAP_ActorBase* BuildObject , FTransform& Transform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得建筑的Transform

---

### Function `GetEmbeddedWallType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | [EEmbeddedWallType](../ERW_Enumerations__EEmbeddedWallType.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) EEmbeddedWallType GetEmbeddedWallType(AGOAP_ActorBase* BuildObject) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得嵌入式墙体类型

---

### Function `InitPlumbBobISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ISM` | `UInstancedStaticMeshComponent*` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void InitPlumbBobISM(UInstancedStaticMeshComponent* ISM , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化铅锤ISM

---

### Function `AddPlumbBobInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPlumbBobInstances();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入铅锤模型Instance

---

### Function `ClearPlumbBobInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearPlumbBobInstances();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清空铅锤模型Instance

---

### Function `UpdatePlumbBobTransforms`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `MinPoint` | `const FIntPoint&` |
| `MaxPoint` | `const FIntPoint&` |
| `Height` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdatePlumbBobTransforms(const FIntPoint& MinPoint , const FIntPoint& MaxPoint , float Height);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新铅锤模型Instance的Transform

---

### Function `AddRoomUnitISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ISM` | `UInstancedStaticMeshComponent*` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddRoomUnitISM(UInstancedStaticMeshComponent* ISM , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化房间单元ISM

---

### Function `AddRoomUnitInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `EnvironComponent` | const [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* const |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddRoomUnitInstance(AGOAP_ActorBase* BuildObject , const UERW_EnvironComponent* const EnvironComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入房间单元Instance

---

### Function `RemoveRoomUnitInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveRoomUnitInstance(AGOAP_ActorBase* BuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除房间单元Instance

---

### Function `AddEntranceArrowISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ISM` | `UInstancedStaticMeshComponent*` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddEntranceArrowISM(UInstancedStaticMeshComponent* ISM , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 初始化建筑入口箭头ISM

---

### Function `AddEntranceArrowInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `EnvironComponent` | const [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* const |
| `(unnamed / type only)` | [EEntranceArrowState](../ERW_Enumerations__EEntranceArrowState.md) ShowState = [EEntranceArrowState](../ERW_Enumerations__EEntranceArrowState.md)::Highlight |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddEntranceArrowInstances(AGOAP_ActorBase* BuildObject , const UERW_EnvironComponent* const EnvironComponent , EEntranceArrowState ShowState = EEntranceArrowState::Highlight);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入入口箭头Instance

---

### Function `RemoveEntranceArrowInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveEntranceArrowInstance(AGOAP_ActorBase* BuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除入口箭头Instance

---

### Function `UpdateEntranceArrowInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `EnvironComponent` | const [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* const |
| `(unnamed / type only)` | [EEntranceArrowState](../ERW_Enumerations__EEntranceArrowState.md) ShowState = [EEntranceArrowState](../ERW_Enumerations__EEntranceArrowState.md)::Highlight |
| `false` | `bool UpdateSlotEnabled =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateEntranceArrowInstances(AGOAP_ActorBase* BuildObject , const UERW_EnvironComponent* const EnvironComponent , EEntranceArrowState ShowState = EEntranceArrowState::Highlight , bool UpdateSlotEnabled = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新入口箭头的Transform和显示

---

### Function `UpdateEntranceArrowFromOtherBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `OtherBuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateEntranceArrowFromOtherBuilding(AGOAP_ActorBase* BuildObject , AGOAP_ActorBase* OtherBuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据另一个建筑的入口更新入口箭头

---

### Function `UpdateEntranceArrowShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Show` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateEntranceArrowShow(bool Show);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新入口箭头是否显示

---

### Function `OnEntranceArrowAddToMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnEntranceArrowAddToMap(AGOAP_ActorBase* BuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当入口箭头加入地图时, 将颜色设置为普通颜色

---

### Function `RecoverEntranceArrowOnLoading`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `EnvironComponent` | const [UERW_EnvironComponent](ERW_EnvironComponent__UERW_EnvironComponent.md)* const |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecoverEntranceArrowOnLoading(AGOAP_ActorBase* BuildObject , const UERW_EnvironComponent* const EnvironComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 读档后恢复入口箭头

---

### Function `AddBuildObjectISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `VariantIndex` | `int32` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `CastShadow` | `bool` |
| `EnableViewMask` | `bool` |
| `IsWall` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddBuildObjectISM(const FName& ID , int32 VariantIndex , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , bool CastShadow , bool EnableViewMask , bool IsWall);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入建造物体ISM

---

### Function `AddStairFlatISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `CastShadow` | `bool` |
| `EnableViewMask` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddStairFlatISM(const FName& ID , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , bool CastShadow , bool EnableViewMask);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入建造物体ISM

---

### Function `SwitchBuildObjectInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `VariantIndex` | `int32` |
| `ToRebuiltInstance` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SwitchBuildObjectInstance(AGOAP_ActorBase* BuildObject , int32 VariantIndex , bool ToRebuiltInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换到原模型或重建后的模型

---

### Function `RemoveOldBuildObjectInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveOldBuildObjectInfo(AGOAP_ActorBase* BuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除重建前的建筑信息

---

### Function `AddBuildObjectInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `VariantIndex` | `int32` |
| `UseZIndex` | `bool` |
| `0` | `int32 ZIndex =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddBuildObjectInstance(AGOAP_ActorBase* BuildObject , int32 VariantIndex , bool UseZIndex , int32 ZIndex = 0);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入建造物体模型Instance

---

### Function `AddStairFlatInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Stair` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `ZIndex` | `int32` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `UseCustomHeight` | `bool` |
| `Height` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddStairFlatInstance(AGOAP_ActorBase* Stair , int32 ZIndex , const FGridPosition& GridPos , bool UseCustomHeight , float Height);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入阶梯平台模型Instance

---

### Function `AddStairInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Stair` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `VariantIndex` | `int32` |
| `ZIndex` | `int32` |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |
| `UseCustomHeight` | `bool` |
| `Height` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddStairInstance(AGOAP_ActorBase* Stair , int32 VariantIndex , int32 ZIndex , const FGridPosition& GridPos , bool UseCustomHeight , float Height);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入阶梯模型Instance

---

### Function `SetBuildObjectInstanceShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `Show` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetBuildObjectInstanceShow(AGOAP_ActorBase* BuildObject , bool Show);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置建造物体模型Instance是否可见

---

### Function `TemporarySetBuildObjectShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `Show` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TemporarySetBuildObjectShow(AGOAP_ActorBase* BuildObject , bool Show);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 临时设置物体模型Instance是否可见(不改变存储数据)

---

### Function `UpdateBuildObjectInstanceTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `UseZIndex` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateBuildObjectInstanceTransform(AGOAP_ActorBase* BuildObject , bool UseZIndex);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新建造物体模型Instance的Transform

---

### Function `UpdateStairInstanceTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Stair` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `GridInfos` | const TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FStairGridInfo](ERW_AreaOperationComponent__FStairGridInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateStairInstanceTransform(AGOAP_ActorBase* Stair , const TMap<FGridPosition , FStairGridInfo>& GridInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新阶梯模型的Transform

---

### Function `RecoverLostStairInstanceOnLoading`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Stair` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `GridInfos` | const TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [FStairGridInfo](ERW_AreaOperationComponent__FStairGridInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecoverLostStairInstanceOnLoading(AGOAP_ActorBase* Stair , const TMap<FGridPosition , FStairGridInfo>& GridInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 读档恢复丢失的阶梯模型

---

### Function `UpdateBuildObjectColor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `CanPlace` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateBuildObjectColor(AGOAP_ActorBase* BuildObject , bool CanPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据能够放置更新建筑颜色

---

### Function `SetFillerColor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `CanPlace` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetFillerColor(AGOAP_ActorBase* BuildObject , bool CanPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置填充模型颜色

---

### Function `SetRoofColor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildID` | `const FName&` |
| `CanPlace` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetRoofColor(const FName& BuildID , bool CanPlace);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置屋顶模型颜色

---

### Function `SwitchBuildObjectInstanceShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `ShowType` | [EISMType](../ERW_Enumerations__EISMType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SwitchBuildObjectInstanceShow(AGOAP_ActorBase* BuildObject , EISMType ShowType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换建造物体模型Instance显示

---

### Function `UpdateBuildObjectState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `State` | [EBuildObjectState](../ERW_Enumerations__EBuildObjectState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateBuildObjectState(AGOAP_ActorBase* BuildObject , EBuildObjectState State);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新建造物体的显示状态

---

### Function `UpdateBuildObjectOutlineShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `StencilValue` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateBuildObjectOutlineShow(AGOAP_ActorBase* BuildObject , int32 StencilValue);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新建造物体描边显示

---

### Function `SetViewMaskValue`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `Enable` | `bool` |
| `Floor` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetViewMaskValue(AGOAP_ActorBase* BuildObject , bool Enable , float Floor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置视野方向屏蔽参数

---

### Function `CheckWallChangeRotateOrientaion`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `WallType` | [EEmbeddedWallType](../ERW_Enumerations__EEmbeddedWallType.md) |
| `DistributionType` | [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool CheckWallChangeRotateOrientaion(AGOAP_ActorBase* Wall , EEmbeddedWallType WallType , EGridDistributionType DistributionType) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查墙是否需要改变朝向

---

### Function `GetWallRotation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetWallRotation(AGOAP_ActorBase* Wall) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the rotation (yaw) of the wall's instance

---

### Function `UpdateWallInstanceRotation`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `Yaw` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateWallInstanceRotation(AGOAP_ActorBase* Wall , float Yaw);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新墙的旋转朝向

---

### Function `UpdateWallDisplayEffect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateWallDisplayEffect(AGOAP_ActorBase* Wall);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新墙显示效果

---

### Function `SetWallDisplayType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `DisplayType` | [EWallDisplayType](../ERW_Enumerations__EWallDisplayType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetWallDisplayType(AGOAP_ActorBase* Wall , EWallDisplayType DisplayType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置墙显示类型

---

### Function `SetVertexAnimBuildObjectPaused`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `IsPause` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SetVertexAnimBuildObjectPaused(AGOAP_ActorBase* BuildObject , bool IsPause);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 设置使用顶点动画模型的建造物体暂停

---

### Function `RemoveBuildObjectInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `OnlyRemoveInstance` | `bool` |
| `SwitchEmbeddedWall` | `bool` |
| `UseOldID` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveBuildObjectInstance(AGOAP_ActorBase* BuildObject , bool OnlyRemoveInstance , bool SwitchEmbeddedWall , bool UseOldID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除建造物体模型Instance及相关建筑信息

---

### Function `RemoveStairInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Stair` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveStairInstances(AGOAP_ActorBase* Stair);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除阶梯的模型

---

### Function `GetStairPositionInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Stair` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `PosInfos` | `TMap<FVector , bool>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetStairPositionInfo(AGOAP_ActorBase* Stair , TMap<FVector , bool>& PosInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得阶梯位置信息

---

### Function `GetStairGridPoses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Stair` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `GridPoses` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetStairGridPoses(AGOAP_ActorBase* Stair , TArray<FGridPosition>& GridPoses);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得阶梯的格子坐标

---

### Function `GetStairHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Stair` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetStairHeight(AGOAP_ActorBase* Stair) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得阶梯Actor所在的高度

---

### Function `IsEmbeddedWall`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool IsEmbeddedWall(AGOAP_ActorBase* BuildObject) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 判断是否是嵌入式墙体

---

### Function `AddAutoTileISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `AutoTileType` | [EAutoTileType](../ERW_Enumerations__EAutoTileType.md) |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `Height` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddAutoTileISM(const FName& ID , EAutoTileType AutoTileType , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , float Height);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入九宫格物体的ISM

---

### Function `CalcFillerHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float CalcFillerHeight(AGOAP_ActorBase* BuildObject , const FGridPosition& GridPos) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 计算填充模型高度

---

### Function `GetFillerHeight`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) float GetFillerHeight(AGOAP_ActorBase* BuildObject) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得填充模型高度

---

### Function `GetFillerCountLayer`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) int32 GetFillerCountLayer(AGOAP_ActorBase* BuildObject) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得填充模型参与消耗计算的层数

---

### Function `HideFillers`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `DistributionInfo` | const TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void HideFillers(AGOAP_ActorBase* BuildObject , const TMap<FGridPosition , EGridDistributionType>& DistributionInfo);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 隐藏填充模型

---

### Function `UpdateSurroundingFillers`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `AreaOperationComponent` | [UERW_AreaOperationComponent](ERW_AreaOperationComponent__UERW_AreaOperationComponent.md)* |
| `EnvironType` | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateSurroundingFillers(AGOAP_ActorBase* BuildObject , UERW_AreaOperationComponent* AreaOperationComponent , EEnvironType EnvironType , const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新本次操作周边的填充模型

---

### Function `UpdateFiller`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `AreaOperationComponent` | [UERW_AreaOperationComponent](ERW_AreaOperationComponent__UERW_AreaOperationComponent.md)* |
| `EnvironType` | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| `DistributionInfo` | const TMap<[FGridPosition](../ERW_CommonTypes__FGridPosition.md) , [EGridDistributionType](../ERW_Enumerations__EGridDistributionType.md)>& |
| `GridMinHeight` | `float` |
| `false` | `bool UpdateSurrounding =` |
| `false` | `bool CheckSurroundingHeight =` |
| `false` | `bool RemoveRedundantLayers =` |
| `false` | `bool IgnoreVisibleActors =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateFiller(AGOAP_ActorBase* BuildObject , UERW_AreaOperationComponent* AreaOperationComponent , EEnvironType EnvironType , const TMap<FGridPosition , EGridDistributionType>& DistributionInfo , float GridMinHeight , bool UpdateSurrounding = false , bool CheckSurroundingHeight = false , bool RemoveRedundantLayers = false , bool IgnoreVisibleActors = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新填充模型

---

### Function `UpdateFillerPreview`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `AreaOperationComponent` | [UERW_AreaOperationComponent](ERW_AreaOperationComponent__UERW_AreaOperationComponent.md)* |
| `EnvironType` | [EEnvironType](../ERW_Enumerations__EEnvironType.md) |
| `GridPos` | const [FGridPosition](../ERW_CommonTypes__FGridPosition.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateFillerPreview(AGOAP_ActorBase* BuildObject , UERW_AreaOperationComponent* AreaOperationComponent , EEnvironType EnvironType , const FGridPosition& GridPos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新填充模型预览显示

---

### Function `RemoveFillerInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `GridPoses` | const TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |
| `OnlyRemoveHideInstance` | `bool` |
| `RemoveData` | `bool` |
| `UseOldID` | `bool` |
| `IsDestroy` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveFillerInstance(AGOAP_ActorBase* BuildObject , const TArray<FGridPosition>& GridPoses , bool OnlyRemoveHideInstance , bool RemoveData , bool UseOldID , bool IsDestroy);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除填充模型Instance

---

### Function `AddFillerInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `UseOldID` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddFillerInstances(AGOAP_ActorBase* BuildObject , bool UseOldID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入填充模型Instance

---

### Function `GetFillerGridPoses`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `GridPoses` | TArray<[FGridPosition](../ERW_CommonTypes__FGridPosition.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) void GetFillerGridPoses(AGOAP_ActorBase* BuildObject , TArray<FGridPosition>& GridPoses) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获得填充模型格子坐标

---

### Function `UpdateFillerState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `State` | [EBuildObjectState](../ERW_Enumerations__EBuildObjectState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateFillerState(AGOAP_ActorBase* BuildObject , EBuildObjectState State);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新填充模型的显示状态

---

### Function `AddPillarISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `EnableViewMask` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPillarISM(const FName& ID , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , bool EnableViewMask);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入建筑柱子模型的ISM

---

### Function `RecoverPillarOnLoading`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecoverPillarOnLoading();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 读档恢复建筑柱子

---

### Function `AddPillarInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `Layer` | `int32` |
| `GridSeamPoint` | const [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPillarInstance(const FName& ID , int32 Layer , const FGridSeamPoint& GridSeamPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建建筑柱子模型Instance

---

### Function `RemovePillarInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Layer` | `int32` |
| `GridSeamPoint` | const [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemovePillarInstance(int32 Layer , const FGridSeamPoint& GridSeamPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除建筑柱子模型Instance

---

### Function `SwitchPillarInstanceShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `GridSeamPoint` | const [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)& |
| `ShowType` | [EISMType](../ERW_Enumerations__EISMType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SwitchPillarInstanceShow(const FGridSeamPoint& GridSeamPoint , EISMType ShowType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换建筑柱子模型Instance显示

---

### Function `OnBuildObjectBuildComplete`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OnBuildObjectBuildComplete(AGOAP_ActorBase* BuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当建筑建造完成时

---

### Function `UpdatePillarState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `State` | [EBuildObjectState](../ERW_Enumerations__EBuildObjectState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdatePillarState(AGOAP_ActorBase* BuildObject , EBuildObjectState State);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新建筑柱子的显示状态

---

### Function `AddPillarToMap`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Layer` | `int32` |
| `GridSeamPoint` | const [FGridSeamPoint](../ERW_CommonTypes__FGridSeamPoint.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddPillarToMap(int32 Layer , const FGridSeamPoint& GridSeamPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 将柱子设置为在地图中

---

### Function `AddEmbeddedWallISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `WallType` | [EEmbeddedWallType](../ERW_Enumerations__EEmbeddedWallType.md) |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `EnableViewMask` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddEmbeddedWallISM(const FName& ID , EEmbeddedWallType WallType , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , bool EnableViewMask);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入嵌入式墙体模型的ISM

---

### Function `ExistEmbeddedWall`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) bool ExistEmbeddedWall(const FName& ID) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 是否存在嵌入式墙体

---

### Function `UpdateEmbeddedWallInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Walls` | const TMap<[EEmbeddedWallType](../ERW_Enumerations__EEmbeddedWallType.md) , [FReplacedWallData](ERW_HISMManager__FReplacedWallData.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateEmbeddedWallInfo(const TMap<EEmbeddedWallType , FReplacedWallData>& Walls);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新嵌入式墙体信息

---

### Function `SwitchEmbeddedWallInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Wall` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SwitchEmbeddedWallInstance(AGOAP_ActorBase* Wall);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换嵌入式墙体模型(左右模型切换)

---

### Function `RemoveEmbeddedWallInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OnlyRemoveHideWalls` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveEmbeddedWallInstances(bool OnlyRemoveHideWalls);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除本次操作的嵌入式墙体模型Instance

---

### Function `ReplaceWall`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BuildObject` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ReplaceWall(AGOAP_ActorBase* BuildObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 用嵌入式墙体替换普通墙体

---

### Function `AddRoofISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `RoofPartType` | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddRoofISM(const FName& ID , ERoofPartType RoofPartType , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入屋顶模型的ISM

---

### Function `AddRoofInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `RoofPartType` | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| `Roof` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddRoofInstance(const FName& ID , ERoofPartType RoofPartType , AGOAP_ActorBase* Roof);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建单个屋顶模型Instance

---

### Function `AddRoofInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `RoofPartType` | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| `Roofs` | const TArray<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)*>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddRoofInstances(const FName& ID , ERoofPartType RoofPartType , const TArray<AGOAP_ActorBase*>& Roofs);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建屋顶模型Instance

---

### Function `UpdateRoofInstanceTransform`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RoofPartType` | [ERoofPartType](../ERW_Enumerations__ERoofPartType.md) |
| `Roof` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `Transform` | `const FTransform&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateRoofInstanceTransform(ERoofPartType RoofPartType , AGOAP_ActorBase* Roof , const FTransform& Transform);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新屋顶模型Instance的Transform

---

### Function `RemoveRoofInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OnlyRemoveHideRoof` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveRoofInstances(bool OnlyRemoveHideRoof);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除屋顶模型Instance

---

### Function `RecordRoofInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RecordRoofInfos();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 将屋顶信息加入到建造物体信息中

---

### Function `ClearRoofInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearRoofInfos();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清空屋顶信息

---

### Function `UpdateRoofState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Roof` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `State` | [EBuildObjectState](../ERW_Enumerations__EBuildObjectState.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateRoofState(AGOAP_ActorBase* Roof , EBuildObjectState State);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新屋顶的显示状态

---

### Function `SwitchRoofShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SwitchRoofShow();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换屋顶显示或隐藏

---

### Function `AddAssembleISM`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FName&` |
| `AssemblePartType` | [EAssemblePartType](../ERW_Enumerations__EAssemblePartType.md) |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddAssembleISM(const FName& ID , EAssemblePartType AssemblePartType , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入组装建筑模型的ISM

---

### Function `AddAssembleInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AssembleActor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `AssemblePartTransforms` | const TArray<[FAssemblePartTransform](../ERW_CommonTypes__FAssemblePartTransform.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddAssembleInstances(AGOAP_ActorBase* AssembleActor , const TArray<FAssemblePartTransform>& AssemblePartTransforms);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入组装建筑模型实例

---

### Function `UpdateAssembleInstanceTransforms`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AssembleActor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `RotateOrientation` | [ERotateOrientation](../ERW_Enumerations__ERotateOrientation.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateAssembleInstanceTransforms(AGOAP_ActorBase* AssembleActor , ERotateOrientation RotateOrientation);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新组装建筑模型的Transform

---

### Function `AddAssemblesPartInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Assembles` | const TMap<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* , FVector>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void AddAssemblesPartInstances(const TMap<AGOAP_ActorBase* , FVector>& Assembles);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 加入组装建筑的部位模型

---

### Function `RemoveAssembleInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AssembleActor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveAssembleInstances(AGOAP_ActorBase* AssembleActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除组装建筑模型

---

### Function `RemoveAssemblePartInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Assembles` | const TMap<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* , FVector>& |
| `AssembleActor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void RemoveAssemblePartInstances(const TMap<AGOAP_ActorBase* , FVector>& Assembles , AGOAP_ActorBase* AssembleActor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除组装建筑部位模型

---

### Function `UpdateAssemblePartInstanceShow`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Assembles` | const TMap<[AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* , FVector>& |
| `AssembleActor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `Show` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateAssemblePartInstanceShow(const TMap<AGOAP_ActorBase* , FVector>& Assembles , AGOAP_ActorBase* AssembleActor , bool Show);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 显示或隐藏组装建筑部位模型

---

### Function `GetAssemblePartInfos`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AssembleActor` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `AssemblePartInfos` | TArray<[FAssemblePartInfo](../ERW_CommonTypes__FAssemblePartInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void GetAssemblePartInfos(AGOAP_ActorBase* AssembleActor , TArray<FAssemblePartInfo>& AssemblePartInfos);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获得组装建筑的部位信息

---

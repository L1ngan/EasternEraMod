# `class` `UERW_HISMManager`

**源码头文件：** `EastRimWorld/Components/ERW_HISMManager.h`

---

## 功能说明（来自头文件注释）

> 管理各种物体的ISM组件(该组件需要挂在一个能出现在场景中的Actor上)
> 
> ----------! Warning !----------
> 由于UE5的新特性Nanite, 使用ISM进行管理的模型需要开启Nanite, 否则移动模型会出现消失的BUG
> ----------! Warning !----------

## 蓝图暴露变量

### 属性 `SceneManager`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `AERW_SceneManager*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) AERW_SceneManager* SceneManager { nullptr };` |

**源码注释：**

> 场景管理器类

---

### 属性 `MapDataMgr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UERW_MapDataMgr*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UERW_MapDataMgr* MapDataMgr { nullptr };` |

---

### 属性 `TransparentMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UMaterialInstance*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UMaterialInstance* TransparentMaterial { nullptr };` |

**源码注释：**

> 透明材质

---

### 属性 `PlumbBobMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UMaterialInstance*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UMaterialInstance* PlumbBobMaterial { nullptr };` |

**源码注释：**

> 铅锤材质

---

### 属性 `RoomUnitMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UMaterialInstance*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UMaterialInstance* RoomUnitMaterial { nullptr };` |

**源码注释：**

> 房间单元材质

---

### 属性 `EntranceArrowMaterial`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UMaterialInstance*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) UMaterialInstance* EntranceArrowMaterial { nullptr };` |

**源码注释：**

> 建筑入口箭头材质

---

### 属性 `EntranceArrowLightColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FLinearColor EntranceArrowLightColor;` |

**源码注释：**

> 建筑入口箭头高亮显示颜色

---

### 属性 `EntranceArrowNormalColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FLinearColor EntranceArrowNormalColor;` |

**源码注释：**

> 建筑入口箭头普通颜色

---

### 属性 `EntranceArrowDisableColor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FLinearColor` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) FLinearColor EntranceArrowDisableColor;` |

**源码注释：**

> 建筑入口箭头不可用颜色

---

### 属性 `HideRoof`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,SaveGame) bool HideRoof { false };` |

**源码注释：**

> 是否需要隐藏屋顶(通过UI按钮进行的隐藏)

---

### 属性 `StairFlatHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float StairFlatHeight { 0.f };` |

**源码注释：**

> 阶梯平台模型高度

---

### 属性 `RuntimeVirtualTexture`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<URuntimeVirtualTexture>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TObjectPtr<URuntimeVirtualTexture> RuntimeVirtualTexture;` |

**源码注释：**

> 动态虚拟纹理 用于消除草

---

### 属性 `PlumbBobExist`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool PlumbBobExist { false };` |

**源码注释：**

> 铅锤是否存在

---

## 蓝图暴露函数

### 函数 `ClearISMData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearISMData();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清空ISM相关数据

---

### 函数 `FindActorByISMIndex`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `AGOAP_ActorBase*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ISMComponent` | `UInstancedStaticMeshComponent*` |
| `Index` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) AGOAP_ActorBase* FindActorByISMIndex(UInstancedStaticMeshComponent* ISMComponent , int32 Index) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 通过ISM组件和索引找到对应的Actor

---

### 函数 `ClearObjects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearObjects();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清空本次操作的物体

---

### 函数 `GetEmbeddedWallType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `EEmbeddedWallType` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) EEmbeddedWallType GetEmbeddedWallType(AGOAP_ActorBase* BuildObject) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得嵌入式墙体类型

---

### 函数 `InitPlumbBobISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ISM` | `UInstancedStaticMeshComponent*` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitPlumbBobISM(UInstancedStaticMeshComponent* ISM , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化铅锤ISM

---

### 函数 `AddPlumbBobInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddPlumbBobInstances();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入铅锤模型Instance

---

### 函数 `ClearPlumbBobInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearPlumbBobInstances();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清空铅锤模型Instance

---

### 函数 `UpdatePlumbBobTransforms`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MinPoint` | `const FIntPoint&` |
| `MaxPoint` | `const FIntPoint&` |
| `Height` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdatePlumbBobTransforms(const FIntPoint& MinPoint , const FIntPoint& MaxPoint , float Height);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新铅锤模型Instance的Transform

---

### 函数 `AddRoomUnitISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ISM` | `UInstancedStaticMeshComponent*` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddRoomUnitISM(UInstancedStaticMeshComponent* ISM , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化房间单元ISM

---

### 函数 `AddRoomUnitInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `EnvironComponent` | `const UERW_EnvironComponent* const` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddRoomUnitInstance(AGOAP_ActorBase* BuildObject , const UERW_EnvironComponent* const EnvironComponent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入房间单元Instance

---

### 函数 `RemoveRoomUnitInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveRoomUnitInstance(AGOAP_ActorBase* BuildObject);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除房间单元Instance

---

### 函数 `AddEntranceArrowISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ISM` | `UInstancedStaticMeshComponent*` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddEntranceArrowISM(UInstancedStaticMeshComponent* ISM , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化建筑入口箭头ISM

---

### 函数 `AddEntranceArrowInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `EnvironComponent` | `const UERW_EnvironComponent* const` |
| `（匿名/仅类型）` | `EEntranceArrowState ShowState = EEntranceArrowState::Highlight` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddEntranceArrowInstances(AGOAP_ActorBase* BuildObject , const UERW_EnvironComponent* const EnvironComponent , EEntranceArrowState ShowState = EEntranceArrowState::Highlight);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入入口箭头Instance

---

### 函数 `RemoveEntranceArrowInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveEntranceArrowInstance(AGOAP_ActorBase* BuildObject);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除入口箭头Instance

---

### 函数 `UpdateEntranceArrowInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `EnvironComponent` | `const UERW_EnvironComponent* const` |
| `（匿名/仅类型）` | `EEntranceArrowState ShowState = EEntranceArrowState::Highlight` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateEntranceArrowInstances(AGOAP_ActorBase* BuildObject , const UERW_EnvironComponent* const EnvironComponent , EEntranceArrowState ShowState = EEntranceArrowState::Highlight);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新入口箭头的Transform和显示

---

### 函数 `UpdateEntranceArrowShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Show` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateEntranceArrowShow(bool Show);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新入口箭头是否显示

---

### 函数 `OnEntranceArrowAddToMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnEntranceArrowAddToMap(AGOAP_ActorBase* BuildObject);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当入口箭头加入地图时, 将颜色设置为普通颜色

---

### 函数 `RecoverEntranceArrowOnLoading`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `EnvironComponent` | `const UERW_EnvironComponent* const` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RecoverEntranceArrowOnLoading(AGOAP_ActorBase* BuildObject , const UERW_EnvironComponent* const EnvironComponent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 读档后恢复入口箭头

---

### 函数 `AddBuildObjectISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `VariantIndex` | `int32` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `CastShadow` | `bool` |
| `EnableViewMask` | `bool` |
| `IsWall` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddBuildObjectISM(const FName& ID , int32 VariantIndex , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , bool CastShadow , bool EnableViewMask , bool IsWall);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入建造物体ISM

---

### 函数 `AddStairFlatISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `CastShadow` | `bool` |
| `EnableViewMask` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddStairFlatISM(const FName& ID , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , bool CastShadow , bool EnableViewMask);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入建造物体ISM

---

### 函数 `AddBuildObjectInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `VariantIndex` | `int32` |
| `UseZIndex` | `bool` |
| `0` | `int32 ZIndex =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddBuildObjectInstance(AGOAP_ActorBase* BuildObject , int32 VariantIndex , bool UseZIndex , int32 ZIndex = 0);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入建造物体模型Instance

---

### 函数 `AddStairFlatInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Stair` | `AGOAP_ActorBase*` |
| `ZIndex` | `int32` |
| `GridPos` | `const FGridPosition&` |
| `UseCustomHeight` | `bool` |
| `Height` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddStairFlatInstance(AGOAP_ActorBase* Stair , int32 ZIndex , const FGridPosition& GridPos , bool UseCustomHeight , float Height);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入阶梯平台模型Instance

---

### 函数 `AddStairInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Stair` | `AGOAP_ActorBase*` |
| `VariantIndex` | `int32` |
| `ZIndex` | `int32` |
| `GridPos` | `const FGridPosition&` |
| `UseCustomHeight` | `bool` |
| `Height` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddStairInstance(AGOAP_ActorBase* Stair , int32 VariantIndex , int32 ZIndex , const FGridPosition& GridPos , bool UseCustomHeight , float Height);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入阶梯模型Instance

---

### 函数 `SetBuildObjectInstanceShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `Show` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetBuildObjectInstanceShow(AGOAP_ActorBase* BuildObject , bool Show);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置建造物体模型Instance是否可见

---

### 函数 `TemporarySetBuildObjectShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `Show` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TemporarySetBuildObjectShow(AGOAP_ActorBase* BuildObject , bool Show);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 临时设置物体模型Instance是否可见(不改变存储数据)

---

### 函数 `UpdateBuildObjectInstanceTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `UseZIndex` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateBuildObjectInstanceTransform(AGOAP_ActorBase* BuildObject , bool UseZIndex);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新建造物体模型Instance的Transform

---

### 函数 `UpdateStairInstanceTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Stair` | `AGOAP_ActorBase*` |
| `GridInfos` | `const TMap<FGridPosition , FStairGridInfo>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateStairInstanceTransform(AGOAP_ActorBase* Stair , const TMap<FGridPosition , FStairGridInfo>& GridInfos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新阶梯模型的Transform

---

### 函数 `RecoverLostStairInstanceOnLoading`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Stair` | `AGOAP_ActorBase*` |
| `GridInfos` | `const TMap<FGridPosition , FStairGridInfo>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RecoverLostStairInstanceOnLoading(AGOAP_ActorBase* Stair , const TMap<FGridPosition , FStairGridInfo>& GridInfos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 读档恢复丢失的阶梯模型

---

### 函数 `UpdateBuildObjectColor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `CanPlace` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateBuildObjectColor(AGOAP_ActorBase* BuildObject , bool CanPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据能够放置更新建筑颜色

---

### 函数 `SetFillerColor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `CanPlace` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetFillerColor(AGOAP_ActorBase* BuildObject , bool CanPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置填充模型颜色

---

### 函数 `SetRoofColor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildID` | `const FName&` |
| `CanPlace` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetRoofColor(const FName& BuildID , bool CanPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置屋顶模型颜色

---

### 函数 `SwitchBuildObjectInstanceShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `ShowType` | `EISMType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SwitchBuildObjectInstanceShow(AGOAP_ActorBase* BuildObject , EISMType ShowType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换建造物体模型Instance显示

---

### 函数 `UpdateBuildObjectState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `State` | `EBuildObjectState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateBuildObjectState(AGOAP_ActorBase* BuildObject , EBuildObjectState State);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新建造物体的显示状态

---

### 函数 `UpdateBuildObjectOutlineShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `StencilValue` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateBuildObjectOutlineShow(AGOAP_ActorBase* BuildObject , int32 StencilValue);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新建造物体描边显示

---

### 函数 `SetViewMaskValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `Enable` | `bool` |
| `Floor` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetViewMaskValue(AGOAP_ActorBase* BuildObject , bool Enable , float Floor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置视野方向屏蔽参数

---

### 函数 `CheckWallChangeRotateOrientaion`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | `AGOAP_ActorBase*` |
| `WallType` | `EEmbeddedWallType` |
| `DistributionType` | `EGridDistributionType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool CheckWallChangeRotateOrientaion(AGOAP_ActorBase* Wall , EEmbeddedWallType WallType , EGridDistributionType DistributionType) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查墙是否需要改变朝向

---

### 函数 `GetWallRotation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) float GetWallRotation(AGOAP_ActorBase* Wall) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `UpdateWallInstanceRotation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | `AGOAP_ActorBase*` |
| `Yaw` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateWallInstanceRotation(AGOAP_ActorBase* Wall , float Yaw);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新墙的旋转朝向

---

### 函数 `UpdateWallDisplayEffect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateWallDisplayEffect(AGOAP_ActorBase* Wall);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新墙显示效果

---

### 函数 `SetWallDisplayType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | `AGOAP_ActorBase*` |
| `DisplayType` | `EWallDisplayType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetWallDisplayType(AGOAP_ActorBase* Wall , EWallDisplayType DisplayType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置墙显示类型

---

### 函数 `SetVertexAnimBuildObjectPaused`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `IsPause` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetVertexAnimBuildObjectPaused(AGOAP_ActorBase* BuildObject , bool IsPause);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置使用顶点动画模型的建造物体暂停

---

### 函数 `RemoveBuildObjectInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `OnlyRemoveInstance` | `bool` |
| `SwitchEmbeddedWall` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveBuildObjectInstance(AGOAP_ActorBase* BuildObject , bool OnlyRemoveInstance , bool SwitchEmbeddedWall);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除建造物体模型Instance及相关建筑信息

---

### 函数 `RemoveStairInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Stair` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveStairInstances(AGOAP_ActorBase* Stair);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除阶梯的模型

---

### 函数 `GetStairPositionInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Stair` | `AGOAP_ActorBase*` |
| `PosInfos` | `TMap<FVector , bool>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetStairPositionInfo(AGOAP_ActorBase* Stair , TMap<FVector , bool>& PosInfos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得阶梯位置信息

---

### 函数 `GetStairGridPoses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Stair` | `AGOAP_ActorBase*` |
| `GridPoses` | `TArray<FGridPosition>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetStairGridPoses(AGOAP_ActorBase* Stair , TArray<FGridPosition>& GridPoses);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得阶梯的格子坐标

---

### 函数 `GetStairHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Stair` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) float GetStairHeight(AGOAP_ActorBase* Stair) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得阶梯Actor所在的高度

---

### 函数 `IsEmbeddedWall`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool IsEmbeddedWall(AGOAP_ActorBase* BuildObject) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 判断是否是嵌入式墙体

---

### 函数 `AddAutoTileISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `AutoTileType` | `EAutoTileType` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `Height` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddAutoTileISM(const FName& ID , EAutoTileType AutoTileType , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , float Height);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入九宫格物体的ISM

---

### 函数 `CalcFillerHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `GridPos` | `const FGridPosition&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) float CalcFillerHeight(AGOAP_ActorBase* BuildObject , const FGridPosition& GridPos) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 计算填充模型高度

---

### 函数 `GetFillerHeight`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) float GetFillerHeight(AGOAP_ActorBase* BuildObject) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得填充模型高度

---

### 函数 `HideFillers`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `DistributionInfo` | `const TMap<FGridPosition , EGridDistributionType>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void HideFillers(AGOAP_ActorBase* BuildObject , const TMap<FGridPosition , EGridDistributionType>& DistributionInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 隐藏填充模型

---

### 函数 `UpdateSurroundingFillers`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `AreaOperationComponent` | `UERW_AreaOperationComponent*` |
| `EnvironType` | `EEnvironType` |
| `GridPos` | `const FGridPosition&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateSurroundingFillers(AGOAP_ActorBase* BuildObject , UERW_AreaOperationComponent* AreaOperationComponent , EEnvironType EnvironType , const FGridPosition& GridPos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新本次操作周边的填充模型

---

### 函数 `UpdateFiller`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `AreaOperationComponent` | `UERW_AreaOperationComponent*` |
| `EnvironType` | `EEnvironType` |
| `DistributionInfo` | `const TMap<FGridPosition , EGridDistributionType>&` |
| `GridMinHeight` | `float` |
| `false` | `bool UpdateSurrounding =` |
| `false` | `bool CheckSurroundingHeight =` |
| `false` | `bool RemoveRedundantLayers =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateFiller(AGOAP_ActorBase* BuildObject , UERW_AreaOperationComponent* AreaOperationComponent , EEnvironType EnvironType , const TMap<FGridPosition , EGridDistributionType>& DistributionInfo , float GridMinHeight , bool UpdateSurrounding = false , bool CheckSurroundingHeight = false , bool RemoveRedundantLayers = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新填充模型

---

### 函数 `UpdateFillerPreview`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `AreaOperationComponent` | `UERW_AreaOperationComponent*` |
| `EnvironType` | `EEnvironType` |
| `GridPos` | `const FGridPosition&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateFillerPreview(AGOAP_ActorBase* BuildObject , UERW_AreaOperationComponent* AreaOperationComponent , EEnvironType EnvironType , const FGridPosition& GridPos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新填充模型预览显示

---

### 函数 `RemoveFillerInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `GridPoses` | `const TArray<FGridPosition>&` |
| `OnlyRemoveHideInstance` | `bool` |
| `RemoveData` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveFillerInstance(AGOAP_ActorBase* BuildObject , const TArray<FGridPosition>& GridPoses , bool OnlyRemoveHideInstance , bool RemoveData);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除填充模型Instance

---

### 函数 `GetFillerGridPoses`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `GridPoses` | `TArray<FGridPosition>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) void GetFillerGridPoses(AGOAP_ActorBase* BuildObject , TArray<FGridPosition>& GridPoses) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获得填充模型格子坐标

---

### 函数 `UpdateFillerState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `State` | `EBuildObjectState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateFillerState(AGOAP_ActorBase* BuildObject , EBuildObjectState State);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新填充模型的显示状态

---

### 函数 `AddPillarISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `EnableViewMask` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddPillarISM(const FName& ID , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , bool EnableViewMask);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入建筑柱子模型的ISM

---

### 函数 `RecoverPillarOnLoading`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RecoverPillarOnLoading();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 读档恢复建筑柱子

---

### 函数 `AddPillarInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `Layer` | `int32` |
| `GridSeamPoint` | `const FGridSeamPoint&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddPillarInstance(const FName& ID , int32 Layer , const FGridSeamPoint& GridSeamPoint);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建建筑柱子模型Instance

---

### 函数 `RemovePillarInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Layer` | `int32` |
| `GridSeamPoint` | `const FGridSeamPoint&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemovePillarInstance(int32 Layer , const FGridSeamPoint& GridSeamPoint);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除建筑柱子模型Instance

---

### 函数 `SwitchPillarInstanceShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GridSeamPoint` | `const FGridSeamPoint&` |
| `ShowType` | `EISMType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SwitchPillarInstanceShow(const FGridSeamPoint& GridSeamPoint , EISMType ShowType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换建筑柱子模型Instance显示

---

### 函数 `OnBuildObjectBuildComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnBuildObjectBuildComplete(AGOAP_ActorBase* BuildObject);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 当建筑建造完成时

---

### 函数 `UpdatePillarState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |
| `State` | `EBuildObjectState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdatePillarState(AGOAP_ActorBase* BuildObject , EBuildObjectState State);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新建筑柱子的显示状态

---

### 函数 `AddPillarToMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Layer` | `int32` |
| `GridSeamPoint` | `const FGridSeamPoint&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddPillarToMap(int32 Layer , const FGridSeamPoint& GridSeamPoint);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 将柱子设置为在地图中

---

### 函数 `AddEmbeddedWallISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `WallType` | `EEmbeddedWallType` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |
| `EnableViewMask` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddEmbeddedWallISM(const FName& ID , EEmbeddedWallType WallType , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh , bool EnableViewMask);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入嵌入式墙体模型的ISM

---

### 函数 `UpdateEmbeddedWallInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Walls` | `const TMap<EEmbeddedWallType , FReplacedWallData>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateEmbeddedWallInfo(const TMap<EEmbeddedWallType , FReplacedWallData>& Walls);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新嵌入式墙体信息

---

### 函数 `SwitchEmbeddedWallInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Wall` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SwitchEmbeddedWallInstance(AGOAP_ActorBase* Wall);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换嵌入式墙体模型(左右模型切换)

---

### 函数 `RemoveEmbeddedWallInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OnlyRemoveHideWalls` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveEmbeddedWallInstances(bool OnlyRemoveHideWalls);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除本次操作的嵌入式墙体模型Instance

---

### 函数 `ReplaceWall`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuildObject` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ReplaceWall(AGOAP_ActorBase* BuildObject);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 用嵌入式墙体替换普通墙体

---

### 函数 `AddRoofISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `RoofPartType` | `ERoofPartType` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddRoofISM(const FName& ID , ERoofPartType RoofPartType , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入屋顶模型的ISM

---

### 函数 `AddRoofInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `RoofPartType` | `ERoofPartType` |
| `Roof` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddRoofInstance(const FName& ID , ERoofPartType RoofPartType , AGOAP_ActorBase* Roof);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建单个屋顶模型Instance

---

### 函数 `AddRoofInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `RoofPartType` | `ERoofPartType` |
| `Roofs` | `const TArray<AGOAP_ActorBase*>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddRoofInstances(const FName& ID , ERoofPartType RoofPartType , const TArray<AGOAP_ActorBase*>& Roofs);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建屋顶模型Instance

---

### 函数 `UpdateRoofInstanceTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RoofPartType` | `ERoofPartType` |
| `Roof` | `AGOAP_ActorBase*` |
| `Transform` | `const FTransform&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateRoofInstanceTransform(ERoofPartType RoofPartType , AGOAP_ActorBase* Roof , const FTransform& Transform);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新屋顶模型Instance的Transform

---

### 函数 `RemoveRoofInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OnlyRemoveHideRoof` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveRoofInstances(bool OnlyRemoveHideRoof);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除屋顶模型Instance

---

### 函数 `RecordRoofInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RecordRoofInfos();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 将屋顶信息加入到建造物体信息中

---

### 函数 `ClearRoofInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ClearRoofInfos();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 清空屋顶信息

---

### 函数 `UpdateRoofState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Roof` | `AGOAP_ActorBase*` |
| `State` | `EBuildObjectState` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateRoofState(AGOAP_ActorBase* Roof , EBuildObjectState State);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新屋顶的显示状态

---

### 函数 `SwitchRoofShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SwitchRoofShow();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 切换屋顶显示或隐藏

---

### 函数 `AddAssembleISM`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FName&` |
| `AssemblePartType` | `EAssemblePartType` |
| `StartCullDistance` | `int32` |
| `EndCullDistance` | `int32` |
| `StaticMesh` | `UStaticMesh*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddAssembleISM(const FName& ID , EAssemblePartType AssemblePartType , int32 StartCullDistance , int32 EndCullDistance , UStaticMesh* StaticMesh);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入组装建筑模型的ISM

---

### 函数 `AddAssembleInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AssembleActor` | `AGOAP_ActorBase*` |
| `AssemblePartTransforms` | `const TArray<FAssemblePartTransform>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddAssembleInstances(AGOAP_ActorBase* AssembleActor , const TArray<FAssemblePartTransform>& AssemblePartTransforms);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入组装建筑模型实例

---

### 函数 `UpdateAssembleInstanceTransforms`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AssembleActor` | `AGOAP_ActorBase*` |
| `RotateOrientation` | `ERotateOrientation` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateAssembleInstanceTransforms(AGOAP_ActorBase* AssembleActor , ERotateOrientation RotateOrientation);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新组装建筑模型的Transform

---

### 函数 `AddAssemblesPartInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Assembles` | `const TMap<AGOAP_ActorBase* , FVector>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AddAssemblesPartInstances(const TMap<AGOAP_ActorBase* , FVector>& Assembles);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 加入组装建筑的部位模型

---

### 函数 `RemoveAssembleInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AssembleActor` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveAssembleInstances(AGOAP_ActorBase* AssembleActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除组装建筑模型

---

### 函数 `RemoveAssemblePartInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Assembles` | `const TMap<AGOAP_ActorBase* , FVector>&` |
| `AssembleActor` | `AGOAP_ActorBase*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveAssemblePartInstances(const TMap<AGOAP_ActorBase* , FVector>& Assembles , AGOAP_ActorBase* AssembleActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除组装建筑部位模型

---

### 函数 `UpdateAssemblePartInstanceShow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Assembles` | `const TMap<AGOAP_ActorBase* , FVector>&` |
| `AssembleActor` | `AGOAP_ActorBase*` |
| `Show` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateAssemblePartInstanceShow(const TMap<AGOAP_ActorBase* , FVector>& Assembles , AGOAP_ActorBase* AssembleActor , bool Show);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 显示或隐藏组装建筑部位模型

---

### 函数 `GetAssemblePartInfos`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AssembleActor` | `AGOAP_ActorBase*` |
| `AssemblePartInfos` | `TArray<FAssemblePartInfo>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAssemblePartInfos(AGOAP_ActorBase* AssembleActor , TArray<FAssemblePartInfo>& AssemblePartInfos);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得组装建筑的部位信息

---

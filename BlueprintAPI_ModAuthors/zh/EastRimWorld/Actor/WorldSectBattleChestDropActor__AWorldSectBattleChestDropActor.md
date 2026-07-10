# `class` `AWorldSectBattleChestDropActor`

**源码头文件:** `EastRimWorld/Actor/WorldSectBattleChestDropActor.h`

---

## 功能说明（来自头文件注释）

> Visual drop spawned by a sect battle chest.
> It starts at the chest center, flies along a short arc, then stops at a random XY point around the chest.

## 蓝图暴露变量

### 属性 `DropCollisionSphere`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USphereComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") TObjectPtr<USphereComponent> DropCollisionSphere;` |

**说明:**

> 物理刚体 = 碰撞球（一定有碰撞，落地稳定）；挡地面但放行玩家/角色，避免挡路。物品模型只挂它上面做显示。

---

### 属性 `StaticMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") TObjectPtr<UStaticMeshComponent> StaticMeshComponent;` |

**说明:**

> 物品显示模型的静态网格组件，挂在碰撞球上仅做显示

---

### 属性 `PickupSphere`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USphereComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") TObjectPtr<USphereComponent> PickupSphere;` |

**说明:**

> 拾取检测的球形碰撞组件

---

### 属性 `RandomStaticMeshes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<UStaticMesh>>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop") TArray<TObjectPtr<UStaticMesh>> RandomStaticMeshes;` |

**说明:**

> 随机外观的静态网格候选列表

---

### 属性 `ItemData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") FItemSimpleData ItemData;` |

**说明:**

> 掉落物携带的物品基础数据

---

### 属性 `ItemName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") FText ItemName;` |

**说明:**

> 物品展示数据：InitChestDropItem 时按 ItemData.Id/Type 从物品配置表(FInventoryGeneralData)查得，供拾取提示/头顶icon等UI读取。

---

### 属性 `ItemDescription`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") FText ItemDescription;` |

**说明:**

> 物品描述，初始化时按ItemData的Id/Type从物品配置表查得，供UI读取

---

### 属性 `ItemIcon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") TSoftObjectPtr<UTexture2D> ItemIcon;` |

**说明:**

> 物品图标（软引用），从物品配置表查得，供拾取提示/头顶图标等UI读取

---

### 属性 `ItemQuality`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EItemQuality` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") EItemQuality ItemQuality = EItemQuality::None;` |

**说明:**

> 物品品质，从物品配置表查得，供UI读取

---

### 属性 `ItemGrade`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|ChestDrop") FText ItemGrade;` |

**说明:**

> 物品品阶文本，从物品配置表查得，供UI读取

---

### 属性 `SpawnRandomOffsetRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float SpawnRandomOffsetRadius = 10.f;` |

**说明:**

> 生成位置的随机偏移半径，默认10

---

### 属性 `DropCollisionRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float DropCollisionRadius = 20.f;` |

**说明:**

> 掉落物物理碰撞球半径（决定落地停留高度，不影响显示模型大小）。

---

### 属性 `PickupRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float PickupRadius = 80.f;` |

**说明:**

> 拾取检测球的半径，默认80

---

### 属性 `PickupDelaySeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float PickupDelaySeconds = 0.5f;` |

**说明:**

> 生成后允许拾取的延迟时间（秒），默认0.5

---

### 属性 `DropTravelDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.01")) float DropTravelDuration = 0.35f;` |

**说明:**

> 从宝箱中心飞到落点的总时长（秒）。纯轨迹插值，不再依赖物理落地，避免穿地。

---

### 属性 `DropArcHeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0.0")) float DropArcHeight = 120.f;` |

**说明:**

> 飞行轨迹的最高抛物线高度（相对起点/终点连线的额外抬高）。

---

## 蓝图暴露函数

### 函数 `InitChestDropItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InItemData` | const [FItemSimpleData](../Struct/CommonStruct__FItemSimpleData.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void InitChestDropItem(const FItemSimpleData& InItemData);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 用一条掉落数据初始化掉落物：存物品基础数据，并按 Id/Type 从物品配置表查出展示数据(名字/描述/icon/品质/品阶/3D模型)。

---

### 函数 `RandomSetStaticMesh`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void RandomSetStaticMesh();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从RandomStaticMeshes候选列表中随机选取一个设置为显示网格

---

### 函数 `StartDropFromOrigin`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OriginLocation` | `const FVector&` |
| `ActorToIgnore` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void StartDropFromOrigin(const FVector& OriginLocation, AActor* ActorToIgnore);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从原点位置开始掉落：向上弹起后带随机水平偏移散落到地面，可指定忽略碰撞的Actor

---

### 函数 `StartDropToLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartLocation` | `const FVector&` |
| `TargetLocation` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void StartDropToLocation(const FVector& StartLocation, const FVector& TargetLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从起始位置掉落到指定目标位置

---

### 函数 `K2_OnChestDropLanded`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="WorldSectBattle|ChestDrop" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|ChestDrop", meta = (DisplayName = "OnChestDropLanded")) void K2_OnChestDropLanded();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnChestDropLanded」。

**说明:**

> 蓝图可实现事件：掉落物落地时调用

---

### 函数 `K2_OnChestDropItemInitialized`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="WorldSectBattle|ChestDrop" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|ChestDrop", meta = (DisplayName = "OnChestDropItemInitialized")) void K2_OnChestDropItemInitialized();`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnChestDropItemInitialized」。

**说明:**

> 掉落物展示数据(名字/描述/icon/品质/品阶/模型)初始化完成后触发。蓝图在此刷新头顶icon/品质描边等表现。
> 仅在 InitChestDropItem 成功查到配置并填好数据后调用；配置缺失(提前 return)时不触发。

---

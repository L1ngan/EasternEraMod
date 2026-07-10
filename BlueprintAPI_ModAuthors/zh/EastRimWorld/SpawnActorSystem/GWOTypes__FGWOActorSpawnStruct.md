# `struct` `FGWOActorSpawnStruct`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 单条演员生成配置及其运行时状态（类、数量、几率、距离、重生、替换网格等）

## 蓝图暴露变量

### 属性 `actorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") TSoftClassPtr<AActor> actorClass;` |

**说明:**

> 添加生成演员类。

---

### 属性 `spawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FVector spawnOffset = FVector::ZeroVector;` |

**说明:**

> **spawnOffset** - 从生成点的偏移量。

---

### 属性 `spawnScaleMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0.001")) float spawnScaleMin = 1.f;` |

**说明:**

> - 演员的随机比例范围最小值

---

### 属性 `spawnScaleMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0.001")) float spawnScaleMax = 1.f;` |

**说明:**

> - 演员的随机比例范围最大值。

---

### 属性 `bRandRotateYaw`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotateYaw = true;` |

**说明:**

> - 沿轴的随机旋转。

---

### 属性 `bRandRotatePitch`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotatePitch = false;` |

**说明:**

> 沿轴的随机旋转。

---

### 属性 `bRandRotateRoll`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotateRoll = false;` |

**说明:**

> 沿轴的随机旋转。

---

### 属性 `actorsCountForSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int actorsCountForSpawn = 10;` |

**说明:**

> 生成的演员数量。

---

### 属性 `actorsCountSpawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int actorsCountSpawnOffset = 0;` |

**说明:**

> 生成数量的偏移量。

---

### 属性 `bUseSpawnTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bUseSpawnTime = false;` |

**说明:**

> 使用曲线根据时间决定生成几率。

---

### 属性 `spawnChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0", ClampMax="100"), meta=(EditCondition="!bUseSpawnTime", EditConditionHides)) float spawnChance = 100.f;` |

**说明:**

> 生成几率。每次加载生成列表或重新启动生成器时计算。

---

### 属性 `spawnCurve`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UCurveFloat*` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(EditCondition="bUseSpawnTime", EditConditionHides)) UCurveFloat* spawnCurve = nullptr;` |

**说明:**

> 生成几率曲线。如果选择了根据时间决定生成几率，则使用此曲线。

---

### 属性 `increaseChanceSpawnAfterFailure`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0", ClampMax="100"), meta=(EditCondition="!bUseSpawnTime", EditConditionHides)) float increaseChanceSpawnAfterFailure = 0.f;` |

**说明:**

> Increases the chance of spawn every time the NPC was not spawned due to a small chance of spawn. After spawn, the real value of the chance of spawn is reset to the original ones. Not work with bUseSpawnTime.
> 在下一次尝试中应增加的生成几率值。这样生成几率会不断增加，直到演员生成为止。

---

### 属性 `dontSpawnIfSpawnedInWorld`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int dontSpawnIfSpawnedInWorld = 0;` |

**说明:**

> 如果值大于 0，则如果此类演员已经在世界中生成，它们将不会再生成，即使它们被冻结。

---

### 属性 `dontSpawnIfActiveInWorld`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int dontSpawnIfActiveInWorld = 0;` |

**说明:**

> 如果值大于 0，则如果此类演员已经在世界中处于活动状态，它们将不会再生成。

---

### 属性 `bIsCanBeRespawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bIsCanBeRespawn = true;` |

**说明:**

> 如果希望演员在被销毁后重新生成，请设置此选项。

---

### 属性 `timeToRespawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters") float timeToRespawn = 1800.f;` |

**说明:**

> 重新生成时间。

---

### 属性 `timeToRespawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters") float timeToRespawnOffset = 5.f;` |

**说明:**

> 重新生成时间的偏移量。

---

### 属性 `actorCollisionHandlingMethod`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ESpawnActorCollisionHandlingMethod` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") ESpawnActorCollisionHandlingMethod actorCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;` |

**说明:**

> UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters")
> bool bCheckFloorForSpawn = true;
> UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters")
> bool bCheckNavMeshForSpawn = false;

---

### 属性 `bOverwriteSpawnAndDestroyDistances`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bOverwriteSpawnAndDestroyDistances = true;` |

**说明:**

> 根据列表，重写演员组件中的生成和冻结距离。

---

### 属性 `distanceToSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters", meta=(ClampMin="100")) float distanceToSpawn = 6000.f;` |

**说明:**

> 生成发生的距离。

---

### 属性 `distanceDestroyOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters", meta=(ClampMin="100")) float distanceDestroyOffset = 500.f;` |

**说明:**

> 冻结演员的距离偏移量。

---

### 属性 `distanceCheckType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOAxes](GWOTypes__EGWOAxes.md) |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") EGWOAxes distanceCheckType = EGWOAxes::XYZ;` |

**说明:**

> 用于距离测量的轴数。

---

### 属性 `noSpawnDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") float noSpawnDistance = 1000.f;` |

**说明:**

> 生成不会发生的距离。例如，您的角色在非常接近某类演员的地方生成，为避免演员在如此近的地方生成，可以调整此距离。

---

### 属性 `lifeTimeInBackground`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") float lifeTimeInBackground = 0.f;` |

**说明:**

> 演员的冻结生命时间；在此时间后，关于演员的信息将被销毁。

---

### 属性 `bReplaceStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bReplaceStaticMesh = false;` |

**说明:**

> 如果您希望将演员替换为静态网格实例，请启用此选项。

---

### 属性 `replaceParameters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(EditCondition="bReplaceStaticMesh", EditConditionHides)) FGWOActorReplaceParameters replaceParameters;` |

**说明:**

> 选择用于替换演员的静态网格。

---

### 属性 `bSpawnOnRun`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bSpawnOnRun = false;` |

**说明:**

> UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(EditCondition="bReplaceStaticMesh", EditConditionHides))
> class UStaticMesh* replaceableStaticMesh = nullptr;
> 游戏开始时立即生成。

---

### 属性 `ActorInfoIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") TArray<FName> ActorInfoIDs;` |

**说明:**

> UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters")
> bool bDontSpawnActorAddInstance = false;
> 生成的actor信息

---

### 属性 `ActorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") uint8 ActorType = 0;` |

**说明:**

> 生成的actorType 1 人类 2 召唤物 3 动物

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") uint8 TeamID = 0;` |

**说明:**

> 队伍id

---

### 属性 `BoxLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") FVector BoxLocation = FVector::ZeroVector;` |

**说明:**

> 所在盒子位置

---

### 属性 `IdleRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") int32 IdleRange { 6000 };` |

**说明:**

> 闲逛范围

---

### 属性 `distanceToSpawnSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float distanceToSpawnSquare = 0.f;` |

**说明:**

> 生成距离的平方缓存值，用于加速距离比较

---

### 属性 `distanceToDestroySquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float distanceToDestroySquare = 0.f;` |

**说明:**

> 销毁/冻结距离的平方缓存值，用于加速距离比较

---

### 属性 `noSpawnDistanceSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float noSpawnDistanceSquare = 0.f;` |

**说明:**

> 禁止生成距离的平方缓存值

---

### 属性 `insertBackgroundTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() double insertBackgroundTime = 0.f;` |

**说明:**

> 演员转入后台（冻结）时记录的时间戳

---

### 属性 `uniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int uniqID = -1;` |

**说明:**

> 该生成条目的唯一ID（-1表示未分配）

---

### 属性 `npcValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int npcValue = 0;` |

**说明:**

> 运行时NPC计数/统计值

---

### 属性 `npcWithPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int npcWithPoint = 0;` |

**说明:**

> 运行时记录的与生成点关联的NPC计数

---

### 属性 `spawnLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector spawnLocation = FVector::ZeroVector;` |

**说明:**

> 运行时记录的实际生成位置

---

### 属性 `spawnScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector spawnScale = FVector::ZeroVector;` |

**说明:**

> 运行时记录的实际生成缩放

---

### 属性 `lastPositionBeforeDestroyedIfFar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector lastPositionBeforeDestroyedIfFar = FVector::ZeroVector;` |

**说明:**

> 演员因距离过远被销毁前的最后位置

---

### 属性 `timeKilled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() double timeKilled = 0.f;` |

**说明:**

> 演员被击杀的时间点，用于计算重生倒计时

---

### 属性 `bIsSpawned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bIsSpawned = false;` |

**说明:**

> 运行时标记：该演员当前是否已生成

---

### 属性 `bIsKilled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bIsKilled = false;` |

**说明:**

> 运行时标记：该演员是否已被击杀

---

### 属性 `killedTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() double killedTime = 0.f;` |

**说明:**

> 演员被击杀时记录的时间戳

---

### 属性 `bReadyToSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bReadyToSpawn = false;` |

**说明:**

> 运行时标记：该演员是否已准备好生成

---

### 属性 `spawnedNpcRef`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `AActor*` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(Transient) AActor* spawnedNpcRef = nullptr;` |

**说明:**

> 运行时生成的 NPC 实例（运行时缓存；标 Transient 避免被存档序列化为悬空指针致崩，身份靠 ActorInfoIDs/uniqID）

---

### 属性 `realTimeRespawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float realTimeRespawn = 0.f;` |

**说明:**

> 本次计算得到的实际重生时间

---

### 属性 `bGotChanceToSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bGotChanceToSpawn = false;` |

**说明:**

> 运行时标记：本次几率判定是否通过、获得生成资格

---

### 属性 `realSpawnChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float realSpawnChance = 0.f;` |

**说明:**

> 当前实际生成几率（失败后可按配置递增，生成后重置）

---

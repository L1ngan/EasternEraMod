# `struct` `FGWOActorSpawnStruct`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `actorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<AActor>` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") TSoftClassPtr<AActor> actorClass;` |

**源码注释:**

> 添加生成演员类。

---

### 属性 `spawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FVector spawnOffset = FVector::ZeroVector;` |

**源码注释:**

> **spawnOffset** - 从生成点的偏移量。

---

### 属性 `spawnScaleMin`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0.001")) float spawnScaleMin = 1.f;` |

**源码注释:**

> - 演员的随机比例范围最小值

---

### 属性 `spawnScaleMax`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0.001")) float spawnScaleMax = 1.f;` |

**源码注释:**

> - 演员的随机比例范围最大值。

---

### 属性 `bRandRotateYaw`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotateYaw = true;` |

**源码注释:**

> - 沿轴的随机旋转。

---

### 属性 `bRandRotatePitch`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotatePitch = false;` |

**源码注释:**

> 沿轴的随机旋转。

---

### 属性 `bRandRotateRoll`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bRandRotateRoll = false;` |

**源码注释:**

> 沿轴的随机旋转。

---

### 属性 `actorsCountForSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int actorsCountForSpawn = 10;` |

**源码注释:**

> 生成的演员数量。

---

### 属性 `actorsCountSpawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int actorsCountSpawnOffset = 0;` |

**源码注释:**

> 生成数量的偏移量。

---

### 属性 `bUseSpawnTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bUseSpawnTime = false;` |

**源码注释:**

> 使用曲线根据时间决定生成几率。

---

### 属性 `spawnChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0", ClampMax="100"), meta=(EditCondition="!bUseSpawnTime", EditConditionHides)) float spawnChance = 100.f;` |

**源码注释:**

> 生成几率。每次加载生成列表或重新启动生成器时计算。

---

### 属性 `spawnCurve`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UCurveFloat*` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(EditCondition="bUseSpawnTime", EditConditionHides)) UCurveFloat* spawnCurve = nullptr;` |

**源码注释:**

> 生成几率曲线。如果选择了根据时间决定生成几率，则使用此曲线。

---

### 属性 `increaseChanceSpawnAfterFailure`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0", ClampMax="100"), meta=(EditCondition="!bUseSpawnTime", EditConditionHides)) float increaseChanceSpawnAfterFailure = 0.f;` |

**源码注释:**

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

**源码注释:**

> 如果值大于 0，则如果此类演员已经在世界中生成，它们将不会再生成，即使它们被冻结。

---

### 属性 `dontSpawnIfActiveInWorld`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(ClampMin="0")) int dontSpawnIfActiveInWorld = 0;` |

**源码注释:**

> 如果值大于 0，则如果此类演员已经在世界中处于活动状态，它们将不会再生成。

---

### 属性 `bIsCanBeRespawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bIsCanBeRespawn = true;` |

**源码注释:**

> 如果希望演员在被销毁后重新生成，请设置此选项。

---

### 属性 `timeToRespawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters") float timeToRespawn = 1800.f;` |

**源码注释:**

> 重新生成时间。

---

### 属性 `timeToRespawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters") float timeToRespawnOffset = 5.f;` |

**源码注释:**

> 重新生成时间的偏移量。

---

### 属性 `actorCollisionHandlingMethod`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ESpawnActorCollisionHandlingMethod` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") ESpawnActorCollisionHandlingMethod actorCollisionHandlingMethod = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;` |

**源码注释:**

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

**源码注释:**

> 根据列表，重写演员组件中的生成和冻结距离。

---

### 属性 `distanceToSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters", meta=(ClampMin="100")) float distanceToSpawn = 6000.f;` |

**源码注释:**

> 生成发生的距离。

---

### 属性 `distanceDestroyOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Actor Spawn Parameters", meta=(ClampMin="100")) float distanceDestroyOffset = 500.f;` |

**源码注释:**

> 冻结演员的距离偏移量。

---

### 属性 `distanceCheckType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGWOAxes` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") EGWOAxes distanceCheckType = EGWOAxes::XYZ;` |

**源码注释:**

> 用于距离测量的轴数。

---

### 属性 `noSpawnDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") float noSpawnDistance = 1000.f;` |

**源码注释:**

> 生成不会发生的距离。例如，您的角色在非常接近某类演员的地方生成，为避免演员在如此近的地方生成，可以调整此距离。

---

### 属性 `lifeTimeInBackground`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") float lifeTimeInBackground = 0.f;` |

**源码注释:**

> 演员的冻结生命时间；在此时间后，关于演员的信息将被销毁。

---

### 属性 `bReplaceStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bReplaceStaticMesh = false;` |

**源码注释:**

> 如果您希望将演员替换为静态网格实例，请启用此选项。

---

### 属性 `replaceParameters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters", meta=(EditCondition="bReplaceStaticMesh", EditConditionHides)) FGWOActorReplaceParameters replaceParameters;` |

**源码注释:**

> 选择用于替换演员的静态网格。

---

### 属性 `bSpawnOnRun`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") bool bSpawnOnRun = false;` |

**源码注释:**

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

**源码注释:**

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

**源码注释:**

> 生成的actorType 1 人类 2 召唤物 3 动物

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") uint8 TeamID = 0;` |

**源码注释:**

> 队伍id

---

### 属性 `BoxLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") FVector BoxLocation = FVector::ZeroVector;` |

**源码注释:**

> 所在盒子位置

---

### 属性 `IdleRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Actor Spawn Parameters") int32 IdleRange { 6000 };` |

**源码注释:**

> 闲逛范围

---

### 属性 `distanceToSpawnSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float distanceToSpawnSquare = 0.f;` |

---

### 属性 `distanceToDestroySquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float distanceToDestroySquare = 0.f;` |

---

### 属性 `noSpawnDistanceSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float noSpawnDistanceSquare = 0.f;` |

---

### 属性 `insertBackgroundTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() double insertBackgroundTime = 0.f;` |

---

### 属性 `uniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int uniqID = -1;` |

---

### 属性 `npcValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int npcValue = 0;` |

---

### 属性 `npcWithPoint`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int npcWithPoint = 0;` |

---

### 属性 `spawnLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector spawnLocation = FVector::ZeroVector;` |

---

### 属性 `spawnScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector spawnScale = FVector::ZeroVector;` |

---

### 属性 `lastPositionBeforeDestroyedIfFar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector lastPositionBeforeDestroyedIfFar = FVector::ZeroVector;` |

---

### 属性 `timeKilled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() double timeKilled = 0.f;` |

---

### 属性 `bIsSpawned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bIsSpawned = false;` |

---

### 属性 `bIsKilled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bIsKilled = false;` |

---

### 属性 `killedTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() double killedTime = 0.f;` |

---

### 属性 `bReadyToSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bReadyToSpawn = false;` |

---

### 属性 `spawnedNpcRef`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `AActor*` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() AActor* spawnedNpcRef = nullptr;` |

---

### 属性 `realTimeRespawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float realTimeRespawn = 0.f;` |

---

### 属性 `bGotChanceToSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bGotChanceToSpawn = false;` |

---

### 属性 `realSpawnChance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float realSpawnChance = 0.f;` |

---

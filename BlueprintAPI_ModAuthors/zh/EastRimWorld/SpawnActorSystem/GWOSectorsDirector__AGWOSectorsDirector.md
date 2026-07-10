# `class` `AGWOSectorsDirector`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOSectorsDirector.h`

---

## 功能说明（来自头文件注释）

> GWO扇区导演Actor，管理扇区的创建/激活/缓存以及Actor的冻结与解冻，实现基于扇区的全局世界优化，并通过Savior接口参与存档

## 蓝图暴露变量

### 属性 `backgroundInstanceMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class UInstancedStaticMeshComponent* backgroundInstanceMeshComponent;` |

**说明:**

> ************************************************************************
> Component
> ************************************************************************

---

### 属性 `SceneComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class USceneComponent *` |
| 反射说明符 | BlueprintReadWrite, Category="Component" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Component") class USceneComponent * SceneComponent;` |

**说明:**

> 根场景组件

---

### 属性 `bActivateDirector`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.01f,Tooltip = "激活导演功能。可以在测试中禁用它，这将停用基于扇区的优化中的导演干预。")) bool bActivateDirector = true;` |

**说明:**

> 激活导演功能；可以在测试中禁用它，这将停用基于扇区的优化中的导演干预

---

### 属性 `workerRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.01f,Tooltip = "扇区搜索功能的触发频率，包括新扇区的创建以及向生成器传递信息的频率。")) float workerRate = 0.5f;` |

**说明:**

> 扇区搜索功能的触发频率（秒），包括新扇区的创建以及向生成器传递信息的频率

---

### 属性 `clearWorkRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 0.01f,Tooltip = "搜索无关演员 ID 的功能的触发频率，并将此信息传递给生成器，以便生成器知道演员已被销毁并可以重新生成。我不建议设置过小的值。")) float clearWorkRate = 60.f;` |

**说明:**

> 搜索无关Actor唯一ID的触发频率（秒），并将结果传递给生成器以便重新生成已销毁的Actor；不建议设置过小的值

---

### 属性 `sectorSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 200.f,Tooltip = "扇区的大小。请注意，如果您将演员的生成距离设置为 2000，那么您应增加扇区的大小，以确保其与相邻块的大小包含在演员的生成区域内。")) float sectorSize = 6000.f;` |

**说明:**

> 扇区的大小；若Actor的生成距离较大，应增大扇区尺寸以确保生成区域被相邻块覆盖

---

### 属性 `maxCacheSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 1,Tooltip = "用于缓存的扇区数量。例如，扇区的搜索顺序是：首先在活跃扇区中搜索信息，然后在缓存中，最后在所有其他扇区中搜索，排除活跃和缓存扇区。")) int maxCacheSize = 1000;` |

**说明:**

> 用于缓存的扇区数量；扇区搜索顺序为：先活跃扇区，再缓存扇区，最后其余所有扇区

---

### 属性 `bUseDefrostSpawnQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta = (Tooltip = "- 启用生成队列。任何生成操作都不会在一帧内完成，而是使用队列。可以使用 ")) bool bUseDefrostSpawnQueue = true;` |

**说明:**

> 启用生成队列；生成操作不会在一帧内完成，而是通过队列分帧处理

---

### 属性 `unfreezeActorPerFrame`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta = (ClampMin = 1), meta = (EditCondition="bUseDefrostSpawnQueue", EditConditionHides,Tooltip = "每帧需要生成的演员数量")) int unfreezeActorPerFrame = 1;` |

**说明:**

> 每帧解冻生成的Actor数量

---

### 属性 `skipFrameBeforeNextSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta = (ClampMin = 0), meta = (EditCondition="bUseDefrostSpawnQueue", EditConditionHides,Tooltip = "上一次生成后需要跳过的帧数。这个设置也可能影响生成并减少卡顿。")) int skipFrameBeforeNextSpawn = 2;` |

**说明:**

> 上一次生成后需要跳过的帧数，可影响生成节奏并减少卡顿

---

### 属性 `bRemoveNonUsedSectors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters" ,meta = (Tooltip = "如果启用，系统将删除不再使用的扇区。我建议启用此选项。")) bool bRemoveNonUsedSectors = true;` |

**说明:**

> I recommend checking this option for your specific project. If the FPS is higher with it, then turn it on.

---

### 属性 `sectorPositionTolerance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta = (Tooltip = "用于比较扇区坐标的误差容忍度。通常无需更改，但在非常大的地图上出现误差时，可能需要增加此值。")) float sectorPositionTolerance = 0.5f;` |

**说明:**

> I recommend value 0.5f. This is an infelicity when comparing the position of the sector. Perhaps this value needs to be increased on huge worlds for use in the formula.

---

### 属性 `replaceMeshRule`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UDataTable*` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters",meta = (Tooltip = "用于将演员替换为静态网格的规则。如果需要指定特殊规则，请将所需的静态网格添加到表中。如果未找到规则，则网格将使用默认规则。")) UDataTable* replaceMeshRule = nullptr;` |

**说明:**

> Actor替换为静态网格的规则表；需要特殊规则时将对应静态网格加入表中，未找到规则时使用默认规则

---

### 属性 `bDebugSectorsVisual`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSectorsVisual = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugSectorsTelemetry`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSectorsTelemetry = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugIsFoundInActive`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsFoundInActive = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugIsFoundInCache`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsFoundInCache = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugIsFoundInDeepSearch`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsFoundInDeepSearch = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugIsCreatePlayerNewSector`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsCreatePlayerNewSector = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugIsCreateActorNewSector`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsCreateActorNewSector = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugIsCreateSpawnerNewSector`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugIsCreateSpawnerNewSector = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugCheckDuplicate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugCheckDuplicate = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugFoundUnusedUniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugFoundUnusedUniqID = false;` |

**说明:**

> 调试开关：输出查找未使用唯一ID的调试信息

---

### 属性 `bDebugSaveState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugSaveState = false;` |

**说明:**

> 调试开关：输出存档状态的调试信息

---

### 属性 `bDebugRemoveActorInBackground`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugRemoveActorInBackground = false;` |

**说明:**

> 调试开关：输出后台移除Actor的调试信息

---

### 属性 `bDebugDrawSectorID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugDrawSectorID = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `bDebugBackgroundActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bDebugBackgroundActors = false;` |

**说明:**

> It reduces fps. Use for development only.

---

### 属性 `generalAccess`

| 项目 | 内容 |
|------|------|
| C++ 类型 | class [AGWOGeneralAccess](GWOGeneralAccess__AGWOGeneralAccess.md) * |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Variables" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Global World Optimization | Variables") class AGWOGeneralAccess * generalAccess = nullptr;` |

**说明:**

> GWO全局访问器Actor的引用（AGWOGeneralAccess）

---

### 属性 `GameModeBase`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [AERW_GameModeBase](../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) AERW_GameModeBase* GameModeBase { nullptr };` |

**说明:**

> 缓存的游戏模式引用（AERW_GameModeBase）

---

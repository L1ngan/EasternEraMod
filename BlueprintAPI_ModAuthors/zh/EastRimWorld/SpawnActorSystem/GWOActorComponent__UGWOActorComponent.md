# `class` `UGWOActorComponent`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOActorComponent.h`

---

## 功能说明（来自头文件注释）

> 全局世界优化(GWO)组件：按与相机/玩家的距离冻结Actor、替换静态网格并优化Tick间隔（支持存档）

## 蓝图暴露变量

### 属性 `OnBeforeFreezingEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FBeforeFreezingEvent` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FBeforeFreezingEvent OnBeforeFreezingEvent;` |

**说明:**

> Delegates

---

### 属性 `OnAfterDefrosting`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAfterDefrosting` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FAfterDefrosting OnAfterDefrosting;` |

**说明:**

> 解冻完成后广播的委托

---

### 属性 `OnOutCameraFOV`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOutCameraFOV` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOutCameraFOV OnOutCameraFOV;` |

**说明:**

> 离开相机视野时广播的委托

---

### 属性 `OnInCameraFOV`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInCameraFOV` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FInCameraFOV OnInCameraFOV;` |

**说明:**

> 进入相机视野时广播的委托

---

### 属性 `bShowErrorMessages`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bShowErrorMessages = false;` |

**说明:**

> 是否显示调试错误信息

---

### 属性 `distanceCamera`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 100.f),SaveGame) float distanceCamera = 1000.f;` |

**说明:**

> 相机距离优化阈值（厘米，最小100）

---

### 属性 `bIsActivate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsActivate = true;` |

**说明:**

> Set Enable Global World Optimization Component.

---

### 属性 `bIsOptimizeAllActorComponentsTickInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsOptimizeAllActorComponentsTickInterval = true;` |

**说明:**

> 是否优化Actor所有组件的Tick间隔

---

### 属性 `bIsDisableTickIfBehindCameraFOV`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsDisableTickIfBehindCameraFOV = false;` |

**说明:**

> 在相机视野外时是否禁用Tick

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta=(ClampMin="100"),SaveGame); float spawnDistance = 2000.f;` |

**说明:**

> Will be overwritten if spawned from a spawner.

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta=(ClampMin="100"),SaveGame); float distanceDestroyOffset = 500.f;` |

**说明:**

> Will be overwritten if spawned from a spawner.

---

### 属性 `noSpawnDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta=(ClampMin="0"),SaveGame) float noSpawnDistance = 500.f;` |

**说明:**

> Will be overwritten if spawned from a spawner.

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta=(ClampMin="0"),SaveGame); float lifeTimeInBackground = 0.f;` |

---

### 属性 `uniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadOnly, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Global World Optimization | Parameters",SaveGame) int uniqID = -1;` |

**说明:**

> GWO分配的唯一ID（-1表示未分配）

---

### 属性 `distanceCheckType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOAxes](GWOTypes__EGWOAxes.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) EGWOAxes distanceCheckType = EGWOAxes::XYZ;` |

**说明:**

> Will be overwritten if spawned from a spawner.

---

### 属性 `bReplaceStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bReplaceStaticMesh = false;` |

**说明:**

> 是否启用静态网格替换优化（配合replaceParameters生效）

---

### 属性 `replaceParameters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta=(EditCondition="bReplaceStaticMesh", EditConditionHides),SaveGame) FGWOActorReplaceParameters replaceParameters;` |

**说明:**

> 静态网格替换参数（bReplaceStaticMesh为真时生效）

---

### 属性 `ActorInfoID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) FName ActorInfoID;` |

**说明:**

> 生成的actor信息

---

### 属性 `ActorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) uint8 ActorType;` |

**说明:**

> 生成的actorType

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) uint8 TeamID;` |

**说明:**

> 团队id

---

### 属性 `bGWOSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bGWOSpawn = false;` |

**说明:**

> 是否由GWO生成器生成

---

### 属性 `ConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) FName ConfigID;` |

**说明:**

> configID 用于标识是哪个配置生成

---

## 蓝图暴露函数

### 函数 `GetLastFrostTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Global World Optimization" |
| 返回类型 | `double` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Global World Optimization") double GetLastFrostTime() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取上次冻结的时间

---

### 函数 `RegisterActorInGWO`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization") void RegisterActorInGWO();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 将该Actor注册到GWO全局管理器

---

### 函数 `UnregisterActorInGWO`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization") void UnregisterActorInGWO();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 从GWO全局管理器注销该Actor

---

### 函数 `InitializeActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Director PRO Parameters" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Director PRO Parameters") void InitializeActor();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化该Actor的GWO优化参数

---

### 函数 `OnOwnerDeathStart`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnOwnerDeathStart();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 处理所属Actor开始死亡时的GWO逻辑

---

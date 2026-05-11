# `class` `UGWOActorComponent`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOActorComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnBeforeFreezingEvent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FBeforeFreezingEvent` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FBeforeFreezingEvent OnBeforeFreezingEvent;` |

**源码注释:**

> Delegates

---

### 属性 `OnAfterDefrosting`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAfterDefrosting` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FAfterDefrosting OnAfterDefrosting;` |

---

### 属性 `OnOutCameraFOV`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOutCameraFOV` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOutCameraFOV OnOutCameraFOV;` |

---

### 属性 `OnInCameraFOV`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInCameraFOV` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FInCameraFOV OnInCameraFOV;` |

---

### 属性 `bShowErrorMessages`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Debug" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Debug") bool bShowErrorMessages = false;` |

---

### 属性 `distanceCamera`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta =(ClampMin = 100.f),SaveGame) float distanceCamera = 1000.f;` |

---

### 属性 `bIsActivate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsActivate = true;` |

**源码注释:**

> Set Enable Global World Optimization Component.

---

### 属性 `bIsOptimizeAllActorComponentsTickInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsOptimizeAllActorComponentsTickInterval = true;` |

---

### 属性 `bIsDisableTickIfBehindCameraFOV`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bIsDisableTickIfBehindCameraFOV = false;` |

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta=(ClampMin="100"),SaveGame); float spawnDistance = 2000.f;` |

**源码注释:**

> Will be overwritten if spawned from a spawner.

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Global World Optimization | Parameters", meta=(ClampMin="100"),SaveGame); float distanceDestroyOffset = 500.f;` |

**源码注释:**

> Will be overwritten if spawned from a spawner.

---

### 属性 `noSpawnDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta=(ClampMin="0"),SaveGame) float noSpawnDistance = 500.f;` |

**源码注释:**

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

---

### 属性 `distanceCheckType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGWOAxes` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) EGWOAxes distanceCheckType = EGWOAxes::XYZ;` |

**源码注释:**

> Will be overwritten if spawned from a spawner.

---

### 属性 `bReplaceStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters",SaveGame) bool bReplaceStaticMesh = false;` |

---

### 属性 `replaceParameters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization | Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Global World Optimization | Parameters", meta=(EditCondition="bReplaceStaticMesh", EditConditionHides),SaveGame) FGWOActorReplaceParameters replaceParameters;` |

---

### 属性 `ActorInfoID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) FName ActorInfoID;` |

**源码注释:**

> 生成的actor信息

---

### 属性 `ActorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) uint8 ActorType;` |

**源码注释:**

> 生成的actorType

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | BlueprintReadWrite, Category="Global World Optimization" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Global World Optimization",SaveGame) uint8 TeamID;` |

**源码注释:**

> 团队id

---

### 属性 `bGWOSpawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) bool bGWOSpawn = false;` |

---

### 属性 `ConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite,SaveGame) FName ConfigID;` |

**源码注释:**

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

---

### 函数 `RegisterActorInGWO`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization") void RegisterActorInGWO();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `UnregisterActorInGWO`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Global World Optimization" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Global World Optimization") void UnregisterActorInGWO();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `InitializeActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Director PRO Parameters" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Director PRO Parameters") void InitializeActor();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OnOwnerDeathStart`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnOwnerDeathStart();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

# `class` `AWorldSectBattleChestActor`

**源码头文件:** `EastRimWorld/Actor/WorldSectBattleChestActor.h`

---

## 功能说明（来自头文件注释）

> Sect battle chest. Uses the FightPawn interactable flow and notifies the manager when opened.

## 蓝图暴露变量

### 属性 `OpeningProgressWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UWidgetComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Chest") TObjectPtr<UWidgetComponent> OpeningProgressWidget;` |

**说明:**

> 显示开箱进度的Widget组件

---

### 属性 `ChestIdleEffectComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UNiagaraComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "WorldSectBattle|Chest") TObjectPtr<UNiagaraComponent> ChestIdleEffectComponent;` |

**说明:**

> 宝箱待机特效的Niagara组件

---

### 属性 `OpeningProgressWidgetClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSubclassOf<UUserWidget>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest") TSubclassOf<UUserWidget> OpeningProgressWidgetClass;` |

**说明:**

> 开箱进度Widget使用的UserWidget类

---

### 属性 `OpeningProgressBarName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest") FName OpeningProgressBarName = TEXT("ProgressBar");` |

**说明:**

> 开箱进度Widget中进度条控件的名称，默认"ProgressBar"

---

### 属性 `OpeningDurationSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest", meta = (ClampMin = "0.0")) float OpeningDurationSeconds = 2.f;` |

**说明:**

> 开箱所需的持续时间（秒），默认2

---

### 属性 `NormalChestMeshes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<UStaticMesh>>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest|Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest|Mesh") TArray<TObjectPtr<UStaticMesh>> NormalChestMeshes;` |

**说明:**

> 普通宝箱可用模型数组：InitWorldSectBattleChest(Normal) 时在这里随机一个设置到 StaticMeshComponent。

---

### 属性 `SpecialChestMeshes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<TObjectPtr<UStaticMesh>>` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|Chest|Mesh" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|Chest|Mesh") TArray<TObjectPtr<UStaticMesh>> SpecialChestMeshes;` |

**说明:**

> 特殊宝箱可用模型数组：InitWorldSectBattleChest(Special) 时在这里随机一个设置到 StaticMeshComponent。

---

### 属性 `DropActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSubclassOf<[AWorldSectBattleChestDropActor](WorldSectBattleChestDropActor__AWorldSectBattleChestDropActor.md)> |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop") TSubclassOf<AWorldSectBattleChestDropActor> DropActorClass;` |

**说明:**

> 开箱后生成的掉落物Actor类

---

### 属性 `NormalDropCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0")) int32 NormalDropCount = 3;` |

**说明:**

> 普通宝箱的掉落物数量，默认3

---

### 属性 `SpecialDropCount`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="WorldSectBattle|ChestDrop" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "WorldSectBattle|ChestDrop", meta = (ClampMin = "0")) int32 SpecialDropCount = 5;` |

**说明:**

> 特殊宝箱的掉落物数量，默认5

---

### 属性 `ChestType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EWorldSectBattleChestType](WorldSectBattleChestActor__EWorldSectBattleChestType.md) |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") EWorldSectBattleChestType ChestType = EWorldSectBattleChestType::None;` |

**说明:**

> 宝箱类型（普通/特殊）

---

### 属性 `bOpened`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") bool bOpened = false;` |

**说明:**

> 宝箱是否已被打开

---

### 属性 `bOpening`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") bool bOpening = false;` |

**说明:**

> 宝箱是否正在开启过程中

---

### 属性 `bTriggerWealthEventOnOpened`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") bool bTriggerWealthEventOnOpened = true;` |

**说明:**

> 开箱后是否触发财富事件，默认true

---

### 属性 `DropConfigKey`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") FName DropConfigKey = NAME_None;` |

**说明:**

> 掉落配置的键名

---

### 属性 `OpeningElapsedSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Chest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Chest") float OpeningElapsedSeconds = 0.f;` |

**说明:**

> 当前开箱已经过的时间（秒）

---

## 蓝图暴露函数

### 函数 `InitWorldSectBattleChest`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Chest" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InChestType` | [EWorldSectBattleChestType](WorldSectBattleChestActor__EWorldSectBattleChestType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void InitWorldSectBattleChest(EWorldSectBattleChestType InChestType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 初始化门派战宝箱，设置宝箱类型

---

### 函数 `GetChestType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| 返回类型 | [EWorldSectBattleChestType](WorldSectBattleChestActor__EWorldSectBattleChestType.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") EWorldSectBattleChestType GetChestType() const { return ChestType; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取宝箱类型

---

### 函数 `IsOpened`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool IsOpened() const { return bOpened; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 返回宝箱是否已被打开

---

### 函数 `IsOpening`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool IsOpening() const { return bOpening; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 返回宝箱是否正在开启过程中

---

### 函数 `SetTriggerWealthEventOnOpened`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Chest" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bInTrigger` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void SetTriggerWealthEventOnOpened(bool bInTrigger) { bTriggerWealthEventOnOpened = bInTrigger; }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置开箱后是否触发财富事件

---

### 函数 `ShouldTriggerWealthEventOnOpened`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") bool ShouldTriggerWealthEventOnOpened() const { return bTriggerWealthEventOnOpened; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 返回开箱后是否会触发财富事件

---

### 函数 `SetDropConfigKey`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|Chest" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InDropConfigKey` | `FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|Chest") void SetDropConfigKey(FName InDropConfigKey) { DropConfigKey = InDropConfigKey; }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置掉落配置键名

---

### 函数 `GetDropConfigKey`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldSectBattle|Chest" |
| 返回类型 | `FName` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldSectBattle|Chest") FName GetDropConfigKey() const { return DropConfigKey; }`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取掉落配置键名

---

### 函数 `SpawnChestDrops`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldSectBattle|ChestDrop" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "WorldSectBattle|ChestDrop") void SpawnChestDrops();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成宝箱的掉落物

---

### 函数 `K2_OnSectBattleChestOpened`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent, Category="WorldSectBattle|Chest" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Interactor` | `AActor*` |
| `OpenedChestType` | [EWorldSectBattleChestType](WorldSectBattleChestActor__EWorldSectBattleChestType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent, Category = "WorldSectBattle|Chest", meta = (DisplayName = "OnSectBattleChestOpened")) void K2_OnSectBattleChestOpened(AActor* Interactor, EWorldSectBattleChestType OpenedChestType);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「OnSectBattleChestOpened」。

**说明:**

> Blueprint reads loot by ChestType and plays open feedback here.

---

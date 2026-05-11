# `class` `UCollectItemInstance`

**源码头文件：** `EastRimWorld/Inventory/CollectItemInstance.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `GrowSpeed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float GrowSpeed = {0.f};` |

**源码注释：**

> 生长速度   生长温度效率X土壤效率 = 生长速度

---

### 属性 `TotalGrowTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float TotalGrowTime = {0.f};` |

**源码注释：**

> 总生长时间 只会在生长阶段计时

---

### 属性 `TotalHarvestTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float TotalHarvestTime = {0.f};` |

**源码注释：**

> 总收成时间 如果会结果

---

### 属性 `CurGrowTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurGrowTime = {0.f};` |

**源码注释：**

> 总生长时间 只会在生长阶段计时

---

### 属性 `CurHarvestTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurHarvestTime = {0.f};` |

**源码注释：**

> 总收成时间 如果会结果

---

### 属性 `CurStageGrowTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurStageGrowTime = {0.f};` |

**源码注释：**

> 阶段生长时间

---

### 属性 `CurGrowStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGrowStage` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) FGrowStage CurGrowStage;` |

**源码注释：**

> 当前阶段的信息

---

### 属性 `CurHealth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float CurHealth = 0.0f;` |

**源码注释：**

> 当前健康值

---

### 属性 `SoilEfficiency`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) float SoilEfficiency = 1.f;` |

**源码注释：**

> 土壤效率

---

### 属性 `bSuspendGrow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) bool bSuspendGrow = false;` |

**源码注释：**

> 暂停生长

---

### 属性 `CurExplorationTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) int32 CurExplorationTime;` |

**源码注释：**

> 当前被探索的次数

---

## 蓝图暴露函数

### 函数 `IsHaveGrowStage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InStage` | `const EGrowStageType&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) bool IsHaveGrowStage(const EGrowStageType& InStage);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 是否有果实成熟阶段

---

### 函数 `CheckCanGrow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual bool CheckCanGrow();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查是否可以生长

---

### 函数 `UpdateCollectItemStage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void UpdateCollectItemStage();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新采集物的生长阶段 (注意线程安全 此方法会在子线程中运行)

---

### 函数 `SetGrowStage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewGrowStage` | `EGrowStageType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool SetGrowStage(EGrowStageType NewGrowStage);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置新的阶段

---

### 函数 `GetCollectInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `FCollectItem` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) FCollectItem GetCollectInfo();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取采集物信息

---

### 函数 `GetHealthPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetHealthPercent();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取生命值百分比

---

### 函数 `GetCurGrowPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurGrowPercent();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前生长百分比

---

### 函数 `GetCurCollectPercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurCollectPercent();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前收成进度 如果会结果

---

### 函数 `GetCurSoilEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetCurSoilEfficiency();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前的土壤效率

---

### 函数 `GetCurWeatherEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) virtual float GetCurWeatherEfficiency();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前的天气效率

---

### 函数 `GetCurLightEfficiency`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) float GetCurLightEfficiency();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前的光照效率

---

### 函数 `GetAllOutput`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FOutputInformation>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FOutputInformation> GetAllOutput();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取此类型的所有的产出

---

### 函数 `GetCurStageOutput`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<FOutputInformation>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FOutputInformation> GetCurStageOutput();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取此类型的当前阶段产出

---

### 函数 `CollectItemRegrow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NextGorGrowStage` | `EGrowStageType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) virtual void CollectItemRegrow(EGrowStageType NextGorGrowStage);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 重生

---

### 函数 `SetSuspendGrow`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bSuspend` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetSuspendGrow(bool bSuspend);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 暂停生长

---

### 函数 `OneTimeExploration`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Outputs` | `TMap<FName , FAllTypeItemDrop>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OneTimeExploration(TMap<FName , FAllTypeItemDrop>& Outputs);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 探索一次产出

---

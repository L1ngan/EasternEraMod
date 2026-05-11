# `class` `UWorldPlaceSpecialEffectSubsystem`

**源码头文件：** `EastRimWorld/WorldSystem/WorldPlaceSpecialEffectSubsystem.h`

---

## 功能说明（来自头文件注释）

> 管理各地点的特殊效果（全局效果）：每个 AWorldPlace 独立数值，配置在 FWorldPlaceInfo，拥有效果存档、数值读档后重算。

## 蓝图暴露函数

### 函数 `GetInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="WorldPlaceSpecialEffect" |
| 返回类型 | `UWorldPlaceSpecialEffectSubsystem*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure, Category = "WorldPlaceSpecialEffect") static UWorldPlaceSpecialEffectSubsystem* GetInstance(UObject* WorldContextObject);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `RecalculatePlaceEffects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldPlaceSpecialEffect" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | `AWorldPlace*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "WorldPlaceSpecialEffect") void RecalculatePlaceEffects(AWorldPlace* WorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 进入地点时调用（AWorldPlace::EnterWorldPlace），将当前拥有效果全部应用到缓存并施加 Buff

---

### 函数 `ClearPlaceEffectCache`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldPlaceSpecialEffect" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | `AWorldPlace*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "WorldPlaceSpecialEffect") void ClearPlaceEffectCache(AWorldPlace* WorldPlace);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 退出地点时调用（AWorldPlace::ExitWorldPlace），清空该地点的效果数值缓存

---

### 函数 `ApplyEffect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldPlaceSpecialEffect" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | `AWorldPlace*` |
| `EffectId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "WorldPlaceSpecialEffect") void ApplyEffect(AWorldPlace* WorldPlace, FName EffectId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 应用单个效果：将该效果的贡献加入缓存；在给地点增加效果时调用。若效果已在列表中则只更新缓存。

---

### 函数 `RemoveEffect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="WorldPlaceSpecialEffect" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | `AWorldPlace*` |
| `EffectId` | `FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "WorldPlaceSpecialEffect") void RemoveEffect(AWorldPlace* WorldPlace, FName EffectId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除单个效果：从缓存减去该效果贡献，并从拥有效果列表中移除

---

### 函数 `GetEffectValue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldPlaceSpecialEffect" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | `AWorldPlace*` |
| `EffectType` | `EWorldPlaceSpecialEffectType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldPlaceSpecialEffect") float GetEffectValue(AWorldPlace* WorldPlace, EWorldPlaceSpecialEffectType EffectType) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取指定地点、指定效果类型的当前汇总数值

---

### 函数 `GetFactionGlobalBuffIds`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="WorldPlaceSpecialEffect" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldPlace` | `AWorldPlace*` |
| `OutBuffIds` | `TArray<FName>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "WorldPlaceSpecialEffect") void GetFactionGlobalBuffIds(AWorldPlace* WorldPlace, TArray<FName>& OutBuffIds) const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取该地点「添加阵营全局 Buff」类型效果配置的 Buff ID 列表（用于实际施加 Buff）

---

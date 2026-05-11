# `class` `AAbilityProjectileEmitterBase`

**源码头文件：** `EastRimWorld/AbilitySystem/Projectile/AbilityProjectileEmitterBase.h`

---

## 功能说明（来自头文件注释）

> 发射器

## 蓝图暴露变量

### 属性 `ProjectileStruct`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FProjectileStruct` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true)) FProjectileStruct ProjectileStruct;` |

**源码注释：**

> 发射器的配置

---

### 属性 `ProjectileSpecHandles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,meta=(ExposeOnSpawn = true)) TMap<ETargetClassType,FAllGameplayEffectSpecHandles> ProjectileSpecHandles;` |

**源码注释：**

> 投射物的效果

---

### 属性 `MainAttackTarget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<AActor> MainAttackTarget;` |

**源码注释：**

> 主要的攻击目标

---

## 蓝图暴露函数

### 函数 `GetMultipleTargets`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TArray<AActor*>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetNumber` | `int` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AActor*> GetMultipleTargets(int TargetNumber);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取多个目标

---

### 函数 `AbilityProjectileEmitterEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AbilityProjectileEmitterEnd();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `K2_AbilityProjectileEmitterEnd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,meta=(DisplayName="AbilityProjectileEmitterEnd")) void K2_AbilityProjectileEmitterEnd();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「AbilityProjectileEmitterEnd」。

---

### 函数 `InitProjectileEmitter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InTransform` | `const FTransform &` |
| `InProjectileStruct` | `const FProjectileStruct &` |
| `InProjectileSpecHandles` | const TMap<ETargetClassType,[FAllGameplayEffectSpecHandles](AbilityProjectileEmitterBase__FAllGameplayEffectSpecHandles.md)> & |
| `nullptr` | `AActor * InMainAttackTarget =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitProjectileEmitter(const FTransform & InTransform,const FProjectileStruct & InProjectileStruct,const TMap<ETargetClassType,FAllGameplayEffectSpecHandles> & InProjectileSpecHandles,AActor * InMainAttackTarget = nullptr);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 初始化发射器

---

### 函数 `EmitterStartLaunch`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EmitterStartLaunch();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `K2_EmitterStartLaunch`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent,meta=(DisplayName="EmitterStartLaunch")) void K2_EmitterStartLaunch();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。 节点显示名可能为「EmitterStartLaunch」。

---

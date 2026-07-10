# `class` `UFightPawnInjuryComponent`

**源码头文件:** `EastRimWorld/Framework/FightPawnComponents/FightPawnInjuryComponent.h`

---

## 功能说明（来自头文件注释）

> FightPawn伤势组件：按部位受伤并应用GE，处理自愈/恶化、治疗与药品消耗、疤痕形成与移除、中暑/失温全身伤势及相关查询与广播。

## 蓝图暴露变量

### 属性 `OnRemoveInjuryDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_RemoveInjuryBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_RemoveInjuryBuffDelegate OnRemoveInjuryDelegate;` |

**说明:**

> 移除伤势事件（携带伤势配置、器官ID、伤势实例GUID）。

---

### 属性 `OnAddInjuryDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_AddInjuryBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_AddInjuryBuffDelegate OnAddInjuryDelegate;` |

**说明:**

> 添加伤势事件（携带伤势配置、器官ID、伤势实例GUID）。

---

### 属性 `OnUpdateInjuryDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_UpdateInjuryBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_UpdateInjuryBuffDelegate OnUpdateInjuryDelegate;` |

**说明:**

> 伤势状态更新事件。

---

### 属性 `OnStartTreatDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_StartTreatDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_StartTreatDelegate OnStartTreatDelegate;` |

**说明:**

> 开始治疗事件（携带伤势配置与器官ID）。

---

### 属性 `OnFinishTreatDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFP_FinishTreatDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFP_FinishTreatDelegate OnFinishTreatDelegate;` |

**说明:**

> 治疗完成事件（携带伤势配置与器官ID）。

---

### 属性 `CurTreatNeedMedicines`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName, int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName, int32> CurTreatNeedMedicines;` |

**说明:**

> 当前治疗所需的药品及数量（药品ID→数量）。

---

### 属性 `CurrentTreatInjuryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CurrentTreatInjuryId;` |

**说明:**

> 当前正在治疗的伤势ID。

---

### 属性 `CurInjuryEffectArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 反射说明符 | BlueprintReadWrite, Category="FightPawn|Injury" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> CurInjuryEffectArr;` |

**说明:**

> 当前激活的伤势列表

---

## 蓝图暴露函数

### 函数 `AddInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddInjuryConfig` | const [FInjuryEffectConfig](../../Struct/CharacterStruct__FInjuryEffectConfig.md)& |
| `OrganID` | `FName` |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool AddInjury(const FInjuryEffectConfig& AddInjuryConfig, FName OrganID, EBodyOrganType OrganType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按伤势配置添加一条伤势到指定器官（器官ID与器官类型），返回是否添加成功。

---

### 函数 `AddInjuryByOrganType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryID` | `FName` |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool AddInjuryByOrganType(FName InjuryID, EBodyOrganType OrganType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按伤势ID与器官类型添加伤势，返回是否添加成功。

---

### 函数 `ActiveInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryEffectInstance` | [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") void ActiveInjury(FInjuryEffectInstance& InjuryEffectInstance);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 激活指定的伤势实例并应用其伤势效果。

---

### 函数 `InjuryCanAdd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddInjuryConfig` | const [FInjuryEffectConfig](../../Struct/CharacterStruct__FInjuryEffectConfig.md)& |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool InjuryCanAdd(const FInjuryEffectConfig& AddInjuryConfig, EBodyOrganType OrganType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查指定伤势配置能否添加到指定器官类型上。

---

### 函数 `CheckHaveInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BuffID` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool CheckHaveInjury(const FName& BuffID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查当前是否存在指定Buff ID的伤势。

---

### 函数 `BroadcastUpdateInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") void BroadcastUpdateInjury();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 广播伤势更新事件（OnUpdateInjuryDelegate）。

---

### 函数 `TreatInjuries`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Doctor` | `AActor*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool TreatInjuries(AActor* Doctor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 治疗伤势（Doctor 可以是另一个 FightPawn / NPC）

---

### 函数 `ReMoveScar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool ReMoveScar(FGuid InjuryInstanceID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除指定GUID的疤痕，返回是否移除成功。

---

### 函数 `ReMoveScarUseMedicines`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |
| `InventoryManagerComponent` | [UInventoryManagerComponent](../../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") bool ReMoveScarUseMedicines(FGuid InjuryInstanceID, UInventoryManagerComponent* InventoryManagerComponent);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 使用指定库存中的药品移除指定GUID的疤痕，返回是否成功。

---

### 函数 `CheckIsHaveNotTreatedInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="FightPawn|Injury" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "FightPawn|Injury") bool CheckIsHaveNotTreatedInjury();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 检查是否存在尚未治疗的伤势。

---

### 函数 `GetRecoverWorseTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") int32 GetRecoverWorseTime(FGuid InjuryInstanceID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定伤势实例（按GUID）的恢复/恶化时间。

---

### 函数 `CalRecoverWorsePercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") float CalRecoverWorsePercent(FGuid InjuryInstanceID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算指定伤势实例（按GUID）的恢复/恶化进度百分比。

---

### 函数 `CalHealingRate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInfo` | const [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") float CalHealingRate(const FInjuryEffectInstance& InjuryInfo) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 计算指定伤势实例的治愈速率。

---

### 函数 `GetInjuryEffectInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") FInjuryEffectInstance& GetInjuryEffectInstance(FGuid InjuryInstanceID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按伤势实例GUID获取伤势实例的引用。

---

### 函数 `GetInjuryEffectInstanceByOrganType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OrganType` | const [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> GetInjuryEffectInstanceByOrganType(const EBodyOrganType OrganType);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定器官类型上的所有伤势实例。

---

### 函数 `GetInjuryEffectInstanceByOrganID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OrganID` | `const FName` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> GetInjuryEffectInstanceByOrganID(const FName OrganID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取指定器官ID上的所有伤势实例。

---

### 函数 `GetAllInjuryInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `isScar` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> GetAllInjuryInstances(bool isScar);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有伤势实例，isScar用于筛选疤痕或普通伤势。

---

### 函数 `GetCurInjurysByBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BufName` | `FString` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") TArray<FInjuryEffectInstance> GetCurInjurysByBuff(FString BufName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按Buff名称获取当前的伤势实例列表。

---

### 函数 `CalculateDamagePercentage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="FightPawn|Injury" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OrganType` | const [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |
| `Attributes` | `TMap<FGameplayAttribute, float>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "FightPawn|Injury") void CalculateDamagePercentage(const EBodyOrganType OrganType, TMap<FGameplayAttribute, float>& Attributes);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 按器官类型计算伤势造成的属性伤害百分比，结果写入Attributes映射（属性→数值）。

---

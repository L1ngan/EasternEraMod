# `class` `UInjuryBuffComponent`

**源码头文件：** `EastRimWorld/Character/Components/InjuryBuffComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OnRemoveInjuryDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FRemoveInjuryBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FRemoveInjuryBuffDelegate OnRemoveInjuryDelegate;` |

**源码注释：**

> 伤势恢复的事件（治愈了）（包括疤痕移除）

---

### 属性 `OnAddInjuryDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAddInjuryBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FAddInjuryBuffDelegate OnAddInjuryDelegate;` |

**源码注释：**

> 增加伤势的事件

---

### 属性 `OnUpdateInjuryDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FUpdateInjuryBuffDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FUpdateInjuryBuffDelegate OnUpdateInjuryDelegate;` |

**源码注释：**

> 更新伤势的事件

---

### 属性 `OnStartTreatDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FStartTreatDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FStartTreatDelegate OnStartTreatDelegate;` |

**源码注释：**

> 开始治疗事件

---

### 属性 `OnFinishTreatDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FFinishTreatDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FFinishTreatDelegate OnFinishTreatDelegate;` |

**源码注释：**

> 结束治疗事件

---

### 属性 `CurTreatNeedMedicines`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int32>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FName,int32> CurTreatNeedMedicines;` |

---

### 属性 `TreatGoapActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FGOAP_Action](../../GOAP/GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TMap<FName,FGOAP_Action> TreatGoapActions;` |

**源码注释：**

> 治疗行为(伤势id,Action)

---

### 属性 `CurrentTreatInjuryId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FName CurrentTreatInjuryId;` |

**源码注释：**

> 在治疗时检查

---

### 属性 `CurInjuryEffectArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FInjuryEffectInstance> CurInjuryEffectArr;` |

**源码注释：**

> 当前激活的伤势列表

---

## 蓝图暴露函数

### 函数 `AddInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddInjuryConfig` | const [FInjuryEffectConfig](../../Struct/CharacterStruct__FInjuryEffectConfig.md) & |
| `OrganID` | `FName` |
| `OrganType` | `EBodyOrganType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool AddInjury(const FInjuryEffectConfig & AddInjuryConfig,FName OrganID,EBodyOrganType OrganType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> / 添加buff
> / @param AddInjuryConfig 需要添加的buff
> / @param OrganType 部位类型
> / @return 是否成功

---

### 函数 `AddInjuryByOrganType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryID` | `FName` |
| `OrganType` | `EBodyOrganType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool AddInjuryByOrganType(FName InjuryID, EBodyOrganType OrganType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `ActiveInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryEffectInstance` | [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ActiveInjury(FInjuryEffectInstance& InjuryEffectInstance);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `InjuryCanAdd`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AddInjuryConfig` | const [FInjuryEffectConfig](../../Struct/CharacterStruct__FInjuryEffectConfig.md) & |
| `OrganType` | `EBodyOrganType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool InjuryCanAdd(const FInjuryEffectConfig & AddInjuryConfig ,EBodyOrganType OrganType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `BroadcastUpdateInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BroadcastUpdateInjury();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> //检查buff是否能激活
> UFUNCTION()
> bool CheckBuffCanActivate(const FInjuryEffectConfig& InInjuryInfo);

---

### 函数 `GetRecoverWorseTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) int32 GetRecoverWorseTime(FGuid InjuryInstanceID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 返回恢复或恶化时间(秒)

---

### 函数 `CalRecoverWorsePercent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float CalRecoverWorsePercent(FGuid InjuryInstanceID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 返回恢复或恶化百分比

---

### 函数 `CalHealingRate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInfo` | const [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float CalHealingRate(const FInjuryEffectInstance& InjuryInfo) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取治疗速度

---

### 函数 `GetInjuryEffectInstance`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FInjuryEffectInstance& GetInjuryEffectInstance(FGuid InjuryInstanceID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据伤势实例ID获取伤势效果实例

---

### 函数 `GetInjuryEffectInstanceByOrganType`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OrganType` | `const EBodyOrganType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FInjuryEffectInstance> GetInjuryEffectInstanceByOrganType(const EBodyOrganType OrganType);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询部位对应的伤势效果实例

---

### 函数 `GetInjuryEffectInstanceByOrganID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OrganID` | `const FName` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FInjuryEffectInstance> GetInjuryEffectInstanceByOrganID(const FName OrganID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询部位对应的伤势效果实例

---

### 函数 `GetAllInjuryInstances`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `isScar` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FInjuryEffectInstance> GetAllInjuryInstances(bool isScar);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询所有伤势（查询疤痕，还是普通的伤势）

---

### 函数 `TreatInjuries`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Doctor` | [AEastRimWorldCharacter](../EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool TreatInjuries(AEastRimWorldCharacter* Doctor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 治疗伤势

---

### 函数 `ReMoveScar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool ReMoveScar(FGuid InjuryInstanceID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 移除疤痕

---

### 函数 `ReMoveScarUseMedicines`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InjuryInstanceID` | `FGuid` |
| `InventoryManagerComponent` | [UInventoryManagerComponent](../../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)* |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool ReMoveScarUseMedicines(FGuid InjuryInstanceID,UInventoryManagerComponent* InventoryManagerComponent);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 使用药品消除疤痕

---

### 函数 `CalculateDamagePercentage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OrganType` | `const EBodyOrganType` |
| `Attributes` | `TMap<FGameplayAttribute,float> &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CalculateDamagePercentage(const EBodyOrganType OrganType,TMap<FGameplayAttribute,float> & Attributes);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 根据命中部位计算扣除的部位百分比

---

### 函数 `CheckIsHaveNotTreatedInjury`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckIsHaveNotTreatedInjury();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查还没有有未治疗的伤势

---

### 函数 `GetCurInjurysByBuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `BufName` | `FString` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<FInjuryEffectInstance> GetCurInjurysByBuff(FString BufName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

# `class` `UInjuryBuffComponent`

**Source header:** `EastRimWorld/Character/Components/InjuryBuffComponent.h`

---

## Functional description (from header comments)

> Injury buff component managing add/activate/treatment/scarring of body-part injuries and the application/removal of their gameplay effects.

## Blueprint-exposed variables

### Property `OnRemoveInjuryDelegate`

| Field | Details |
|------|------|
| C++ type | `FRemoveInjuryBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FRemoveInjuryBuffDelegate OnRemoveInjuryDelegate;` |

**Notes:**

> 伤势恢复的事件（治愈了）（包括疤痕移除）

---

### Property `OnAddInjuryDelegate`

| Field | Details |
|------|------|
| C++ type | `FAddInjuryBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FAddInjuryBuffDelegate OnAddInjuryDelegate;` |

**Notes:**

> 增加伤势的事件

---

### Property `OnUpdateInjuryDelegate`

| Field | Details |
|------|------|
| C++ type | `FUpdateInjuryBuffDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FUpdateInjuryBuffDelegate OnUpdateInjuryDelegate;` |

**Notes:**

> 更新伤势的事件

---

### Property `OnStartTreatDelegate`

| Field | Details |
|------|------|
| C++ type | `FStartTreatDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FStartTreatDelegate OnStartTreatDelegate;` |

**Notes:**

> 开始治疗事件

---

### Property `OnFinishTreatDelegate`

| Field | Details |
|------|------|
| C++ type | `FFinishTreatDelegate` |
| Reflection specifiers | BlueprintAssignable |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable) FFinishTreatDelegate OnFinishTreatDelegate;` |

**Notes:**

> 结束治疗事件

---

### Property `CurTreatNeedMedicines`

| Field | Details |
|------|------|
| C++ type | `TMap<FName,int32>` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) TMap<FName,int32> CurTreatNeedMedicines;` |

**Notes:**

> Medicines currently required for treatment (TMap<medicine ID, count>).

---

### Property `TreatGoapActions`

| Field | Details |
|------|------|
| C++ type | TMap<FName,[FGOAP_Action](../../GOAP/GOAP_Data__FGOAP_Action.md)> |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(VisibleAnywhere,BlueprintReadOnly) TMap<FName,FGOAP_Action> TreatGoapActions;` |

**Notes:**

> 治疗行为(伤势id,Action)

---

### Property `CurrentTreatInjuryId`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FName CurrentTreatInjuryId;` |

**Notes:**

> 在治疗时检查

---

### Property `CurInjuryEffectArr`

| Field | Details |
|------|------|
| C++ type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere,BlueprintReadWrite) TArray<FInjuryEffectInstance> CurInjuryEffectArr;` |

**Notes:**

> 当前激活的伤势列表

---

## Blueprint-exposed functions

### Function `AddInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddInjuryConfig` | const [FInjuryEffectConfig](../../Struct/CharacterStruct__FInjuryEffectConfig.md) & |
| `OrganID` | `FName` |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddInjury(const FInjuryEffectConfig & AddInjuryConfig,FName OrganID,EBodyOrganType OrganType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> / 添加buff
> / @param AddInjuryConfig 需要添加的buff
> / @param OrganType 部位类型
> / @return 是否成功

---

### Function `AddInjuryByOrganType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryID` | `FName` |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool AddInjuryByOrganType(FName InjuryID, EBodyOrganType OrganType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Adds the injury with the given ID to the specified body organ type, returning whether it succeeded.

---

### Function `ActiveInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryEffectInstance` | [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ActiveInjury(FInjuryEffectInstance& InjuryEffectInstance);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Activates the specified injury effect instance.

---

### Function `InjuryCanAdd`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AddInjuryConfig` | const [FInjuryEffectConfig](../../Struct/CharacterStruct__FInjuryEffectConfig.md) & |
| `OrganType` | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool InjuryCanAdd(const FInjuryEffectConfig & AddInjuryConfig ,EBodyOrganType OrganType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks whether the given injury config can be added to the specified body organ type.

---

### Function `BroadcastUpdateInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void BroadcastUpdateInjury();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> //检查buff是否能激活
> UFUNCTION()
> bool CheckBuffCanActivate(const FInjuryEffectConfig& InInjuryInfo);

---

### Function `GetRecoverWorseTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) int32 GetRecoverWorseTime(FGuid InjuryInstanceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 返回恢复或恶化时间(秒)

---

### Function `CalRecoverWorsePercent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalRecoverWorsePercent(FGuid InjuryInstanceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 返回恢复或恶化百分比

---

### Function `CalHealingRate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInfo` | const [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) float CalHealingRate(const FInjuryEffectInstance& InjuryInfo) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取治疗速度

---

### Function `GetInjuryEffectInstance`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)& |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) FInjuryEffectInstance& GetInjuryEffectInstance(FGuid InjuryInstanceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据伤势实例ID获取伤势效果实例

---

### Function `GetInjuryEffectInstanceByOrganType`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OrganType` | const [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FInjuryEffectInstance> GetInjuryEffectInstanceByOrganType(const EBodyOrganType OrganType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询部位对应的伤势效果实例

---

### Function `GetInjuryEffectInstanceByOrganID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OrganID` | `const FName` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FInjuryEffectInstance> GetInjuryEffectInstanceByOrganID(const FName OrganID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询部位对应的伤势效果实例

---

### Function `GetAllInjuryInstances`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `isScar` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FInjuryEffectInstance> GetAllInjuryInstances(bool isScar);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询所有伤势（查询疤痕，还是普通的伤势）

---

### Function `TreatInjuries`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Doctor` | [AEastRimWorldCharacter](../EastRimWorldCharacter__AEastRimWorldCharacter.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool TreatInjuries(AEastRimWorldCharacter* Doctor);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 治疗伤势

---

### Function `ReMoveScar`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ReMoveScar(FGuid InjuryInstanceID);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 移除疤痕

---

### Function `ReMoveScarUseMedicines`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InjuryInstanceID` | `FGuid` |
| `InventoryManagerComponent` | [UInventoryManagerComponent](../../Inventory/InventoryManagerComponent__UInventoryManagerComponent.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool ReMoveScarUseMedicines(FGuid InjuryInstanceID,UInventoryManagerComponent* InventoryManagerComponent);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 使用药品消除疤痕

---

### Function `CalculateDamagePercentage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OrganType` | const [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |
| `Attributes` | `TMap<FGameplayAttribute,float> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CalculateDamagePercentage(const EBodyOrganType OrganType,TMap<FGameplayAttribute,float> & Attributes);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 根据命中部位计算扣除的部位百分比

---

### Function `CheckIsHaveNotTreatedInjury`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool CheckIsHaveNotTreatedInjury();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查还没有有未治疗的伤势

---

### Function `GetCurInjurysByBuff`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[FInjuryEffectInstance](../../Struct/CharacterStruct__FInjuryEffectInstance.md)> |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `BufName` | `FString` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FInjuryEffectInstance> GetCurInjurysByBuff(FString BufName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the current injury effect instances associated with the given buff name.

---

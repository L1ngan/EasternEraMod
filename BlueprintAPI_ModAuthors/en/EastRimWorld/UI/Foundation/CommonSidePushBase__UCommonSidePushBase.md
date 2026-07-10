# `class` `UCommonSidePushBase`

**Source header:** `EastRimWorld/UI/Foundation/CommonSidePushBase.h`

---

## Functional description (from header comments)

> Common Side Push Base UObject type.

## Blueprint-exposed variables

### Property `CommonButtonInfo`

| Field | Details |
|------|------|
| C++ type | [FCommonButton](../Struct/UIStruct__FCommonButton.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FCommonButton CommonButtonInfo;` |

**Notes:**

> Common Button Info field.

---

## Blueprint-exposed functions

### Function `InitializeSidePush`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintNativeEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InCommonButton` | const [FCommonButton](../Struct/UIStruct__FCommonButton.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) void InitializeSidePush(const FCommonButton & InCommonButton);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). **BlueprintNativeEvent**: overridable in Blueprint; C++ default body is in `xxx_Implementation`.

**Notes:**

> 初始化侧边按钮

---

### Function `K2_PreHandleNativeOnClicked`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "PreHandleNativeOnClicked")) bool K2_PreHandleNativeOnClicked();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "PreHandleNativeOnClicked".

**Notes:**

> 点击前置处理，返回true表示已在脚本中处理并跳过原有点击逻辑

---

### Function `K2_OpenSelectFabricateWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenSelectFabricateWidget")) void K2_OpenSelectFabricateWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenSelectFabricateWidget".

**Notes:**

> 打开制造界面

---

### Function `OpenSetOwnerWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSetOwnerWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开设置拥有者界面

---

### Function `OpenRebuildBuildingWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenRebuildBuildingWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开重建建筑界面

---

### Function `TransBuilding`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void TransBuilding();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 移动建筑

---

### Function `OpenAutomatedControlWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ButtonType` | [EEnergyControlType](../../ERW_Enumerations__EEnergyControlType.md) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenAutomatedControlWidget(EEnergyControlType ButtonType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开自动化控件相关界面

---

### Function `OpenSetPipelineGroupWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSetPipelineGroupWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开分配管道界面

---

### Function `OpenWhenOpendControlPipelineGroupWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenWhenOpendControlPipelineGroupWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开设置设备开启时控制的管道

---

### Function `OpenWhenClosedControlPipelineGroupWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenWhenClosedControlPipelineGroupWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开设置设备关闭时控制的管道

---

### Function `OpenTravelWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenTravelWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开游历界面

---

### Function `OpenExploreWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenExploreWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开探索界面

---

### Function `OpenSureGiveUpWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSureGiveUpWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开放弃城镇

---

### Function `OpenWordPlaceManagementWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenWordPlaceManagementWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Executes the Open Word Place Management Widget operation.

---

### Function `SureGetOutOfTheJam`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void SureGetOutOfTheJam();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Sure Get Out Of The Jam field.

---

### Function `OpenPlaceAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenPlaceAttack();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 打开攻击地点

---

### Function `NativeFellAndHarvest`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "FellAndHarvest")) void NativeFellAndHarvest();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Node display title may be "FellAndHarvest".

**Notes:**

> 砍伐和收割

---

### Function `NativeBackPopupLastWidgetPage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "BackPopupLastWidetPage")) void NativeBackPopupLastWidgetPage();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Node display title may be "BackPopupLastWidetPage".

**Notes:**

> 返回上个弹出窗叠加页

---

### Function `NativeCancelAllSelectObjectOrder`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "CancelAllSelectObjectOrder")) void NativeCancelAllSelectObjectOrder();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Node display title may be "CancelAllSelectObjectOrder".

**Notes:**

> 取消所有选中对象的执行命令

---

### Function `NativeRestButton`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void NativeRestButton();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 当在操作多个对象时重新添加多选按钮以更新按钮状态

---

### Function `K2_OpenSelectTechnologyWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenSelectTechnologyWidget")) void K2_OpenSelectTechnologyWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenSelectTechnologyWidget".

**Notes:**

> 打开科技界面

---

### Function `K2_OpenBookListWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenBookListWidget")) void K2_OpenBookListWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenBookListWidget".

**Notes:**

> 打开书籍界面

---

### Function `K2_CheckCanWriteCopy`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "CheckCanWriteCopy")) bool K2_CheckCanWriteCopy();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "CheckCanWriteCopy".

**Notes:**

> 检查书籍是否可以被抄录

---

### Function `K2_OpenFoodListWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenFoodListWidget")) void K2_OpenFoodListWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenFoodListWidget".

**Notes:**

> 打开食物界面

---

### Function `K2_OpenComprehendListWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenComprehendListWidget")) void K2_OpenComprehendListWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenComprehendListWidget".

**Notes:**

> 打开角色参悟界面

---

### Function `K2_OpenAssignActiveAreaWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenAssignActiveAreaWidget")) void K2_OpenAssignActiveAreaWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenAssignActiveAreaWidget".

**Notes:**

> 打开分配活动区域界面

---

### Function `K2_OpenChangeDiscipleAreaWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenChangeDiscipleAreaWidget")) void K2_OpenChangeDiscipleAreaWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenChangeDiscipleAreaWidget".

**Notes:**

> 打开变更弟子活动区域界面

---

### Function `NativeProhibitUsage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "ProhibitUsage")) void NativeProhibitUsage();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Node display title may be "ProhibitUsage".

**Notes:**

> 禁止使用

---

### Function `CommonOperate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CommonOperate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通用操作(设置所有SelectInventorySubstituteSystem中选中的对象的按钮状态)

---

### Function `K2_SetShowSelectImage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bShow` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "SetShowSelectImage")) void K2_SetShowSelectImage(bool bShow);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "SetShowSelectImage".

**Notes:**

> Set Show Select Image field.

---

### Function `ImmediatelyExecute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ImmediatelyExecute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 降低Action消耗

---

### Function `OpenSetRobotProtectTargetUI`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSetRobotProtectTargetUI();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 设置机器人的保护对象

---

### Function `SetCheckBoxState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bIsChecked` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void SetCheckBoxState(bool bIsChecked);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 传入检测框集合，根据bool设置全选或全取消

---

### Function `TrigerButtonStateAndClearSelect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void TrigerButtonStateAndClearSelect();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 触发按钮状态并清除当前选择对象

---

### Function `ObserveOperate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ObserveOperate();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Observe Operate field.

---

### Function `CheckOperateResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckOperateResult();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 检查操作结果，并刷新

---

### Function `K2_OpenSwitchRoomTypeWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenSwitchRoomTypeWidget")) void K2_OpenSwitchRoomTypeWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenSwitchRoomTypeWidget".

**Notes:**

> 打开切换房间类型界面

---

### Function `K2_OpenApplyCeremonyWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenApplyCeremonyWidget")) void K2_OpenApplyCeremonyWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenApplyCeremonyWidget".

**Notes:**

> Open Apply Ceremony Widget field.

---

### Function `K2_OpenAddPuppetWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenAddPuppetWidget")) void K2_OpenAddPuppetWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenAddPuppetWidget".

**Notes:**

> Open Add Puppet Widget field.

---

### Function `OpenSelectTameCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSelectTameCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 选择前往驯服的弟子

---

### Function `KillSomeone`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void KillSomeone();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Kill Someone field.

---

### Function `OpenSelectRecruitCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSelectRecruitCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> 选择前往招募的弟子

---

### Function `K2_OpenTreasureListWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenTreasureListWidget")) void K2_OpenTreasureListWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenTreasureListWidget".

**Notes:**

> 打开珍宝阁/百宝楼界面

---

### Function `K2_OpenBackPackWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenBackPackWidget")) void K2_OpenBackPackWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenBackPackWidget".

**Notes:**

> 打开背包

---

### Function `K2_CopyObjectSetting`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "CopyObjectSetting")) void K2_CopyObjectSetting();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "CopyObjectSetting".

**Notes:**

> 复制建筑设置

---

### Function `K2_PasteObjectSetting`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "PasteObjectSetting")) void K2_PasteObjectSetting();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "PasteObjectSetting".

**Notes:**

> 粘贴建筑设置

---

### Function `K2_QuickBuild`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "QuickBuild")) void K2_QuickBuild();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "QuickBuild".

**Notes:**

> 快速建造设置

---

### Function `NativeDestroyResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void NativeDestroyResources();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 摧毁资源

---

### Function `K2_ConfirmDeleteResources`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "ConfirmDeleteResources")) void K2_ConfirmDeleteResources();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "ConfirmDeleteResources".

**Notes:**

> 确认是否删除

---

### Function `K2_OpenTradeArea`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta = (DisplayName = "OpenTradeArea")) void K2_OpenTradeArea();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenTradeArea".

**Notes:**

> 打开待交易区UI

---

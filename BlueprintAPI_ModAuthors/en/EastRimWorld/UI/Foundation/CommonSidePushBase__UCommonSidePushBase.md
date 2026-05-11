# `class` `UCommonSidePushBase`

**Source header:** `EastRimWorld/UI/Foundation/CommonSidePushBase.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `CommonButtonInfo`

| Field | Details |
|------|------|
| C++ type | [FCommonButton](../Struct/UIStruct__FCommonButton.md) |
| Reflection specifiers | BlueprintReadOnly |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly) FCommonButton CommonButtonInfo;` |

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 打开设置拥有者界面

---

### Function `OpenAutomatedControlWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ButtonType` | `EEnergyControlType` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenAutomatedControlWidget(EEnergyControlType ButtonType);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---

### Function `SureGetOutOfTheJam`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void SureGetOutOfTheJam();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

---

### Function `OpenPlaceAttack`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenPlaceAttack();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 打开食物界面

---

### Function `NativeProhibitUsage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, meta = (DisplayName = "ProhibitUsage")) void NativeProhibitUsage();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Node display title may be "ProhibitUsage".

**Source comments:**

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

**Source comments:**

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

---

### Function `ImmediatelyExecute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ImmediatelyExecute();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

---

### Function `CheckOperateResult`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CheckOperateResult();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

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

**Source comments:**

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

---

### Function `K2_OpenAddPuppetWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent, meta = (DisplayName = "OpenAddPuppetWidget")) void K2_OpenAddPuppetWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code. Node display title may be "OpenAddPuppetWidget".

---

### Function `OpenSelectTameCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSelectTameCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

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

---

### Function `OpenSelectRecruitCharacter`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable , BlueprintImplementableEvent) void OpenSelectRecruitCharacter();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins). Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

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

**Source comments:**

> 确认是否删除

---

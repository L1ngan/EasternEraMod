# `class` `ASelectInventorySubstituteSystem`

**Source header:** `EastRimWorld/Inventory/SelectInventorySubstituteSystem.h`

---

## Functional description (from header comments)

> Inventory substitute selection system (singleton actor) managing item instance selection/hover highlighting and the info UI

## Blueprint-exposed variables

### Property `OnSelectedChange`

| Field | Details |
|------|------|
| C++ type | `FOnSelectedChange` |
| Reflection specifiers | BlueprintAssignable, Category="Delegate" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Delegate") FOnSelectedChange OnSelectedChange;` |

**Notes:**

> 选中变更时的事件

---

## Blueprint-exposed functions

### Function `GetSelectInventorySubstituteSystem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="SelectInventorySubstituteSystem" |
| Return type | [ASelectInventorySubstituteSystem](SelectInventorySubstituteSystem__ASelectInventorySubstituteSystem.md) * |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Context` | `const UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure,Category="SelectInventorySubstituteSystem") static ASelectInventorySubstituteSystem * GetSelectInventorySubstituteSystem(const UObject* Context);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the singleton instance of the inventory substitute selection system

---

### Function `SelectMultipleObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InMultipleObjects` | `const TArray<UObject*> &` |
| `true` | `bool bClearOldSelect =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SelectMultipleObjects(const TArray<UObject*> & InMultipleObjects,bool bClearOldSelect = true);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 选择多个对象

---

### Function `ToggleObjectInMultipleSelect`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InObject` | `UObject*` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ToggleObjectInMultipleSelect(UObject* InObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 切换一个对象在现有多选列表中的选中状态

---

### Function `ClearAllSelectObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearAllSelectObject();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清除所有实例

---

### Function `SelectObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSelectObject` | `UObject *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SelectObject(UObject * InSelectObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 选择一个实例

---

### Function `HoveringOnObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InHoveringObject` | `UObject *` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void HoveringOnObject(UObject * InHoveringObject);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 悬浮实例

---

### Function `ClearHoveringObject`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearHoveringObject();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清除悬浮实例

---

### Function `CreateObjectInfoWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InSelectObjects` | `const TArray<UObject*> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CreateObjectInfoWidget(const TArray<UObject*> & InSelectObjects);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建实例信息的界面

---

### Function `ClearInventoryInfoWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void ClearInventoryInfoWidget();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 清除选中的ui

---

### Function `GetOperateObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<UObject*>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UObject*> GetOperateObjects();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取选择操作的实例

---

### Function `SelectOperateIdenticalID`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InObjectName` | `const FString &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void SelectOperateIdenticalID(const FString & InObjectName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 选择出相同id的物品

---

### Function `UpdateObjectInfoWidget`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `SelectInstances` | `const TArray<UObject*> &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void UpdateObjectInfoWidget(const TArray<UObject*> & SelectInstances);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新多选的数量

---

### Function `GetMultipleSelectObjectSidePush`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `TArray<FName>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<FName> GetMultipleSelectObjectSidePush();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取多选对象的侧边按钮组

---

### Function `CancelObjectFunction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void CancelObjectFunction();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消选中对象的所有已经设置的可以批量取消的命令

---

### Function `GetCacheSelectObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `const TArray<UObject*>&` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) const TArray<UObject*>& GetCacheSelectObjects();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the cached list of previously selected objects

---

### Function `GetSelectObjects`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure |
| Return type | `const TArray<UObject*>&` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure) const TArray<UObject*>& GetSelectObjects();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 返回当前选择的对象

---

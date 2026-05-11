# `class` `ABreakThroughManager`

**源码头文件：** `EastRimWorld/System/BreakThrough/BreakThroughManager.h`

---

## 功能说明（来自头文件注释）

> 角色突破管理器

## 蓝图暴露变量

### 属性 `OnBreakThroughStateChanged`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBreakThroughStateChanged` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBreakThroughStateChanged OnBreakThroughStateChanged;` |

**源码注释：**

> 委托：突破状态变化

---

### 属性 `OnBreakThroughProgressUpdated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBreakThroughProgressUpdated` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBreakThroughProgressUpdated OnBreakThroughProgressUpdated;` |

**源码注释：**

> 委托：突破进度更新

---

### 属性 `OnBreakThroughCompleted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBreakThroughCompleted` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBreakThroughCompleted OnBreakThroughCompleted;` |

**源码注释：**

> 委托：突破完成

---

### 属性 `OnBreakThroughInterrupted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnBreakThroughInterrupted` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnBreakThroughInterrupted OnBreakThroughInterrupted;` |

**源码注释：**

> 委托：突破中断

---

### 属性 `OpenSelectBreakThroughUI_Delegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOpenSelectBreakThroughUI` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOpenSelectBreakThroughUI OpenSelectBreakThroughUI_Delegate;` |

**源码注释：**

> 打开右侧择地突破的UI

---

### 属性 `OnCheckBreakThroughRoom`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnCheckBreakThroughRoom` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnCheckBreakThroughRoom OnCheckBreakThroughRoom;` |

**源码注释：**

> 检查突破房间信息委托

---

### 属性 `SelectingLocationCharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FGuid SelectingLocationCharacterGuid;` |

**源码注释：**

> 当前正在选择地点的角色Guid

---

## 蓝图暴露函数

### 函数 `GetBreakThroughManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [ABreakThroughManager](BreakThroughManager__ABreakThroughManager.md)* |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure) static ABreakThroughManager* GetBreakThroughManager();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `StartSelectLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StartSelectLocation(const FGuid& CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 开始择地突破（进入选择地点模式）

---

### 函数 `CanBreakThroughAtLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CanBreakThroughAtLocation(const FVector& Location);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查位置是否可以突破

---

### 函数 `GetBreakThroughRoomInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetBreakThroughRoomInfo(const FVector& Location);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取突破地点的房间信息

---

### 函数 `ConfirmBreakThroughLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool ConfirmBreakThroughLocation(const FVector& Location);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 确认突破地点并开始突破

---

### 函数 `CancelSelectLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CancelSelectLocation();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 取消择地突破

---

### 函数 `BreakthroughCancel`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BreakthroughCancel(const FGuid& CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 突破中取消

---

### 函数 `BreakthroughFinish`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void BreakthroughFinish(const FGuid& CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 突破完成

---

### 函数 `ConfirmBreakThroughResult`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `bConfirm` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ConfirmBreakThroughResult(const FGuid& CharacterGuid, bool bConfirm);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 确认突破结果

---

### 函数 `GetCharacterBreakThroughInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |
| `OutInfo` | [FBreakThroughInfo](BreakThroughStruct__FBreakThroughInfo.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool GetCharacterBreakThroughInfo(const FGuid& CharacterGuid, FBreakThroughInfo& OutInfo) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取角色的突破信息

---

### 函数 `IsCharacterBreakingThrough`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsCharacterBreakingThrough(const FGuid& CharacterGuid) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查角色是否正在突破

---

### 函数 `CalculateBreakThroughBonus`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacter` | [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |
| `TrainingRoomLevel` | `int32` |
| `ElementValue` | `float` |
| `ElementType` | `const EFiveElementType` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float CalculateBreakThroughBonus(AEastRimWorldCharacter * InCharacter, int32 TrainingRoomLevel, float ElementValue,const EFiveElementType ElementType) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算突破点数加成

---

### 函数 `IsTrainingRoom`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector&` |
| `OutRoomInfo` | [FRoomInfo](../../ERW_ConfigTypes__FRoomInfo.md) & |
| `OutElementType` | `EFiveElementType&` |
| `OutLevel` | `int32&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool IsTrainingRoom(const FVector& Location,FRoomInfo & OutRoomInfo, EFiveElementType& OutElementType, int32& OutLevel) const;`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查房间是否为指定类型的练功房

---

### 函数 `OnCharacterReachedTarget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `const FGuid&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnCharacterReachedTarget(const FGuid& CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 处理角色到达目标点

---

### 函数 `OpenSelectBreakThroughUI`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OpenSelectBreakThroughUI();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 处理角色到达目标点

---

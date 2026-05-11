# `class` `AEastRimWorldCharacter_Summons`

**源码头文件:** `EastRimWorld/Character/EastRimWorldCharacter_Summons.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `OwnerGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame,BlueprintReadOnly) FGuid OwnerGuid;` |

**源码注释:**

> 拥有此召唤物的对象GUID

---

### 属性 `SelfAttachActor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<AActor>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="Summons" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , VisibleAnywhere, BlueprintReadOnly, Category = "Summons", Meta = (AllowPrivateAccess = "true")) TObjectPtr<AActor> SelfAttachActor;` |

**源码注释:**

> 召唤物的附加者

---

### 属性 `WorkComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UEastRimWorldWorkComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Human" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Human", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UEastRimWorldWorkComponent> WorkComponent;` |

---

### 属性 `CurRobotName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) FText CurRobotName;` |

**源码注释:**

> 当前机关人的名字

---

### 属性 `bAutoTreat`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) bool bAutoTreat = true;` |

**源码注释:**

> 受伤时是否需要自动维修（治疗）

---

### 属性 `bIsFindingRepairBuildings`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) bool bIsFindingRepairBuildings = false;` |

**源码注释:**

> 是否正在主动寻找充能

---

### 属性 `ResidueLifeTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) float ResidueLifeTime = -1.f;` |

---

### 属性 `ActiveType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ERobotActiveType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , SaveGame) ERobotActiveType ActiveType = ERobotActiveType::Normal;` |

**源码注释:**

> 机关人的状态

---

### 属性 `UsePuppetPlatformSlotLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) FVector UsePuppetPlatformSlotLocation = FVector::ZeroVector;` |

**源码注释:**

> 记录使用的傀儡台位置

---

### 属性 `UsePuppetPlatform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) FUObjectData UsePuppetPlatform;` |

**源码注释:**

> 记录使用的傀儡台

---

### 属性 `OnSummonsRename`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSummonsRename` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FSummonsRename OnSummonsRename;` |

---

## 蓝图暴露函数

### 函数 `CanRemoveStandbyAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool CanRemoveStandbyAction() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `RemoveStandbyAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveStandbyAction();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetRobotAutoTreat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Selected` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetRobotAutoTreat(bool Selected);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置机关人受伤是否自动维修

---

### 函数 `SetRobotDormant`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bIsDormant` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetRobotDormant(bool bIsDormant);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置生物休眠

---

### 函数 `SetAttachActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Summons" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewActor` | `AActor *` |
| `AttachTransform` | `FTransform` |
| `NAME_None` | `FName SocketName =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category = "Summons") void SetAttachActor(AActor * NewActor,FTransform AttachTransform, FName SocketName = NAME_None);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置召唤物的控制器（骑乘者）

---

### 函数 `UpdateSummonsStateBar`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintImplementableEvent) void UpdateSummonsStateBar();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释:**

> 更新召唤物的名字条

---

### 函数 `GetSummonsData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FEastRimWorldSummonsData](../Struct/CharacterStruct__FEastRimWorldSummonsData.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FEastRimWorldSummonsData GetSummonsData() { if (auto SummonsData = EastRimWorldCharacterData.GetPtr<FEastRimWorldSummonsData>()) { return *SummonsData; } return {}; }`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取召唤物的信息

---

### 函数 `SetUsePuppetPlatform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PuppetPlatform` | [AGOAP_ActorBase](../GOAP/GOAP_ActorBase__AGOAP_ActorBase.md)* |
| `SlotLocation` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetUsePuppetPlatform(AGOAP_ActorBase* PuppetPlatform, const FVector& SlotLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置使用的傀儡台

---

### 函数 `HasPuppetPlatform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool HasPuppetPlatform() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 是否有傀儡台

---

### 函数 `SetSummonsName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewName` | `FText` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SetSummonsName(FText NewName);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

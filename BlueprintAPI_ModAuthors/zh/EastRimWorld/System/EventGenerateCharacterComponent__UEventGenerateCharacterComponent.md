# `class` `UEventGenerateCharacterComponent`

**源码头文件:** `EastRimWorld/System/EventGenerateCharacterComponent.h`

---

## 功能说明（来自头文件注释）

> Event Generate Character Component UObject 类型。

## 蓝图暴露变量

### 属性 `bInitComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bInitComponent = false;` |

**说明:**

> 是否初始化完成

---

### 属性 `MonsterGenerationInfoQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMonsterGenerationInfo](../WorldSystem/WorldStruct__FMonsterGenerationInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame,VisibleAnywhere) TArray<FMonsterGenerationInfo> MonsterGenerationInfoQueue;` |

**说明:**

> 队列中的信息

---

### 属性 `GenerationInstanceInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FGenerationInstanceInfo](../WorldSystem/WorldStruct__FGenerationInstanceInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame,VisibleAnywhere) TMap<FGuid,FGenerationInstanceInfo> GenerationInstanceInfos;` |

**说明:**

> 已经生成的信息

---

### 属性 `MonsterDissatisfyGenerationInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMonsterGenerationInfo](../WorldSystem/WorldStruct__FMonsterGenerationInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame,VisibleAnywhere) TArray<FMonsterGenerationInfo> MonsterDissatisfyGenerationInfo;` |

**说明:**

> 不满足条件的信息

---

### 属性 `EnemyForceAttackGenerationInfoQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FEnemyForceAttackGenerationInfo](../WorldSystem/WorldStruct__FEnemyForceAttackGenerationInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame,VisibleAnywhere) TArray<FEnemyForceAttackGenerationInfo> EnemyForceAttackGenerationInfoQueue;` |

**说明:**

> 敌对势力袭击生成队列

---

### 属性 `NotGenerationID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame,VisibleAnywhere) TArray<FName> NotGenerationID;` |

**说明:**

> 不再生成的配置

---

### 属性 `OnGenerateCharacterDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGenerateCharacterDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGenerateCharacterDelegate OnGenerateCharacterDelegate;` |

**说明:**

> 生成角色

---

### 属性 `OnUpdateGenerateTimeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateGenerateTimeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateGenerateTimeDelegate OnUpdateGenerateTimeDelegate;` |

**说明:**

> On Update Generate Time Delegate 事件或回调。

---

### 属性 `OnGenerateAllFinish`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGenerateAllFinish` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGenerateAllFinish OnGenerateAllFinish;` |

**说明:**

> On Generate All Finish 事件或回调。

---

### 属性 `GenerateCharacterSourceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGenerateCharacterSourceType](../WorldSystem/WorldStruct__EGenerateCharacterSourceType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EGenerateCharacterSourceType GenerateCharacterSourceType = EGenerateCharacterSourceType::None;` |

**说明:**

> 此组件生成的对象

---

## 蓝图暴露函数

### 函数 `GetInstanceGenerationActorInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FInstanceGenerationActorInfo](../WorldSystem/WorldStruct__FInstanceGenerationActorInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FInstanceGenerationActorInfo GetInstanceGenerationActorInfo(const FGuid & GenerationInstanceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过GUID获取对应的生成怪物信息实例信息

---

### 函数 `GetGenerationQueueInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FMonsterGenerationInfo](../WorldSystem/WorldStruct__FMonsterGenerationInfo.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenerationGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FMonsterGenerationInfo GetGenerationQueueInfo(const FGuid & GenerationGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过GUID获取对应的生成队列中的信息

---

### 函数 `RemoveGenerationActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Actor` | `AActor *` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveGenerationActor(AActor * Actor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 移除生成记录的单位

---

### 函数 `RemoveGenerationActorByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActorGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RemoveGenerationActorByGuid(FGuid ActorGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Remove Generation Actor By Guid 操作。

---

### 函数 `ExcludeCharacter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenerationInstanceGuid` | `const FGuid &` |
| `CharacterActor` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExcludeCharacter(const FGuid & GenerationInstanceGuid,AEastRimWorldCharacter * CharacterActor);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 生成中排除角色

---

### 函数 `GetMonsterArray`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `TMap<FString, int32>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `MonsterArray` | `const TArray<FString>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TMap<FString, int32> GetMonsterArray(const TArray<FString>& MonsterArray);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 归类怪物

---

### 函数 `GetAllGenerationCharacterByGuid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGenerationInstanceGuid` | `const FGuid &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldCharacter*> GetAllGenerationCharacterByGuid(const FGuid & InGenerationInstanceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过GUID获取所有生成的角色

---

### 函数 `CreateGenerationByID`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGenerationID` | `const FName &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateGenerationByID(const FName & InGenerationID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过ID 创建生成信息

---

### 函数 `CreateGenerationByIDWithTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InGenerationID` | `const FName&` |
| `DelayTime` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void CreateGenerationByIDWithTime(const FName& InGenerationID,float DelayTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 通过ID 创建生成信息附加延迟时间

---

# `class` `UEventGenerateCharacterComponent`

**源码头文件：** `EastRimWorld/System/EventGenerateCharacterComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `bInitComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bInitComponent = false;` |

**源码注释：**

> 是否初始化完成

---

### 属性 `MonsterGenerationInfoQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMonsterGenerationInfo](../WorldSystem/WorldStruct__FMonsterGenerationInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FMonsterGenerationInfo> MonsterGenerationInfoQueue;` |

**源码注释：**

> 队列中的信息

---

### 属性 `GenerationInstanceInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FGenerationInstanceInfo](../WorldSystem/WorldStruct__FGenerationInstanceInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TMap<FGuid,FGenerationInstanceInfo> GenerationInstanceInfos;` |

**源码注释：**

> 已经生成的信息

---

### 属性 `MonsterDissatisfyGenerationInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FMonsterGenerationInfo](../WorldSystem/WorldStruct__FMonsterGenerationInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TArray<FMonsterGenerationInfo> MonsterDissatisfyGenerationInfo;` |

**源码注释：**

> 不满足条件的信息

---

### 属性 `EnemyForceAttackGenerationInfoQueue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FEnemyForceAttackGenerationInfo](../WorldSystem/WorldStruct__FEnemyForceAttackGenerationInfo.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FEnemyForceAttackGenerationInfo> EnemyForceAttackGenerationInfoQueue;` |

**源码注释：**

> 敌对势力袭击生成队列

---

### 属性 `NotGenerationID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TArray<FName> NotGenerationID;` |

**源码注释：**

> 不再生成的配置

---

### 属性 `OnGenerateCharacterDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGenerateCharacterDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGenerateCharacterDelegate OnGenerateCharacterDelegate;` |

**源码注释：**

> 生成角色

---

### 属性 `OnUpdateGenerateTimeDelegate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateGenerateTimeDelegate` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateGenerateTimeDelegate OnUpdateGenerateTimeDelegate;` |

---

### 属性 `OnGenerateAllFinish`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGenerateAllFinish` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnGenerateAllFinish OnGenerateAllFinish;` |

---

### 属性 `GenerateCharacterSourceType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EGenerateCharacterSourceType` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EGenerateCharacterSourceType GenerateCharacterSourceType = EGenerateCharacterSourceType::None;` |

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FInstanceGenerationActorInfo GetInstanceGenerationActorInfo(const FGuid & GenerationInstanceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FMonsterGenerationInfo GetGenerationQueueInfo(const FGuid & GenerationGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveGenerationActor(AActor * Actor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void RemoveGenerationActorByGuid(FGuid ActorGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void ExcludeCharacter(const FGuid & GenerationInstanceGuid,AEastRimWorldCharacter * CharacterActor);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TMap<FString, int32> GetMonsterArray(const TArray<FString>& MonsterArray);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) TArray<AEastRimWorldCharacter*> GetAllGenerationCharacterByGuid(const FGuid & InGenerationInstanceGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateGenerationByID(const FName & InGenerationID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateGenerationByIDWithTime(const FName& InGenerationID,float DelayTime);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过ID 创建生成信息附加延迟时间

---

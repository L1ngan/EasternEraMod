# `class` `AEasternEraPostStationActor`

**源码头文件:** `EastRimWorld/PostStation/EasternEraPostStationActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `MeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UStaticMeshComponent> MeshComponent;` |

---

### 属性 `GenerateCharacterComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UEventGenerateCharacterComponent](../System/EventGenerateCharacterComponent__UEventGenerateCharacterComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UEventGenerateCharacterComponent> GenerateCharacterComponent;` |

---

### 属性 `EnvironComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[UERW_EnvironComponent](../Components/ERW_EnvironComponent__UERW_EnvironComponent.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly) TObjectPtr<UERW_EnvironComponent> EnvironComponent;` |

---

### 属性 `SaledGoodsAreaMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TObjectPtr<UStaticMeshComponent> SaledGoodsAreaMeshComponent;` |

---

### 属性 `ExchangeMartialArtsAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGOAP_Action](../GOAP/GOAP_Data__FGOAP_Action.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) FGOAP_Action ExchangeMartialArtsAction;` |

---

### 属性 `ExchangeMartialArtsInstances`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FExchangeMartialArtsInstance](PostStationStruct__FExchangeMartialArtsInstance.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FGuid,FExchangeMartialArtsInstance> ExchangeMartialArtsInstances;` |

---

### 属性 `ExchangeMartialArtsCharacterTrans`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid,FTransform>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,SaveGame) TMap<FGuid,FTransform> ExchangeMartialArtsCharacterTrans;` |

---

### 属性 `OnExchangeMartialArtsEnd`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnExchangeMartialArtsEnd` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnExchangeMartialArtsEnd OnExchangeMartialArtsEnd;` |

---

### 属性 `NeedDestroyNPC`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[AEastRimWorldCharacter_Human](../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)*> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere) TArray<AEastRimWorldCharacter_Human*> NeedDestroyNPC;` |

**源码注释:**

> ------------补丁 处理火云邪神------------

---

### 属性 `IsPause`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleAnywhere,meta=(AllowPrivateAccess=true)) bool IsPause = false;` |

---

## 蓝图暴露函数

### 函数 `UpdateTaskCondition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Condition` | const [FCommonTaskCondition](../Struct/CommonTaskStruct__FCommonTaskCondition.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) virtual void UpdateTaskCondition(const FCommonTaskCondition& Condition) override;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `InitPostStation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void InitPostStation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 仅新游戏：WorldPlace::InitFirstTimeEnter -> SpawnWorldPlacePostStationActor。读档由存档恢复 Actor，不会调用本函数。

---

### 函数 `RandGenerate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenerateLine` | [FPostStationGenerateLine](PostStationStruct__FPostStationGenerateLine.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void RandGenerate(FPostStationGenerateLine& GenerateLine);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OnNPCArriveOriginPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewMonster` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnNPCArriveOriginPoint(AEastRimWorldCharacter * NewMonster);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetNPCOriginTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `FTransform` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) FTransform GetNPCOriginTransform(const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 获取驿站NPC插槽所在位置

---

### 函数 `CreateExchangeMartialArts`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConfigID` | `const FName&` |
| `NPCCharacter` | [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)* |
| `PlayerCharacters` | const TArray<[AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CreateExchangeMartialArts(const FName& ConfigID,AEastRimWorldCharacter* NPCCharacter,const TArray<AEastRimWorldCharacter*>& PlayerCharacters);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 创建切磋

---

### 函数 `ExchangeMartialArtsSignIn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InBattleGuid` | `const FGuid&` |
| `InCharacterGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ExchangeMartialArtsSignIn(const FGuid& InBattleGuid,const FGuid& InCharacterGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 切磋签到

---

### 函数 `ResetSaledGoodsAreaLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewLocation` | `const FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ResetSaledGoodsAreaLocation(const FVector& NewLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `ClearPostStation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void ClearPostStation();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `PauseGenerate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InIsPause` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void PauseGenerate(bool InIsPause);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

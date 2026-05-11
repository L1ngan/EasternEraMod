# `class` `UEastRimWorldCharacterChatComponent`

**源码头文件：** `EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `RelationshipDataMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FSocialRelationshipData](../../Struct/CharacterChatStruct__FSocialRelationshipData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FSocialRelationshipData> RelationshipDataMap;` |

---

## 蓝图暴露函数

### 函数 `StartFindChatPartnerTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StartFindChatPartnerTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `StopFindChatPartnerTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StopFindChatPartnerTimer();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `TryStartChat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Initiator` | [UEastRimWorldCharacterChatComponent](EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)* |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool TryStartChat(UEastRimWorldCharacterChatComponent* Initiator);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `EndChatting`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `（匿名/仅类型）` | `bool IsAbort=false` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void EndChatting(bool IsAbort=false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetChatState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `const EChatState&` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) const EChatState& GetChatState() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetChatTargetTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `const FTransform&` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) const FTransform& GetChatTargetTransform() const;`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetChatTargetComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | [UEastRimWorldCharacterChatComponent](EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) UEastRimWorldCharacterChatComponent* GetChatTargetComponent();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `FindRelationshipData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `OutRelationshipData` | [FSocialRelationshipData](../../Struct/CharacterChatStruct__FSocialRelationshipData.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintPure) bool FindRelationshipData(const FGuid& InCharacterGuid,FSocialRelationshipData& OutRelationshipData);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 根据角色的guid查找关系数据

---

### 函数 `OnCeremonyComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `NewRelationshipID` | `const FName&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void OnCeremonyComplete(const FGuid& InCharacterGuid,const FName& NewRelationshipID);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetAllCanDevelopingRelationship`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InCharacterGuid` | `const FGuid&` |
| `OutNewRelationships` | `TArray<FName>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void GetAllCanDevelopingRelationship(const FGuid& InCharacterGuid,TArray<FName>& OutNewRelationships);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获得所有当前可发展的非自动升级的新关系

---

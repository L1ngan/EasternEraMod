# `class` `UEastRimWorldCharacterChatComponent`

**源码头文件:** `EastRimWorld/Character/Components/EastRimWorldCharacterChatComponent.h`

---

## 功能说明（来自头文件注释）

> 角色聊天/社交组件：查找聊天对象、进行与结束聊天，维护社交关系与好感度数据并随存档保存。

## 蓝图暴露变量

### 属性 `RelationshipDataMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[FSocialRelationshipData](../../Struct/CharacterChatStruct__FSocialRelationshipData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<FGuid,FSocialRelationshipData> RelationshipDataMap;` |

**说明:**

> 社交关系数据表（TMap<角色Guid, 社交关系数据>，随存档保存）。

---

## 蓝图暴露函数

### 函数 `StartFindChatPartnerTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StartFindChatPartnerTimer();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 启动查找聊天对象的定时器。

---

### 函数 `StopFindChatPartnerTimer`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void StopFindChatPartnerTimer();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 停止查找聊天对象的定时器。

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

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool TryStartChat(UEastRimWorldCharacterChatComponent* Initiator);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 尝试与发起者开始聊天，返回是否成功。

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

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void EndChatting(bool IsAbort=false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 结束当前聊天，IsAbort表示是否为中断结束。

---

### 函数 `GetChatState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | const [EChatState](EastRimWorldCharacterChatComponent__EChatState.md)& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) const EChatState& GetChatState() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取当前聊天状态。

---

### 函数 `GetChatTargetTransform`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `const FTransform&` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) const FTransform& GetChatTargetTransform() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取聊天要走到的目标地点变换。

---

### 函数 `GetChatTargetComponent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | [UEastRimWorldCharacterChatComponent](EastRimWorldCharacterChatComponent__UEastRimWorldCharacterChatComponent.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) UEastRimWorldCharacterChatComponent* GetChatTargetComponent();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取聊天对象的聊天组件。

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

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) bool FindRelationshipData(const FGuid& InCharacterGuid,FSocialRelationshipData& OutRelationshipData);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

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

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnCeremonyComplete(const FGuid& InCharacterGuid,const FName& NewRelationshipID);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 处理仪式完成：将与指定角色的关系更新为新的关系ID。

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

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void GetAllCanDevelopingRelationship(const FGuid& InCharacterGuid,TArray<FName>& OutNewRelationships);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获得所有当前可发展的非自动升级的新关系

---

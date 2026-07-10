# `class` `ADominionManager`

**源码头文件:** `EastRimWorld/System/Dominion/DominionManager.h`

---

## 功能说明（来自头文件注释）

> 世界势力割据管理器 — 单一 Actor 管理器(纯数据驱动,参考 AApprenticeshipManager)
> 职责:
>   1. 城市门派容量:每城按城市等级有附属门派容量上限,满员不可加入(只有 CenterCity 可承载附属门派)
>   2. 依附与纳税:附属门派(必为 NPC,玩家不会成为附属门派)周期向城主纳税(NPC 城主得积分,玩家城主 1:1 得铜币)
>   3. 周期积分加成:附属门派定期积分按所在城市等级/繁荣度百分比加成(钩在 AWorldForce::OnGameDayChanged)
>   4. NPC 城主治理:按性格(激进/中立/保守)周期自动 驱逐/加税/批准迁入
>   5. 城市易主:城内门派转依附新城主(钩在 AWorldPlace::OccupyPlace → OnCityOwnerChanged)
>   6. 玩家操作:攻打城内门派(城主态度许可/强攻代价/胜负结算)、攻打流浪门派(灭门)、交流(送礼/情报/协助/安抚)
>   7. NPC 附属门派周期迁移(优先更繁荣且有空位的城市,需城主批准)
>   8. NPC 附属门派攻打资源点/其他城市/门派驻地,成功转为占领门派并按等级转移主城
> 驱动:绑定 AWorldDirector::OnGameDayChanged → OnGameDayChangedHandler(无 Tick)
> 配置:UDominionConfigAsset(经 GameMode 获取,未配置回退 CDO)

## 蓝图暴露变量

### 属性 `CityStates`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FCityDominionState](DominionTypes__FCityDominionState.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Dominion|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Dominion|Runtime") TMap<FGuid, FCityDominionState> CityStates;` |

**说明:**

> 每座城市的割据状态(key=城市Guid;只有 CenterCity 会产生条目)

---

### 属性 `SectInfos`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FSectDominionInfo](DominionTypes__FSectDominionInfo.md)> |
| 反射说明符 | BlueprintReadOnly, Category="Dominion|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Dominion|Runtime") TMap<FGuid, FSectDominionInfo> SectInfos;` |

**说明:**

> 每个门派的割据全局记录(驱逐记录/流浪标记;key=势力Guid)

---

### 属性 `LastMigrationGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Dominion|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Dominion|Runtime") int32 LastMigrationGameDay = 0;` |

**说明:**

> 上次迁移检测的游戏天数

---

### 属性 `LastResidentAttackGameDay`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Dominion|Runtime" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Dominion|Runtime") int32 LastResidentAttackGameDay = 0;` |

**说明:**

> 上次附属门派攻打检测的游戏天数

---

### 属性 `OnSectJoinedCity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectJoinedCity` |
| 反射说明符 | BlueprintAssignable, Category="Dominion|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectJoinedCity OnSectJoinedCity;` |

**说明:**

> ── 委托 ──

---

### 属性 `OnSectLeftCity`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectLeftCity` |
| 反射说明符 | BlueprintAssignable, Category="Dominion|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectLeftCity OnSectLeftCity;` |

**说明:**

> On Sect Left City 事件或回调。

---

### 属性 `OnSectMoveInRequested`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectMoveInRequested` |
| 反射说明符 | BlueprintAssignable, Category="Dominion|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectMoveInRequested OnSectMoveInRequested;` |

**说明:**

> On Sect Move In Requested 事件或回调。

---

### 属性 `OnSectBecameWandering`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectBecameWandering` |
| 反射说明符 | BlueprintAssignable, Category="Dominion|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectBecameWandering OnSectBecameWandering;` |

**说明:**

> On Sect Became Wandering 事件或回调。

---

### 属性 `OnSectExterminated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectExterminated` |
| 反射说明符 | BlueprintAssignable, Category="Dominion|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectExterminated OnSectExterminated;` |

**说明:**

> On Sect Exterminated 事件或回调。

---

### 属性 `OnSectTaxRaised`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSectTaxRaised` |
| 反射说明符 | BlueprintAssignable, Category="Dominion|Events" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Dominion|Events") FOnSectTaxRaised OnSectTaxRaised;` |

**说明:**

> On Sect Tax Raised 事件或回调。

---

## 蓝图暴露函数

### 函数 `GetDominionManager`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | [ADominionManager](DominionManager__ADominionManager.md)* |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure) static ADominionManager* GetDominionManager();`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> ── 单例 ──

---

### 函数 `GetCitySectCapacity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") int32 GetCitySectCapacity(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 城市的门派容量上限(按城市等级查配置)

---

### 函数 `GetResidentSectCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") int32 GetResidentSectCount(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 城内附属门派数量

---

### 函数 `HasCityFreeCapacity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") bool HasCityFreeCapacity(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 城内是否还有空位

---

### 函数 `GetCityResidentSects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Query" |
| 返回类型 | TArray<[FSectResidencyInfo](DominionTypes__FSectResidencyInfo.md)> |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FSectResidencyInfo> GetCityResidentSects(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 城内附属门派列表

---

### 函数 `GetCityPendingMoveIns`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Query" |
| 返回类型 | `TArray<FGuid>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FGuid> GetCityPendingMoveIns(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 城市待批准的迁入申请

---

### 函数 `IsResidentSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") bool IsResidentSect(FGuid ForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 某门派是否是附属门派(依附于某城)

---

### 函数 `FindSectResidentCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") FGuid FindSectResidentCity(FGuid ForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 某门派当前依附的城市Guid(无则返回无效Guid)

---

### 函数 `GetSectResidencyInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Query" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `FGuid` |
| `OutInfo` | [FSectResidencyInfo](DominionTypes__FSectResidencyInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") bool GetSectResidencyInfo(FGuid ForceGuid, FSectResidencyInfo& OutInfo) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 取某门派在城内的进驻信息(忠诚/税率等);查不到返回 false

---

### 函数 `IsWanderingSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") bool IsWanderingSect(FGuid ForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 某门派是否是流浪门派

---

### 函数 `GetWanderingSects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Query" |
| 返回类型 | `TArray<FGuid>` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FGuid> GetWanderingSects() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 所有流浪门派Guid

---

### 函数 `GetSectExpelRecord`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Query" |
| 返回类型 | `TArray<FGuid>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FGuid> GetSectExpelRecord(FGuid ForceGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 某门派的驱逐记录(被哪些城驱逐过)

---

### 函数 `GetResidentScoreMultiplier`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") float GetResidentScoreMultiplier(FGuid ForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 附属门派周期积分倍率(1+城市等级加成+繁荣度加成;非附属返回1;供 AWorldForce 定期积分调用)

---

### 函数 `GetResidentSectsCombat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") float GetResidentSectsCombat(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 城内附属门派的守备贡献战力(战力×归属感%×系数;供攻防结算扩展用)

---

### 函数 `GetWanderingSectCombat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|Query" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|Query") float GetWanderingSectCombat(FGuid ForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 流浪门派的削弱后战力

---

### 函数 `GetAssistPledgedSects`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Query" |
| 返回类型 | `TArray<FGuid>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Query") TArray<FGuid> GetAssistPledgedSects(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 已承诺攻城协助的城内门派(玩家攻城时由战斗系统查询消费)

---

### 函数 `JoinCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Residency" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |
| `false` | `bool bForced =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool JoinCity(FGuid CityGuid, FGuid ForceGuid, bool bForced = false);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 门派进驻城市(bForced=true 为驱逐安置等强制迁入,跳过申请流程但仍受容量/类型/驱逐记录限制)
> 限制:目标必须是 CenterCity;门派必须是无自有据点的 NPC 势力(玩家不会成为附属门派);不能是城主自己;未被该城驱逐过;有空位

---

### 函数 `LeaveCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Residency" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ForceGuid` | `FGuid` |
| `Reason` | [ESectLeaveCityReason](DominionTypes__ESectLeaveCityReason.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool LeaveCity(FGuid ForceGuid, ESectLeaveCityReason Reason);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 门派离城(内部/外部通用)

---

### 函数 `RequestMoveIn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Residency" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool RequestMoveIn(FGuid CityGuid, FGuid ForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 门派申请迁入某城(进待批列表;NPC 城主在治理周期决策,玩家城主走 Approve/Reject)

---

### 函数 `ApproveMoveIn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Residency" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool ApproveMoveIn(FGuid CityGuid, FGuid ForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 批准迁入(玩家城主 UI 调;满员时返回 false 无法批准)

---

### 函数 `RejectMoveIn`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Residency" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Residency") bool RejectMoveIn(FGuid CityGuid, FGuid ForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 拒绝迁入

---

### 函数 `ExpelSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Governance" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Governance") bool ExpelSect(FGuid CityGuid, FGuid ForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 驱逐:逐出本城并记录驱逐;被迫迁往未驱逐过它的城市,无处可去转为流浪门派;降低同城其他门派忠诚

---

### 函数 `RaiseTaxOnSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Governance" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `ForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Governance") bool RaiseTaxOnSect(FGuid CityGuid, FGuid ForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 加税:提高该门派缴税比例;不产生驱逐记录,但降低忠诚/提升反水风险

---

### 函数 `QueryLordAttackPermission`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|PlayerAttack" |
| 返回类型 | [ELordAttackPermission](DominionTypes__ELordAttackPermission.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|PlayerAttack") ELordAttackPermission QueryLordAttackPermission(FGuid CityGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 查询城主对玩家攻打城内门派的态度(默许/勉强同意/拒绝;按城主与玩家关系档位)

---

### 函数 `CanPlayerAttackResidentSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Dominion|PlayerAttack" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Dominion|PlayerAttack") bool CanPlayerAttackResidentSect(FGuid CityGuid, FGuid TargetForceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 玩家是否可攻打该城内门派(玩家为本城城主时不可攻打,仅能驱逐)

---

### 函数 `PlayerRequestAttackResidentSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|PlayerAttack" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |
| `bForceWhenRefused` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|PlayerAttack") bool PlayerRequestAttackResidentSect(FGuid CityGuid, FGuid TargetForceGuid, bool bForceWhenRefused);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 玩家发起攻打城内门派:按城主态度结算关系代价并放行
> @param bForceWhenRefused 城主拒绝时是否强行攻打(代价:与城主关系大幅恶化;城主门派不参战,玩家与目标单挑)
> @return 是否放行(false=被拒且未强攻);实际战斗由调用方发起,结束后调 NotifyPlayerAttackResidentSectResult

---

### 函数 `NotifyPlayerAttackResidentSectResult`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|PlayerAttack" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |
| `bPlayerWon` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|PlayerAttack") void NotifyPlayerAttackResidentSectResult(FGuid CityGuid, FGuid TargetForceGuid, bool bPlayerWon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 玩家攻打城内门派的胜负结算:胜=吞并逐出+夺取部分资源;败=目标士气/忠诚提升

---

### 函数 `NotifyPlayerAttackWanderingSectResult`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|PlayerAttack" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TargetForceGuid` | `FGuid` |
| `bPlayerWon` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|PlayerAttack") void NotifyPlayerAttackWanderingSectResult(FGuid TargetForceGuid, bool bPlayerWon);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 玩家攻打流浪门派的胜负结算(无关系限制):胜=灭门;败=继续流窜

---

### 函数 `GiveGiftToResidentSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Diplomacy" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Diplomacy") bool GiveGiftToResidentSect(FGuid CityGuid, FGuid TargetForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 送礼:消耗玩家门派资金,提升与该门派好感

---

### 函数 `RequestIntelFromSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Diplomacy" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |
| `OutIntel` | [FDominionIntelInfo](DominionTypes__FDominionIntelInfo.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Diplomacy") bool RequestIntelFromSect(FGuid CityGuid, FGuid TargetForceGuid, FDominionIntelInfo& OutIntel);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 索取情报:关系达标返回所在城市的情报快照

---

### 函数 `RequestSiegeAssistFromSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Diplomacy" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Diplomacy") bool RequestSiegeAssistFromSect(FGuid CityGuid, FGuid TargetForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 请求其在玩家攻城时协助(关系达标后挂承诺标记,战斗系统经 GetAssistPledgedSects 消费)

---

### 函数 `AppeaseResidentSect`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion|Diplomacy" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `TargetForceGuid` | `FGuid` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion|Diplomacy") bool AppeaseResidentSect(FGuid CityGuid, FGuid TargetForceGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 安抚:消耗资金提升该门派忠诚度(主要供玩家城主稳定城内门派)

---

### 函数 `SetCityTributeRatio`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CityGuid` | `FGuid` |
| `NewRatio` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion") void SetCityTributeRatio(FGuid CityGuid, float NewRatio);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 设置城镇的税率

---

### 函数 `ResidentSectPayTaxationInCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dominion" |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `City` | [AWorldPlace](../../WorldSystem/WorldPlace__AWorldPlace.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dominion") float ResidentSectPayTaxationInCity(AWorldPlace* City);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Resident Sect Pay Taxation In City 字段。

---

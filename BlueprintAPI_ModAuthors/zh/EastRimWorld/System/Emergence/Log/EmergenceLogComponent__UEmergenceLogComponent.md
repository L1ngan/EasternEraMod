# `class` `UEmergenceLogComponent`

**源码头文件:** `EastRimWorld/System/Emergence/Log/EmergenceLogComponent.h`

---

## 功能说明（来自头文件注释）

> 涌现系统专有日志组件(仿 UCommonLogComponent, 挂 ASaveGameDataActor, ISAVIOR 入档)。

## 蓝图暴露变量

### 属性 `Entries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)> |
| 反射说明符 | BlueprintReadOnly, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") TArray<FEmergenceLogEntry> Entries;` |

**说明:**

> 日志条目(滚动: 超 MaxEntries 则丢最旧一条; 入档)

---

### 属性 `MaxEntries`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="EmergenceLog" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EmergenceLog") int32 MaxEntries = 50;` |

**说明:**

> [需求3] 滚动上限: 超过则最旧条目滚出(= 过期)。<=0 视为不限

---

### 属性 `OnEmergenceLogAdded`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnEmergenceLogAdded` |
| 反射说明符 | BlueprintAssignable, Category="EmergenceLog" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "EmergenceLog") FOnEmergenceLogAdded OnEmergenceLogAdded;` |

**说明:**

> On Emergence Log Added 事件或回调。

---

### 属性 `OnLogLinkClicked`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnEmergenceLogLinkClicked` |
| 反射说明符 | BlueprintAssignable, Category="EmergenceLog" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "EmergenceLog") FOnEmergenceLogLinkClicked OnLogLinkClicked;` |

**说明:**

> 日志超链接被点击(由专用装饰器 UEmergenceLogHyperlinkDecorator 解析转换后广播载荷结构体)。
>  按 Payload.LinkType 分支: JumpToCity/OpenDiscipleSelect(用 TargetGuids) / TriggerDialogue(用 DialogueID)

---

### 属性 `OnLogLinkHovered`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnEmergenceLogLinkHovered` |
| 反射说明符 | BlueprintAssignable, Category="Emergence|Log" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Emergence|Log") FOnEmergenceLogLinkHovered OnLogLinkHovered;` |

**说明:**

> 日志超链接悬浮进入/离开(载荷同点击; bHovered=true 进入/false 离开)。UI 绑此弹/收信息浮窗(位置自取鼠标坐标)

---

## 蓝图暴露函数

### 函数 `AddLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Content` | `const FText&` |
| `EventID` | `FName` |
| `EventInstanceGuid` | `const FGuid&` |
| `EventStage` | `int32` |
| `ActorGuids` | `const TArray<FGuid>&` |
| `Actions` | const TArray<[FEmergenceLogAction](../Data/EmergenceTypes__FEmergenceLogAction.md)>& |
| `ExplicitLogGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") FGuid AddLog(const FText& Content, FName EventID, const FGuid& EventInstanceGuid, int32 EventStage, const TArray<FGuid>& ActorGuids, const TArray<FEmergenceLogAction>& Actions, const FGuid& ExplicitLogGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 记录一条涌现日志(打时间戳 + 计算玩家相关性 + 采样事件阶段 + 存点击动作 + 滚动裁剪)。返回本条 LogGuid(失败返回无效)。
>  ExplicitLogGuid 有效时用作本条 LogGuid(供调用方先生成 guid 埋进文本内的对话超链接再写日志), 无效则自动生成。

---

### 函数 `AddEmergenceLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `FGuid` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Content` | `const FText&` |
| `EventID` | `FName` |
| `EventInstanceGuid` | `const FGuid&` |
| `EventStage` | `int32` |
| `ActorGuids` | `const TArray<FGuid>&` |
| `Actions` | const TArray<[FEmergenceLogAction](../Data/EmergenceTypes__FEmergenceLogAction.md)>& |
| `ExplicitLogGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") static FGuid AddEmergenceLog(const FText& Content, FName EventID, const FGuid& EventInstanceGuid, int32 EventStage, const TArray<FGuid>& ActorGuids, const TArray<FEmergenceLogAction>& Actions, const FGuid& ExplicitLogGuid);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 便捷静态口: 写涌现日志到 ASaveGameDataActor::EmergenceLogComponent(组件未就绪则静默跳过, 返回无效 Guid)。

---

### 函数 `FindLogsByEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventInstanceGuid` | `const FGuid&` |
| `OutEntries` | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool FindLogsByEvent(const FGuid& EventInstanceGuid, TArray<FEmergenceLogEntry>& OutEntries) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [需求2/3] 由事件实例 Guid 取其所有日志; 返回是否找到(false = 已随滚动过期)

---

### 函数 `HasLogForEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventInstanceGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "EmergenceLog") bool HasLogForEvent(const FGuid& EventInstanceGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [需求3] 某事件是否还留有日志(false = 已过期)

---

### 函数 `IsLogActionValid`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LogGuid` | `const FGuid&` |
| `OutExpiredMessage` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool IsLogActionValid(const FGuid& LogGuid, FText& OutExpiredMessage) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 事件阶段有效性判定: 该日志的交互(超链接等)现在是否仍有效 ——
>  需同时满足 ① 日志未过期(仍在 Entries) ② 来源事件桥仍活跃 ③ 桥当前阶段 == 日志记录时的 EventStage ④ 桥认定为当前那条(guid)。
>  任一不满足即失效, 返回 false 且 OutExpiredMessage=通用过期提示(调参资产 LogActionExpiredText, UI 直接弹); 有效时为空。

---

### 函数 `ExecuteLogAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LogGuid` | `const FGuid&` |
| `ActionIndex` | `int32` |
| `OutMessage` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool ExecuteLogAction(const FGuid& LogGuid, int32 ActionIndex, FText& OutMessage);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行某条日志的第 ActionIndex 个点击动作(如触发对话)。先做阶段有效性判定(IsLogActionValid),
>  失效(日志过期 / 事件结束 / 阶段已推进)则不执行、返回 false 且 OutMessage=通用过期提示(调参资产 LogActionExpiredText)。UI 点超链接时调此。

---

### 函数 `SubmitLogActionDiscipleSelection`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LogGuid` | `const FGuid&` |
| `ActionIndex` | `int32` |
| `DiscipleGuids` | `const TArray<FGuid>&` |
| `OutMessage` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool SubmitLogActionDiscipleSelection(const FGuid& LogGuid, int32 ActionIndex, const TArray<FGuid>& DiscipleGuids, FText& OutMessage);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 选择弟子界面确认后回传选中的弟子(OpenDiscipleSelect 类动作用, 如论剑报名)。
>  先做有效性判定(日志未过期 + 事件仍处记录阶段), 再路由给来源事件桥处理(论剑→PlayerJoinSwordMeet)。
>  返回是否受理成功(失效/门槛不满足/桥不受理均 false); OutMessage=桥回传的成功/失败提示文案(UI 直接弹)

---

### 函数 `FindEventByLog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LogGuid` | `const FGuid&` |
| `OutEventID` | `FName&` |
| `OutInstanceGuid` | `FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool FindEventByLog(const FGuid& LogGuid, FName& OutEventID, FGuid& OutInstanceGuid) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [需求2] 由日志 Guid 反查其来源事件; 返回是否找到(false = 该日志已过期/不存在)

---

### 函数 `FindLogsByActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActorGuid` | `const FGuid&` |
| `OutEntries` | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") void FindLogsByActor(const FGuid& ActorGuid, TArray<FEmergenceLogEntry>& OutEntries) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [需求4] 取关联某演员的所有日志

---

### 函数 `GetPlayerRelatedLogs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutEntries` | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") void GetPlayerRelatedLogs(TArray<FEmergenceLogEntry>& OutEntries) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> [需求5] 取与玩家势力相关的所有日志

---

### 函数 `GetAllLogs`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="EmergenceLog" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutEntries` | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)>& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "EmergenceLog") void GetAllLogs(TArray<FEmergenceLogEntry>& OutEntries) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get All Logs。

---

### 函数 `ParseLinkPayload`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InWid` | `const FString&` |
| `OutPayload` | [FEmergenceLogLinkPayload](EmergenceLogComponent__FEmergenceLogLinkPayload.md)& |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") static bool ParseLinkPayload(const FString& InWid, FEmergenceLogLinkPayload& OutPayload);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 解析日志富文本超链接载荷并转换为广播结构体:
>  "Place:Guid"→JumpToCity / "Char:Guid"→OpenDiscipleSelect / "Dialogue:日志Guid,动作序号"→TriggerDialogue / "Item:ID,类型"→ShowItemInfo。
>  Guid 类载荷支持多个(逗号分隔)。未知前缀(如暂无动作的 Force)返回 false 不广播

---

### 函数 `ResolveActorInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActorGuid` | `const FGuid&` |
| `OutType` | `FName&` |
| `OutDisplayName` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool ResolveActorInfo(const FGuid& ActorGuid, FName& OutType, FText& OutDisplayName) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 识别关联演员: 判定类型(Place/Force/Char)并取显示名(UI 按 Entry.ActorGuids 生成可点击按钮/chips 用)

---

### 函数 `ClearAll`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EmergenceLog" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") void ClearAll();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 执行 Clear All 操作。

---

### 函数 `IsActorPlayerRelated`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="EmergenceLog" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ActorGuid` | `const FGuid&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "EmergenceLog") bool IsActorPlayerRelated(const FGuid& ActorGuid) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> [需求5] 判定单个演员 Guid 是否与玩家相关: 玩家势力本身 / 玩家拥有的城市 / 玩家弟子

---

# `class` `UEmergenceLogComponent`

**Source header:** `EastRimWorld/System/Emergence/Log/EmergenceLogComponent.h`

---

## Functional description (from header comments)

> 涌现系统专有日志组件(仿 UCommonLogComponent, 挂 ASaveGameDataActor, ISAVIOR 入档)。

## Blueprint-exposed variables

### Property `Entries`

| Field | Details |
|------|------|
| C++ type | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)> |
| Reflection specifiers | BlueprintReadOnly, Category="EmergenceLog" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. Field participates in **SaveGame** serialization. |
| Original declaration (excerpt) | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "EmergenceLog") TArray<FEmergenceLogEntry> Entries;` |

**Notes:**

> 日志条目(滚动: 超 MaxEntries 则丢最旧一条; 入档)

---

### Property `MaxEntries`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="EmergenceLog" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "EmergenceLog") int32 MaxEntries = 50;` |

**Notes:**

> [需求3] 滚动上限: 超过则最旧条目滚出(= 过期)。<=0 视为不限

---

### Property `OnEmergenceLogAdded`

| Field | Details |
|------|------|
| C++ type | `FOnEmergenceLogAdded` |
| Reflection specifiers | BlueprintAssignable, Category="EmergenceLog" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "EmergenceLog") FOnEmergenceLogAdded OnEmergenceLogAdded;` |

**Notes:**

> On Emergence Log Added event or callback.

---

### Property `OnLogLinkClicked`

| Field | Details |
|------|------|
| C++ type | `FOnEmergenceLogLinkClicked` |
| Reflection specifiers | BlueprintAssignable, Category="EmergenceLog" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "EmergenceLog") FOnEmergenceLogLinkClicked OnLogLinkClicked;` |

**Notes:**

> 日志超链接被点击(由专用装饰器 UEmergenceLogHyperlinkDecorator 解析转换后广播载荷结构体)。
>  按 Payload.LinkType 分支: JumpToCity/OpenDiscipleSelect(用 TargetGuids) / TriggerDialogue(用 DialogueID)

---

### Property `OnLogLinkHovered`

| Field | Details |
|------|------|
| C++ type | `FOnEmergenceLogLinkHovered` |
| Reflection specifiers | BlueprintAssignable, Category="Emergence|Log" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Emergence|Log") FOnEmergenceLogLinkHovered OnLogLinkHovered;` |

**Notes:**

> 日志超链接悬浮进入/离开(载荷同点击; bHovered=true 进入/false 离开)。UI 绑此弹/收信息浮窗(位置自取鼠标坐标)

---

## Blueprint-exposed functions

### Function `AddLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Content` | `const FText&` |
| `EventID` | `FName` |
| `EventInstanceGuid` | `const FGuid&` |
| `EventStage` | `int32` |
| `ActorGuids` | `const TArray<FGuid>&` |
| `Actions` | const TArray<[FEmergenceLogAction](../Data/EmergenceTypes__FEmergenceLogAction.md)>& |
| `ExplicitLogGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") FGuid AddLog(const FText& Content, FName EventID, const FGuid& EventInstanceGuid, int32 EventStage, const TArray<FGuid>& ActorGuids, const TArray<FEmergenceLogAction>& Actions, const FGuid& ExplicitLogGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 记录一条涌现日志(打时间戳 + 计算玩家相关性 + 采样事件阶段 + 存点击动作 + 滚动裁剪)。返回本条 LogGuid(失败返回无效)。
>  ExplicitLogGuid 有效时用作本条 LogGuid(供调用方先生成 guid 埋进文本内的对话超链接再写日志), 无效则自动生成。

---

### Function `AddEmergenceLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `FGuid` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `Content` | `const FText&` |
| `EventID` | `FName` |
| `EventInstanceGuid` | `const FGuid&` |
| `EventStage` | `int32` |
| `ActorGuids` | `const TArray<FGuid>&` |
| `Actions` | const TArray<[FEmergenceLogAction](../Data/EmergenceTypes__FEmergenceLogAction.md)>& |
| `ExplicitLogGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") static FGuid AddEmergenceLog(const FText& Content, FName EventID, const FGuid& EventInstanceGuid, int32 EventStage, const TArray<FGuid>& ActorGuids, const TArray<FEmergenceLogAction>& Actions, const FGuid& ExplicitLogGuid);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 便捷静态口: 写涌现日志到 ASaveGameDataActor::EmergenceLogComponent(组件未就绪则静默跳过, 返回无效 Guid)。

---

### Function `FindLogsByEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventInstanceGuid` | `const FGuid&` |
| `OutEntries` | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool FindLogsByEvent(const FGuid& EventInstanceGuid, TArray<FEmergenceLogEntry>& OutEntries) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [需求2/3] 由事件实例 Guid 取其所有日志; 返回是否找到(false = 已随滚动过期)

---

### Function `HasLogForEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventInstanceGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "EmergenceLog") bool HasLogForEvent(const FGuid& EventInstanceGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [需求3] 某事件是否还留有日志(false = 已过期)

---

### Function `IsLogActionValid`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LogGuid` | `const FGuid&` |
| `OutExpiredMessage` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool IsLogActionValid(const FGuid& LogGuid, FText& OutExpiredMessage) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 事件阶段有效性判定: 该日志的交互(超链接等)现在是否仍有效 ——
>  需同时满足 ① 日志未过期(仍在 Entries) ② 来源事件桥仍活跃 ③ 桥当前阶段 == 日志记录时的 EventStage ④ 桥认定为当前那条(guid)。
>  任一不满足即失效, 返回 false 且 OutExpiredMessage=通用过期提示(调参资产 LogActionExpiredText, UI 直接弹); 有效时为空。

---

### Function `ExecuteLogAction`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LogGuid` | `const FGuid&` |
| `ActionIndex` | `int32` |
| `OutMessage` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool ExecuteLogAction(const FGuid& LogGuid, int32 ActionIndex, FText& OutMessage);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 执行某条日志的第 ActionIndex 个点击动作(如触发对话)。先做阶段有效性判定(IsLogActionValid),
>  失效(日志过期 / 事件结束 / 阶段已推进)则不执行、返回 false 且 OutMessage=通用过期提示(调参资产 LogActionExpiredText)。UI 点超链接时调此。

---

### Function `SubmitLogActionDiscipleSelection`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LogGuid` | `const FGuid&` |
| `ActionIndex` | `int32` |
| `DiscipleGuids` | `const TArray<FGuid>&` |
| `OutMessage` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool SubmitLogActionDiscipleSelection(const FGuid& LogGuid, int32 ActionIndex, const TArray<FGuid>& DiscipleGuids, FText& OutMessage);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 选择弟子界面确认后回传选中的弟子(OpenDiscipleSelect 类动作用, 如论剑报名)。
>  先做有效性判定(日志未过期 + 事件仍处记录阶段), 再路由给来源事件桥处理(论剑→PlayerJoinSwordMeet)。
>  返回是否受理成功(失效/门槛不满足/桥不受理均 false); OutMessage=桥回传的成功/失败提示文案(UI 直接弹)

---

### Function `FindEventByLog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `LogGuid` | `const FGuid&` |
| `OutEventID` | `FName&` |
| `OutInstanceGuid` | `FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool FindEventByLog(const FGuid& LogGuid, FName& OutEventID, FGuid& OutInstanceGuid) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [需求2] 由日志 Guid 反查其来源事件; 返回是否找到(false = 该日志已过期/不存在)

---

### Function `FindLogsByActor`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActorGuid` | `const FGuid&` |
| `OutEntries` | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") void FindLogsByActor(const FGuid& ActorGuid, TArray<FEmergenceLogEntry>& OutEntries) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [需求4] 取关联某演员的所有日志

---

### Function `GetPlayerRelatedLogs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutEntries` | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") void GetPlayerRelatedLogs(TArray<FEmergenceLogEntry>& OutEntries) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> [需求5] 取与玩家势力相关的所有日志

---

### Function `GetAllLogs`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="EmergenceLog" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutEntries` | TArray<[FEmergenceLogEntry](EmergenceLogComponent__FEmergenceLogEntry.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "EmergenceLog") void GetAllLogs(TArray<FEmergenceLogEntry>& OutEntries) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Gets or queries Get All Logs.

---

### Function `ParseLinkPayload`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `InWid` | `const FString&` |
| `OutPayload` | [FEmergenceLogLinkPayload](EmergenceLogComponent__FEmergenceLogLinkPayload.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") static bool ParseLinkPayload(const FString& InWid, FEmergenceLogLinkPayload& OutPayload);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 解析日志富文本超链接载荷并转换为广播结构体:
>  "Place:Guid"→JumpToCity / "Char:Guid"→OpenDiscipleSelect / "Dialogue:日志Guid,动作序号"→TriggerDialogue / "Item:ID,类型"→ShowItemInfo。
>  Guid 类载荷支持多个(逗号分隔)。未知前缀(如暂无动作的 Force)返回 false 不广播

---

### Function `ResolveActorInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActorGuid` | `const FGuid&` |
| `OutType` | `FName&` |
| `OutDisplayName` | `FText&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") bool ResolveActorInfo(const FGuid& ActorGuid, FName& OutType, FText& OutDisplayName) const;`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 识别关联演员: 判定类型(Place/Force/Char)并取显示名(UI 按 Entry.ActorGuids 生成可点击按钮/chips 用)

---

### Function `ClearAll`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="EmergenceLog" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "EmergenceLog") void ClearAll();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Executes the Clear All operation.

---

### Function `IsActorPlayerRelated`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintPure, Category="EmergenceLog" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ActorGuid` | `const FGuid&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintPure, Category = "EmergenceLog") bool IsActorPlayerRelated(const FGuid& ActorGuid) const;`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> [需求5] 判定单个演员 Guid 是否与玩家相关: 玩家势力本身 / 玩家拥有的城市 / 玩家弟子

---

# `class` `USteamWorkshopSubsystem`

**源码头文件:** `EastRimWorld/Mod/SteamWorkshopSubsystem.h`

---

## 功能说明（来自头文件注释）

> Steam 创意工坊 GameInstance 子系统，接收 Steam 回调并通过委托广播上传/下载/订阅/查询/成就统计等结果

## 蓝图暴露变量

### 属性 `OnWorkshopItemCreated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemCreated` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemCreated OnWorkshopItemCreated;` |

**说明:**

> 委托

---

### 属性 `OnWorkshopItemUpdateSubmitted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemUpdateSubmitted` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemUpdateSubmitted OnWorkshopItemUpdateSubmitted;` |

**说明:**

> Workshop 项目更新提交结果广播（结果码、是否需接受法律协议）

---

### 属性 `OnWorkshopItemInstalled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemInstalled` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemInstalled OnWorkshopItemInstalled;` |

**说明:**

> Workshop 项目安装完成时广播

---

### 属性 `OnWorkshopQueryCompleted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopQueryCompleted` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopQueryCompleted OnWorkshopQueryCompleted;` |

**说明:**

> Workshop 查询完成时广播（结果码、本次返回数量、总匹配数量）

---

### 属性 `OnWorkshopItemSubscribed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemSubscribed` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemSubscribed OnWorkshopItemSubscribed;` |

**说明:**

> Workshop 项目订阅结果广播（结果码、项目 ID）

---

### 属性 `OnWorkshopItemUnsubscribed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemUnsubscribed` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemUnsubscribed OnWorkshopItemUnsubscribed;` |

**说明:**

> Workshop 项目取消订阅结果广播（结果码、项目 ID）

---

### 属性 `OnWorkshopItemDeleted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemDeleted` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemDeleted OnWorkshopItemDeleted;` |

**说明:**

> Workshop 项目删除结果广播（结果码、项目 ID）

---

### 属性 `OnWorkshopPlaytimeTrackingStarted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopPlaytimeTrackingStarted` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopPlaytimeTrackingStarted OnWorkshopPlaytimeTrackingStarted;` |

**说明:**

> Workshop 项目游戏时间追踪开始的结果广播

---

### 属性 `OnWorkshopPlaytimeTrackingStopped`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopPlaytimeTrackingStopped` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopPlaytimeTrackingStopped OnWorkshopPlaytimeTrackingStopped;` |

**说明:**

> Workshop 项目游戏时间追踪停止的结果广播

---

### 属性 `OnWorkshopItemUpdateProgress`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemUpdateProgress` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemUpdateProgress OnWorkshopItemUpdateProgress;` |

**说明:**

> Workshop 项目上传（更新）进度广播（项目 ID、已处理/总字节数、进度百分比）

---

### 属性 `OnWorkshopItemDownloadProgress`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemDownloadProgress` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemDownloadProgress OnWorkshopItemDownloadProgress;` |

**说明:**

> Workshop 项目下载进度广播（项目 ID、已下载/总字节数、进度百分比）

---

### 属性 `OnWorkshopItemDetailsQueryCompleted`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnWorkshopItemDetailsQueryCompleted` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemDetailsQueryCompleted OnWorkshopItemDetailsQueryCompleted;` |

**说明:**

> Workshop 项目详细信息查询完成时广播（结果码、详情数组、查询类型）

---

### 属性 `OnUserStatsStored`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUserStatsStored` |
| 反射说明符 | BlueprintAssignable, Category="Steam Achievement" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Achievement") FOnUserStatsStored OnUserStatsStored;` |

**说明:**

> Steam 统计数据存储完成时广播

---

### 属性 `OnUserAchievementStored`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUserAchievementStored` |
| 反射说明符 | BlueprintAssignable, Category="Steam Achievement" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Achievement") FOnUserAchievementStored OnUserAchievementStored;` |

**说明:**

> Steam 成就存储完成时广播

---

### 属性 `OnUserStatsReceived`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUserStatsReceived` |
| 反射说明符 | BlueprintAssignable, Category="Steam Achievement" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Achievement") FOnUserStatsReceived OnUserStatsReceived;` |

**说明:**

> Steam 统计数据接收完成时广播（RequestCurrentStats 完成时触发）

---

### 属性 `OnSetUserItemVote`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnSetUserItemVote` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnSetUserItemVote OnSetUserItemVote;` |

**说明:**

> 设置用户对 Workshop 项目的评价（点赞/点踩）完成时广播

---

### 属性 `OnGetUserItemVote`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnGetUserItemVote` |
| 反射说明符 | BlueprintAssignable, Category="Steam Workshop" |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnGetUserItemVote OnGetUserItemVote;` |

**说明:**

> 获取用户对 Workshop 项目的评价结果时广播（项目 ID、是否点赞、是否点踩）

---

## 蓝图暴露函数

### 函数 `StartMonitoringDownloadProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") void StartMonitoringDownloadProgress(int64 PublishedFileId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 开始监听指定 Workshop 项目的下载进度
> @param PublishedFileId Workshop 项目 ID

---

### 函数 `StopMonitoringDownloadProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") void StopMonitoringDownloadProgress(int64 PublishedFileId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 停止监听指定 Workshop 项目的下载进度
> @param PublishedFileId Workshop 项目 ID

---

### 函数 `StopMonitoringAllDownloadProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") void StopMonitoringAllDownloadProgress();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 停止监听所有 Workshop 项目的下载进度

---

### 函数 `GetMonitoredDownloadItemsLen`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") int32 GetMonitoredDownloadItemsLen();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取下载列表长度

---

### 函数 `GetHaveUploadhandle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") bool GetHaveUploadhandle();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取是否有下载

---

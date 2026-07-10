# `class` `USteamWorkshopSubsystem`

**Source header:** `EastRimWorld/Mod/SteamWorkshopSubsystem.h`

---

## Functional description (from header comments)

> Steam Workshop GameInstance subsystem that receives Steam callbacks and broadcasts upload/download/subscription/query/achievement-stats results via delegates

## Blueprint-exposed variables

### Property `OnWorkshopItemCreated`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemCreated` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemCreated OnWorkshopItemCreated;` |

**Notes:**

> 委托

---

### Property `OnWorkshopItemUpdateSubmitted`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemUpdateSubmitted` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemUpdateSubmitted OnWorkshopItemUpdateSubmitted;` |

**Notes:**

> Broadcast with the result of submitting a Workshop item update (result code, whether the legal agreement must be accepted)

---

### Property `OnWorkshopItemInstalled`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemInstalled` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemInstalled OnWorkshopItemInstalled;` |

**Notes:**

> Broadcast when a Workshop item has been installed

---

### Property `OnWorkshopQueryCompleted`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopQueryCompleted` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopQueryCompleted OnWorkshopQueryCompleted;` |

**Notes:**

> Broadcast when a Workshop query completes (result code, number of results returned, total matching results)

---

### Property `OnWorkshopItemSubscribed`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemSubscribed` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemSubscribed OnWorkshopItemSubscribed;` |

**Notes:**

> Broadcast with the result of subscribing to a Workshop item (result code, item ID)

---

### Property `OnWorkshopItemUnsubscribed`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemUnsubscribed` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemUnsubscribed OnWorkshopItemUnsubscribed;` |

**Notes:**

> Broadcast with the result of unsubscribing from a Workshop item (result code, item ID)

---

### Property `OnWorkshopItemDeleted`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemDeleted` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemDeleted OnWorkshopItemDeleted;` |

**Notes:**

> Broadcast with the result of deleting a Workshop item (result code, item ID)

---

### Property `OnWorkshopPlaytimeTrackingStarted`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopPlaytimeTrackingStarted` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopPlaytimeTrackingStarted OnWorkshopPlaytimeTrackingStarted;` |

**Notes:**

> Broadcast with the result of starting Workshop item playtime tracking

---

### Property `OnWorkshopPlaytimeTrackingStopped`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopPlaytimeTrackingStopped` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopPlaytimeTrackingStopped OnWorkshopPlaytimeTrackingStopped;` |

**Notes:**

> Broadcast with the result of stopping Workshop item playtime tracking

---

### Property `OnWorkshopItemUpdateProgress`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemUpdateProgress` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemUpdateProgress OnWorkshopItemUpdateProgress;` |

**Notes:**

> Broadcast for Workshop item upload (update) progress (item ID, bytes processed/total, progress percent)

---

### Property `OnWorkshopItemDownloadProgress`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemDownloadProgress` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemDownloadProgress OnWorkshopItemDownloadProgress;` |

**Notes:**

> Broadcast for Workshop item download progress (item ID, bytes downloaded/total, progress percent)

---

### Property `OnWorkshopItemDetailsQueryCompleted`

| Field | Details |
|------|------|
| C++ type | `FOnWorkshopItemDetailsQueryCompleted` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnWorkshopItemDetailsQueryCompleted OnWorkshopItemDetailsQueryCompleted;` |

**Notes:**

> Broadcast when a Workshop item details query completes (result code, details array, query type)

---

### Property `OnUserStatsStored`

| Field | Details |
|------|------|
| C++ type | `FOnUserStatsStored` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Achievement" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Achievement") FOnUserStatsStored OnUserStatsStored;` |

**Notes:**

> Broadcast when Steam user stats have been stored

---

### Property `OnUserAchievementStored`

| Field | Details |
|------|------|
| C++ type | `FOnUserAchievementStored` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Achievement" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Achievement") FOnUserAchievementStored OnUserAchievementStored;` |

**Notes:**

> Broadcast when a Steam achievement has been stored

---

### Property `OnUserStatsReceived`

| Field | Details |
|------|------|
| C++ type | `FOnUserStatsReceived` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Achievement" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Achievement") FOnUserStatsReceived OnUserStatsReceived;` |

**Notes:**

> Broadcast when Steam user stats are received (triggered when RequestCurrentStats completes)

---

### Property `OnSetUserItemVote`

| Field | Details |
|------|------|
| C++ type | `FOnSetUserItemVote` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnSetUserItemVote OnSetUserItemVote;` |

**Notes:**

> Broadcast when setting the user's vote (up/down) on a Workshop item completes

---

### Property `OnGetUserItemVote`

| Field | Details |
|------|------|
| C++ type | `FOnGetUserItemVote` |
| Reflection specifiers | BlueprintAssignable, Category="Steam Workshop" |
| Blueprint semantics | **Multicast delegate**: bind in Blueprint with **Bind / Add**. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintAssignable, Category = "Steam Workshop") FOnGetUserItemVote OnGetUserItemVote;` |

**Notes:**

> Broadcast when the user's vote on a Workshop item is retrieved (item ID, voted up, voted down)

---

## Blueprint-exposed functions

### Function `StartMonitoringDownloadProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") void StartMonitoringDownloadProgress(int64 PublishedFileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开始监听指定 Workshop 项目的下载进度
> @param PublishedFileId Workshop 项目 ID

---

### Function `StopMonitoringDownloadProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") void StopMonitoringDownloadProgress(int64 PublishedFileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 停止监听指定 Workshop 项目的下载进度
> @param PublishedFileId Workshop 项目 ID

---

### Function `StopMonitoringAllDownloadProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") void StopMonitoringAllDownloadProgress();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 停止监听所有 Workshop 项目的下载进度

---

### Function `GetMonitoredDownloadItemsLen`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") int32 GetMonitoredDownloadItemsLen();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取下载列表长度

---

### Function `GetHaveUploadhandle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") bool GetHaveUploadhandle();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取是否有下载

---

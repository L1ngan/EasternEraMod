# `class` `USteamWorkshopLibrary`

**Source header:** `EastRimWorld/Mod/SteamWorkshopLibrary.h`

---

## Functional description (from header comments)

> Blueprint function library for Steam Workshop (create/upload/subscribe/download/query/vote on items)

## Blueprint-exposed functions

### Function `CreateWorkshopItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConsumerAppId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void CreateWorkshopItem(int32 ConsumerAppId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 创建新的 Workshop 项目 
> @param ConsumerAppId 游戏的 Steam App ID，可以使用 GetSteamAppId() 获取当前游戏的 App ID
> @param FileType Workshop 文件类型（0 = Community）
> 
> 注意：这是一个异步操作，创建结果会通过 SteamWorkshopSubsystem 的 OnWorkshopItemCreated 委托返回
> 蓝图需要订阅 USteamWorkshopSubsystem::OnWorkshopItemCreated 来获取创建结果和 PublishedFileId

---

### Function `SetWorkshopItemTitle`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UpdateHandle` | `int64` |
| `Title` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemTitle(int64 UpdateHandle, const FString& Title);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新 Workshop 项目 - 设置标题
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param Title 项目标题
> @return 是否设置成功

---

### Function `SetWorkshopItemDescription`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UpdateHandle` | `int64` |
| `Description` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemDescription(int64 UpdateHandle, const FString& Description);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新 Workshop 项目 - 设置描述
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param Description 项目描述
> @return 是否设置成功

---

### Function `SetWorkshopItemUpdateFile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UpdateHandle` | `int64` |
| `ContentFolder` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemUpdateFile(int64 UpdateHandle, const FString& ContentFolder);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新 Workshop 项目 - 设置内容文件夹
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param ContentFolder 内容文件夹路径（包含要上传的 Mod 文件）
> @return 是否设置成功

---

### Function `SetWorkshopItemPreviewFile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UpdateHandle` | `int64` |
| `PreviewFile` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemPreviewFile(int64 UpdateHandle, const FString& PreviewFile);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新 Workshop 项目 - 设置预览图
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param PreviewFile 预览图片文件路径
> @return 是否设置成功

---

### Function `SetWorkshopItemOtherPreviewFile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UpdateHandle` | `int64` |
| `OtherPreviewFile` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemOtherPreviewFile(int64 UpdateHandle, const FString& OtherPreviewFile);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新 Workshop 项目 - 设置预览图
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param OtherPreviewFile 预览图片文件路径
> @return 是否设置成功

---

### Function `SetWorkshopItemTags`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UpdateHandle` | `int64` |
| `Tags` | `const TArray<FString>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemTags(int64 UpdateHandle, const TArray<FString>& Tags);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新 Workshop 项目 - 设置标签
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param Tags 标签数组
> @return 是否设置成功

---

### Function `SetWorkshopItemVisibility`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UpdateHandle` | `int64` |
| `Visibility` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemVisibility(int64 UpdateHandle, int32 Visibility);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 更新 Workshop 项目 - 设置可见性
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param Visibility 可见性：0=公开，1=仅好友，2=私有
> @return 是否设置成功

---

### Function `SubmitWorkshopItemUpdate`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `UpdateHandle` | `int64` |
| `ChangeNote` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void SubmitWorkshopItemUpdate(int64 UpdateHandle, const FString& ChangeNote);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 提交 Workshop 项目更新
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param ChangeNote 更新说明（描述本次更新的内容）
> 
> 注意：这是一个异步操作，提交结果会通过 SteamWorkshopSubsystem 的 OnWorkshopItemUpdateSubmitted 委托返回
> 蓝图需要订阅 USteamWorkshopSubsystem::OnWorkshopItemUpdateSubmitted 来获取提交结果
> 上传进度可以通过 GetWorkshopItemUpdateProgress 函数查询

---

### Function `GetWorkshopItemUpdateProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |
| `OutBytesProcessed` | `int64&` |
| `OutBytesTotal` | `int64&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool GetWorkshopItemUpdateProgress(int64 PublishedFileId, int64& OutBytesProcessed, int64& OutBytesTotal);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取 Workshop 项目更新上传进度
> @param PublishedFileId Workshop 项目 ID
> @param OutBytesProcessed 输出：已上传字节数
> @param OutBytesTotal 输出：总字节数
> @return 是否正在上传（如果返回 false，表示没有正在进行的上传）

---

### Function `UploadModToWorkshop`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `int64` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ConsumerAppId` | `int32` |
| `PublishedFileId` | `int64` |
| `Title` | `const FString&` |
| `Description` | `const FString&` |
| `ContentFolder` | `const FString&` |
| `PreviewFile` | `const FString&` |
| `OtherPreviewFiles` | `const TArray<FString>&` |
| `ChangeNote` | `const FString&` |
| `Tags` | `const TArray<FString>&` |
| `0` | `int32 Visibility =` |
| `0` | `int32 FileType =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static int64 UploadModToWorkshop( int32 ConsumerAppId, int64 PublishedFileId, const FString& Title, const FString& Description, const FString& ContentFolder, const FString& PreviewFile, const TArray<FString>& OtherPreviewFiles, const FString& ChangeNote, const TArray<FString>& Tags, int32 Visibility = 0, int32 FileType = 0 );`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 上传 Mod 到 Workshop（创建新项目或更新现有项目）
> @param ConsumerAppId 游戏的 Steam App ID，可以使用 GetSteamAppId() 获取当前游戏的 App ID，或传入 0 使用当前游戏 App ID
> @param PublishedFileId 如果为0则创建新项目，否则更新现有项目
> @param Title 项目标题
> @param Description 项目描述
> @param ContentFolder 内容文件夹路径（包含要上传的 Mod 文件）
> @param PreviewFile 主要预览图片文件路径（可选）
> @param OtherPreviewFile 其他预览图片文件路径（可选）
> @param ChangeNote 更新说明（描述本次更新的内容，可选）
> @param Tags 标签数组（可选）
> @param Visibility 可见性：0=公开，1=仅好友，2=私有（默认：0）
> @param FileType Workshop 文件类型：0=Community（默认：0）
> @return 返回 PublishedFileId，如果创建新项目则返回 0（需要通过回调获取）

---

### Function `DownloadWorkshopItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |
| `false` | `bool bHighPriority =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool DownloadWorkshopItem(int64 PublishedFileId, bool bHighPriority = false);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 下载 Workshop 项目
> @param PublishedFileId Workshop 项目 ID
> @param bHighPriority 是否高优先级下载
> @return 是否开始下载
> 
> 注意：要获取下载进度，需要调用 SteamWorkshopSubsystem::StartMonitoringDownloadProgress 开始监听
> 下载进度会通过 SteamWorkshopSubsystem::OnWorkshopItemDownloadProgress 委托广播

---

### Function `SubscribeWorkshopItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void SubscribeWorkshopItem(int64 PublishedFileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 订阅 Workshop 项目
> @param PublishedFileId Workshop 项目 ID
> 
> 注意：订阅后会自动开始下载。要获取下载进度，需要调用 SteamWorkshopSubsystem::StartMonitoringDownloadProgress 开始监听
> 下载进度会通过 SteamWorkshopSubsystem::OnWorkshopItemDownloadProgress 委托广播

---

### Function `UnsubscribeWorkshopItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void UnsubscribeWorkshopItem(int64 PublishedFileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 取消订阅 Workshop 项目
> @param PublishedFileId Workshop 项目 ID

---

### Function `GetSubscribedWorkshopItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `TArray<int64>` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static TArray<int64> GetSubscribedWorkshopItems();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取订阅的 Workshop 项目列表

---

### Function `GetNumSubscribedWorkshopItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static int32 GetNumSubscribedWorkshopItems();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取订阅的 Workshop 项目数量

---

### Function `GetWorkshopItemInstallInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |
| `OutFolderPath` | `FString&` |
| `OutSizeOnDisk` | `int32&` |
| `OutTimeStamp` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool GetWorkshopItemInstallInfo(int64 PublishedFileId, FString& OutFolderPath, int32& OutSizeOnDisk, int32& OutTimeStamp);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取 Workshop 项目安装信息
> @param PublishedFileId Workshop 项目 ID
> @param OutFolderPath 输出：安装文件夹路径
> @param OutSizeOnDisk 输出：磁盘占用大小（字节）
> @param OutTimeStamp 输出：安装时间戳
> @return 是否获取成功

---

### Function `GetWorkshopItemDownloadPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static FString GetWorkshopItemDownloadPath(int64 PublishedFileId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取 Workshop 项目下载路径（仅返回路径）
> @param PublishedFileId Workshop 项目 ID
> @return 下载文件夹路径，如果未安装则返回空字符串

---

### Function `GetWorkshopContentFolderPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AppId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static FString GetWorkshopContentFolderPath(int32 AppId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取指定 AppID 的 Workshop 下载文件夹路径
> @param AppId Steam App ID
> @return Workshop 内容文件夹路径，格式：<SteamRoot>/steamapps/workshop/content/<AppId>

---

### Function `IsWorkshopItemInstalled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool IsWorkshopItemInstalled(int64 PublishedFileId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查 Workshop 项目是否已安装
> @param PublishedFileId Workshop 项目 ID
> @return 是否已安装

---

### Function `GetWorkshopItemDownloadProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |
| `OutBytesDownloaded` | `int32&` |
| `OutBytesTotal` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool GetWorkshopItemDownloadProgress(int64 PublishedFileId, int32& OutBytesDownloaded, int32& OutBytesTotal);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取 Workshop 项目下载进度
> @param PublishedFileId Workshop 项目 ID
> @param OutBytesDownloaded 输出：已下载字节数
> @param OutBytesTotal 输出：总字节数
> @return 是否正在下载

---

### Function `GetWorkshopItemState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | [EWorkshopItemState](SteamWorkshopLibrary__EWorkshopItemState.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static EWorkshopItemState GetWorkshopItemState(int64 PublishedFileId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取 Workshop 项目状态
> @param PublishedFileId Workshop 项目 ID
> @return 项目状态（订阅、已安装、需要更新等）

---

### Function `QueryWorkshopItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `QueryType` | [ESteamQueryType](SteamWorkshopLibrary__ESteamQueryType.md) |
| `1` | `int32 Page =` |
| `(unnamed / type only)` | `FString matchTag=""` |
| `(unnamed / type only)` | `FString FileName=""` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void QueryWorkshopItems(ESteamQueryType QueryType, int32 Page = 1, FString matchTag="", FString FileName="");`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询 Workshop 项目
> @param QueryType 查询类型（最受欢迎、最新、评分最高等）
> @param Page 页码（从 1 开始）

---

### Function `QuerySubscribedWorkshopItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void QuerySubscribedWorkshopItems();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询用户订阅的 Workshop 项目

---

### Function `QueryUserCreatedWorkshopItems`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void QueryUserCreatedWorkshopItems();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询用户创建的 Workshop 项目

---

### Function `QueryWorkshopItemDetails`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void QueryWorkshopItemDetails(int64 PublishedFileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 查询单个 Workshop 项目的详细信息
> @param PublishedFileId Workshop 项目 ID
> 
> 注意：这是一个异步操作，查询结果会通过 SteamWorkshopSubsystem 的 OnWorkshopItemDetailsQueryCompleted 委托返回
> 蓝图需要订阅 USteamWorkshopSubsystem::OnWorkshopItemDetailsQueryCompleted 来获取详细信息

---

### Function `DeleteWorkshopItem`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void DeleteWorkshopItem(int64 PublishedFileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 删除 Workshop 项目
> @param PublishedFileId Workshop 项目 ID（必须是当前用户创建的项目）

---

### Function `OpenWorkshopItemPage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void OpenWorkshopItemPage(int64 PublishedFileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 打开 Workshop 项目页面
> @param PublishedFileId Workshop 项目 ID

---

### Function `OpenWorkshopHomePage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AppId` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void OpenWorkshopHomePage(int32 AppId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 打开 Workshop 主页
> @param AppId Steam App ID（传入 0 使用当前游戏的 App ID）

---

### Function `SetUserItemVote`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |
| `bVoteUp` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void SetUserItemVote(int64 PublishedFileId,bool bVoteUp);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 对Workshop项目进行评价
> @param PublishedFileId Workshop 项目 ID
> * @param bVoteUp 赞或踩

---

### Function `GetUserItemVote`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileId` | `int64` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void GetUserItemVote(int64 PublishedFileId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取自己对Workshop项目进行评价
> @param PublishedFileId Workshop 项目 ID
> * @param bVoteUp 赞或踩

---

### Function `StartWorkshopItemPlaytimeTracking`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileIds` | `const TArray<int64>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void StartWorkshopItemPlaytimeTracking(const TArray<int64>& PublishedFileIds);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 开始追踪 Workshop 项目游戏时间
> @param PublishedFileIds Workshop 项目 ID 数组

---

### Function `StopWorkshopItemPlaytimeTracking`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PublishedFileIds` | `const TArray<int64>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void StopWorkshopItemPlaytimeTracking(const TArray<int64>& PublishedFileIds);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 停止追踪 Workshop 项目游戏时间
> @param PublishedFileIds Workshop 项目 ID 数组

---

### Function `StopAllWorkshopItemPlaytimeTracking`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void StopAllWorkshopItemPlaytimeTracking();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 停止追踪所有 Workshop 项目游戏时间

---

### Function `IsSteamUGCAvailable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool IsSteamUGCAvailable();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 检查 Steam UGC 是否可用

---

### Function `GetSteamAppId`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| Return type | `int32` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static int32 GetSteamAppId();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 获取当前应用的 App ID

---

### Function `OpenPreviewImageFileDialog`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DialogTitle` | `const FString&` |
| `DefaultPath` | `const FString&` |
| `OutErrorMessage` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static FString OpenPreviewImageFileDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutErrorMessage);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 通过 EasyFileDialog 打开文件对话框，选择 Workshop 预览图；通过校验后才返回路径。
> 限制：文件最大 1MB；仅 JPG/PNG；宽与高均不小于 512。

---

### Function `CheckCanChoseThisDir`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Workshop" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ContentFolder` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool CheckCanChoseThisDir(const FString& ContentFolder);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks whether the specified content folder can be chosen as the Workshop upload directory

---

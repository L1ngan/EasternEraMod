# `class` `USteamWorkshopLibrary`

**源码头文件：** `EastRimWorld/Mod/SteamWorkshopLibrary.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `CreateWorkshopItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ConsumerAppId` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void CreateWorkshopItem(int32 ConsumerAppId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建新的 Workshop 项目 
> @param ConsumerAppId 游戏的 Steam App ID，可以使用 GetSteamAppId() 获取当前游戏的 App ID
> @param FileType Workshop 文件类型（0 = Community）
> 
> 注意：这是一个异步操作，创建结果会通过 SteamWorkshopSubsystem 的 OnWorkshopItemCreated 委托返回
> 蓝图需要订阅 USteamWorkshopSubsystem::OnWorkshopItemCreated 来获取创建结果和 PublishedFileId

---

### 函数 `SetWorkshopItemTitle`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UpdateHandle` | `int64` |
| `Title` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemTitle(int64 UpdateHandle, const FString& Title);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新 Workshop 项目 - 设置标题
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param Title 项目标题
> @return 是否设置成功

---

### 函数 `SetWorkshopItemDescription`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UpdateHandle` | `int64` |
| `Description` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemDescription(int64 UpdateHandle, const FString& Description);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新 Workshop 项目 - 设置描述
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param Description 项目描述
> @return 是否设置成功

---

### 函数 `SetWorkshopItemUpdateFile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UpdateHandle` | `int64` |
| `ContentFolder` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemUpdateFile(int64 UpdateHandle, const FString& ContentFolder);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新 Workshop 项目 - 设置内容文件夹
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param ContentFolder 内容文件夹路径（包含要上传的 Mod 文件）
> @return 是否设置成功

---

### 函数 `SetWorkshopItemPreviewFile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UpdateHandle` | `int64` |
| `PreviewFile` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemPreviewFile(int64 UpdateHandle, const FString& PreviewFile);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新 Workshop 项目 - 设置预览图
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param PreviewFile 预览图片文件路径
> @return 是否设置成功

---

### 函数 `SetWorkshopItemOtherPreviewFile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UpdateHandle` | `int64` |
| `OtherPreviewFile` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemOtherPreviewFile(int64 UpdateHandle, const FString& OtherPreviewFile);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新 Workshop 项目 - 设置预览图
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param OtherPreviewFile 预览图片文件路径
> @return 是否设置成功

---

### 函数 `SetWorkshopItemTags`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UpdateHandle` | `int64` |
| `Tags` | `const TArray<FString>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemTags(int64 UpdateHandle, const TArray<FString>& Tags);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新 Workshop 项目 - 设置标签
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param Tags 标签数组
> @return 是否设置成功

---

### 函数 `SetWorkshopItemVisibility`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UpdateHandle` | `int64` |
| `Visibility` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool SetWorkshopItemVisibility(int64 UpdateHandle, int32 Visibility);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新 Workshop 项目 - 设置可见性
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param Visibility 可见性：0=公开，1=仅好友，2=私有
> @return 是否设置成功

---

### 函数 `SubmitWorkshopItemUpdate`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `UpdateHandle` | `int64` |
| `ChangeNote` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void SubmitWorkshopItemUpdate(int64 UpdateHandle, const FString& ChangeNote);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 提交 Workshop 项目更新
> @param UpdateHandle 更新句柄（从 CreateWorkshopItem 回调或 StartItemUpdate 获取）
> @param ChangeNote 更新说明（描述本次更新的内容）
> 
> 注意：这是一个异步操作，提交结果会通过 SteamWorkshopSubsystem 的 OnWorkshopItemUpdateSubmitted 委托返回
> 蓝图需要订阅 USteamWorkshopSubsystem::OnWorkshopItemUpdateSubmitted 来获取提交结果
> 上传进度可以通过 GetWorkshopItemUpdateProgress 函数查询

---

### 函数 `GetWorkshopItemUpdateProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |
| `OutBytesProcessed` | `int64&` |
| `OutBytesTotal` | `int64&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool GetWorkshopItemUpdateProgress(int64 PublishedFileId, int64& OutBytesProcessed, int64& OutBytesTotal);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取 Workshop 项目更新上传进度
> @param PublishedFileId Workshop 项目 ID
> @param OutBytesProcessed 输出：已上传字节数
> @param OutBytesTotal 输出：总字节数
> @return 是否正在上传（如果返回 false，表示没有正在进行的上传）

---

### 函数 `UploadModToWorkshop`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `int64` |
| 参数 | 见下表 |

| 参数名 | 类型 |
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

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static int64 UploadModToWorkshop( int32 ConsumerAppId, int64 PublishedFileId, const FString& Title, const FString& Description, const FString& ContentFolder, const FString& PreviewFile, const TArray<FString>& OtherPreviewFiles, const FString& ChangeNote, const TArray<FString>& Tags, int32 Visibility = 0, int32 FileType = 0 );`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

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

### 函数 `DownloadWorkshopItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |
| `false` | `bool bHighPriority =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool DownloadWorkshopItem(int64 PublishedFileId, bool bHighPriority = false);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 下载 Workshop 项目
> @param PublishedFileId Workshop 项目 ID
> @param bHighPriority 是否高优先级下载
> @return 是否开始下载
> 
> 注意：要获取下载进度，需要调用 SteamWorkshopSubsystem::StartMonitoringDownloadProgress 开始监听
> 下载进度会通过 SteamWorkshopSubsystem::OnWorkshopItemDownloadProgress 委托广播

---

### 函数 `SubscribeWorkshopItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void SubscribeWorkshopItem(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 订阅 Workshop 项目
> @param PublishedFileId Workshop 项目 ID
> 
> 注意：订阅后会自动开始下载。要获取下载进度，需要调用 SteamWorkshopSubsystem::StartMonitoringDownloadProgress 开始监听
> 下载进度会通过 SteamWorkshopSubsystem::OnWorkshopItemDownloadProgress 委托广播

---

### 函数 `UnsubscribeWorkshopItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void UnsubscribeWorkshopItem(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 取消订阅 Workshop 项目
> @param PublishedFileId Workshop 项目 ID

---

### 函数 `GetSubscribedWorkshopItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `TArray<int64>` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static TArray<int64> GetSubscribedWorkshopItems();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取订阅的 Workshop 项目列表

---

### 函数 `GetNumSubscribedWorkshopItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static int32 GetNumSubscribedWorkshopItems();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取订阅的 Workshop 项目数量

---

### 函数 `GetWorkshopItemInstallInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |
| `OutFolderPath` | `FString&` |
| `OutSizeOnDisk` | `int32&` |
| `OutTimeStamp` | `int32&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool GetWorkshopItemInstallInfo(int64 PublishedFileId, FString& OutFolderPath, int32& OutSizeOnDisk, int32& OutTimeStamp);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取 Workshop 项目安装信息
> @param PublishedFileId Workshop 项目 ID
> @param OutFolderPath 输出：安装文件夹路径
> @param OutSizeOnDisk 输出：磁盘占用大小（字节）
> @param OutTimeStamp 输出：安装时间戳
> @return 是否获取成功

---

### 函数 `GetWorkshopItemDownloadPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static FString GetWorkshopItemDownloadPath(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取 Workshop 项目下载路径（仅返回路径）
> @param PublishedFileId Workshop 项目 ID
> @return 下载文件夹路径，如果未安装则返回空字符串

---

### 函数 `GetWorkshopContentFolderPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AppId` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static FString GetWorkshopContentFolderPath(int32 AppId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取指定 AppID 的 Workshop 下载文件夹路径
> @param AppId Steam App ID
> @return Workshop 内容文件夹路径，格式：<SteamRoot>/steamapps/workshop/content/<AppId>

---

### 函数 `IsWorkshopItemInstalled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool IsWorkshopItemInstalled(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查 Workshop 项目是否已安装
> @param PublishedFileId Workshop 项目 ID
> @return 是否已安装

---

### 函数 `GetWorkshopItemDownloadProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |
| `OutBytesDownloaded` | `int32&` |
| `OutBytesTotal` | `int32&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool GetWorkshopItemDownloadProgress(int64 PublishedFileId, int32& OutBytesDownloaded, int32& OutBytesTotal);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取 Workshop 项目下载进度
> @param PublishedFileId Workshop 项目 ID
> @param OutBytesDownloaded 输出：已下载字节数
> @param OutBytesTotal 输出：总字节数
> @return 是否正在下载

---

### 函数 `GetWorkshopItemState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `EWorkshopItemState` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static EWorkshopItemState GetWorkshopItemState(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取 Workshop 项目状态
> @param PublishedFileId Workshop 项目 ID
> @return 项目状态（订阅、已安装、需要更新等）

---

### 函数 `QueryWorkshopItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `QueryType` | `ESteamQueryType` |
| `1` | `int32 Page =` |
| `（匿名/仅类型）` | `FString matchTag=""` |
| `（匿名/仅类型）` | `FString FileName=""` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void QueryWorkshopItems(ESteamQueryType QueryType, int32 Page = 1, FString matchTag="", FString FileName="");`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询 Workshop 项目
> @param QueryType 查询类型（最受欢迎、最新、评分最高等）
> @param Page 页码（从 1 开始）

---

### 函数 `QuerySubscribedWorkshopItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void QuerySubscribedWorkshopItems();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询用户订阅的 Workshop 项目

---

### 函数 `QueryUserCreatedWorkshopItems`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void QueryUserCreatedWorkshopItems();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询用户创建的 Workshop 项目

---

### 函数 `QueryWorkshopItemDetails`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void QueryWorkshopItemDetails(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 查询单个 Workshop 项目的详细信息
> @param PublishedFileId Workshop 项目 ID
> 
> 注意：这是一个异步操作，查询结果会通过 SteamWorkshopSubsystem 的 OnWorkshopItemDetailsQueryCompleted 委托返回
> 蓝图需要订阅 USteamWorkshopSubsystem::OnWorkshopItemDetailsQueryCompleted 来获取详细信息

---

### 函数 `DeleteWorkshopItem`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void DeleteWorkshopItem(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 删除 Workshop 项目
> @param PublishedFileId Workshop 项目 ID（必须是当前用户创建的项目）

---

### 函数 `OpenWorkshopItemPage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void OpenWorkshopItemPage(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 打开 Workshop 项目页面
> @param PublishedFileId Workshop 项目 ID

---

### 函数 `OpenWorkshopHomePage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AppId` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void OpenWorkshopHomePage(int32 AppId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 打开 Workshop 主页
> @param AppId Steam App ID（传入 0 使用当前游戏的 App ID）

---

### 函数 `SetUserItemVote`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |
| `bVoteUp` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void SetUserItemVote(int64 PublishedFileId,bool bVoteUp);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 对Workshop项目进行评价
> @param PublishedFileId Workshop 项目 ID
> * @param bVoteUp 赞或踩

---

### 函数 `GetUserItemVote`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileId` | `int64` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void GetUserItemVote(int64 PublishedFileId);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取自己对Workshop项目进行评价
> @param PublishedFileId Workshop 项目 ID
> * @param bVoteUp 赞或踩

---

### 函数 `StartWorkshopItemPlaytimeTracking`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileIds` | `const TArray<int64>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void StartWorkshopItemPlaytimeTracking(const TArray<int64>& PublishedFileIds);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 开始追踪 Workshop 项目游戏时间
> @param PublishedFileIds Workshop 项目 ID 数组

---

### 函数 `StopWorkshopItemPlaytimeTracking`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PublishedFileIds` | `const TArray<int64>&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void StopWorkshopItemPlaytimeTracking(const TArray<int64>& PublishedFileIds);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 停止追踪 Workshop 项目游戏时间
> @param PublishedFileIds Workshop 项目 ID 数组

---

### 函数 `StopAllWorkshopItemPlaytimeTracking`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static void StopAllWorkshopItemPlaytimeTracking();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 停止追踪所有 Workshop 项目游戏时间

---

### 函数 `IsSteamUGCAvailable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static bool IsSteamUGCAvailable();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查 Steam UGC 是否可用

---

### 函数 `GetSteamAppId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Workshop" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Workshop") static int32 GetSteamAppId();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取当前应用的 App ID

---

### 函数 `OpenPreviewImageFileDialog`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DialogTitle` | `const FString&` |
| `DefaultPath` | `const FString&` |
| `OutErrorMessage` | `FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static FString OpenPreviewImageFileDialog(const FString& DialogTitle, const FString& DefaultPath, FString& OutErrorMessage);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 通过 EasyFileDialog 打开文件对话框，选择 Workshop 预览图；通过校验后才返回路径。
> 限制：文件最大 1MB；仅 JPG/PNG；宽与高均不小于 512。

---

### 函数 `CheckCanChoseThisDir`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Workshop" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ContentFolder` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Workshop") static bool CheckCanChoseThisDir(const FString& ContentFolder);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

# `struct` `FWorkshopItemDetails`

**源码头文件：** `EastRimWorld/Mod/SteamWorkshopLibrary.h`

---

## 功能说明（来自头文件注释）

> Workshop 项目详细信息结构体

## 蓝图暴露变量

### 属性 `PublishedFileId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int64` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 PublishedFileId = 0;` |

**源码注释：**

> Workshop 项目 ID

---

### 属性 `Result`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 Result = 0;` |

**源码注释：**

> 查询结果代码

---

### 属性 `FileType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 FileType = 0;` |

**源码注释：**

> 文件类型：0=Community, 1=Microtransaction, 2=Collection, 3=Art, 4=Video, 5=Screenshot, 6=Game, 7=Software, 8=Concept, 9=WebGuide, 10=IntegratedGuide, 11=Merch, 12=ControllerBinding, 13=SteamworksAccessInvite, 14=SteamVideo, 15=GameManagedItem

---

### 属性 `Title`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") FString Title;` |

**源码注释：**

> 项目标题

---

### 属性 `Description`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") FString Description;` |

**源码注释：**

> 项目描述

---

### 属性 `CreatorSteamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int64` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 CreatorSteamId = 0;` |

**源码注释：**

> 创建者 Steam ID

---

### 属性 `TimeCreated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 TimeCreated = 0;` |

**源码注释：**

> 创建时间戳（Unix 时间戳）

---

### 属性 `TimeUpdated`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 TimeUpdated = 0;` |

**源码注释：**

> 更新时间戳（Unix 时间戳）

---

### 属性 `TimeAddedToUserList`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 TimeAddedToUserList = 0;` |

**源码注释：**

> 添加到用户列表的时间戳（Unix 时间戳）

---

### 属性 `Visibility`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 Visibility = 0;` |

**源码注释：**

> 可见性：0=公开，1=仅好友，2=私有

---

### 属性 `bBanned`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bBanned = false;` |

**源码注释：**

> 是否被禁止

---

### 属性 `bAcceptedForUse`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bAcceptedForUse = false;` |

**源码注释：**

> 是否被接受使用

---

### 属性 `FileHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int64` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 FileHandle = 0;` |

**源码注释：**

> 文件句柄

---

### 属性 `PreviewFileHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int64` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 PreviewFileHandle = 0;` |

**源码注释：**

> 预览文件句柄

---

### 属性 `FileName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") FString FileName;` |

**源码注释：**

> 文件名

---

### 属性 `FileSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int64` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 FileSize = 0;` |

**源码注释：**

> 文件大小（字节）

---

### 属性 `PreviewFileSize`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int64` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 PreviewFileSize = 0;` |

**源码注释：**

> 预览文件大小（字节）

---

### 属性 `PreviewImageURL`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") FString PreviewImageURL;` |

**源码注释：**

> 预览图 URL

---

### 属性 `VotesUp`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 VotesUp = 0;` |

**源码注释：**

> 点赞数

---

### 属性 `VotesDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 VotesDown = 0;` |

**源码注释：**

> 点踩数

---

### 属性 `Score`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") float Score = 0.0f;` |

**源码注释：**

> 评分（浮点数）

---

### 属性 `NumChildren`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 NumChildren = 0;` |

**源码注释：**

> 子项数量

---

### 属性 `Subscriptions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 Subscriptions = 0;` |

**源码注释：**

> 订阅数

---

### 属性 `Favorites`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 Favorites = 0;` |

**源码注释：**

> 收藏数

---

### 属性 `bIsSubscribed`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bIsSubscribed = false;` |

**源码注释：**

> 是否已订阅

---

### 属性 `bIsInstalled`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bIsInstalled = false;` |

**源码注释：**

> 是否已安装

---

### 属性 `bNeedsUpdate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bNeedsUpdate = false;` |

**源码注释：**

> 是否需要更新

---

### 属性 `Tags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FString>` |
| 反射说明符 | BlueprintReadOnly, Category="Steam Workshop" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") TArray<FString> Tags;` |

**源码注释：**

> 标签数组

---

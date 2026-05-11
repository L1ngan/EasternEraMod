# `struct` `FWorkshopItemDetails`

**Source header:** `EastRimWorld/Mod/SteamWorkshopLibrary.h`

---

## Functional description (from header comments)

> Workshop 项目详细信息结构体

## Blueprint-exposed variables

### Property `PublishedFileId`

| Field | Details |
|------|------|
| C++ type | `int64` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 PublishedFileId = 0;` |

**Source comments:**

> Workshop 项目 ID

---

### Property `Result`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 Result = 0;` |

**Source comments:**

> 查询结果代码

---

### Property `FileType`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 FileType = 0;` |

**Source comments:**

> 文件类型：0=Community, 1=Microtransaction, 2=Collection, 3=Art, 4=Video, 5=Screenshot, 6=Game, 7=Software, 8=Concept, 9=WebGuide, 10=IntegratedGuide, 11=Merch, 12=ControllerBinding, 13=SteamworksAccessInvite, 14=SteamVideo, 15=GameManagedItem

---

### Property `Title`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") FString Title;` |

**Source comments:**

> 项目标题

---

### Property `Description`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") FString Description;` |

**Source comments:**

> 项目描述

---

### Property `CreatorSteamId`

| Field | Details |
|------|------|
| C++ type | `int64` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 CreatorSteamId = 0;` |

**Source comments:**

> 创建者 Steam ID

---

### Property `TimeCreated`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 TimeCreated = 0;` |

**Source comments:**

> 创建时间戳（Unix 时间戳）

---

### Property `TimeUpdated`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 TimeUpdated = 0;` |

**Source comments:**

> 更新时间戳（Unix 时间戳）

---

### Property `TimeAddedToUserList`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 TimeAddedToUserList = 0;` |

**Source comments:**

> 添加到用户列表的时间戳（Unix 时间戳）

---

### Property `Visibility`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 Visibility = 0;` |

**Source comments:**

> 可见性：0=公开，1=仅好友，2=私有

---

### Property `bBanned`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bBanned = false;` |

**Source comments:**

> 是否被禁止

---

### Property `bAcceptedForUse`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bAcceptedForUse = false;` |

**Source comments:**

> 是否被接受使用

---

### Property `FileHandle`

| Field | Details |
|------|------|
| C++ type | `int64` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 FileHandle = 0;` |

**Source comments:**

> 文件句柄

---

### Property `PreviewFileHandle`

| Field | Details |
|------|------|
| C++ type | `int64` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 PreviewFileHandle = 0;` |

**Source comments:**

> 预览文件句柄

---

### Property `FileName`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") FString FileName;` |

**Source comments:**

> 文件名

---

### Property `FileSize`

| Field | Details |
|------|------|
| C++ type | `int64` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 FileSize = 0;` |

**Source comments:**

> 文件大小（字节）

---

### Property `PreviewFileSize`

| Field | Details |
|------|------|
| C++ type | `int64` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int64 PreviewFileSize = 0;` |

**Source comments:**

> 预览文件大小（字节）

---

### Property `PreviewImageURL`

| Field | Details |
|------|------|
| C++ type | `FString` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") FString PreviewImageURL;` |

**Source comments:**

> 预览图 URL

---

### Property `VotesUp`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 VotesUp = 0;` |

**Source comments:**

> 点赞数

---

### Property `VotesDown`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 VotesDown = 0;` |

**Source comments:**

> 点踩数

---

### Property `Score`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") float Score = 0.0f;` |

**Source comments:**

> 评分（浮点数）

---

### Property `NumChildren`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 NumChildren = 0;` |

**Source comments:**

> 子项数量

---

### Property `Subscriptions`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 Subscriptions = 0;` |

**Source comments:**

> 订阅数

---

### Property `Favorites`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") int32 Favorites = 0;` |

**Source comments:**

> 收藏数

---

### Property `bIsSubscribed`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bIsSubscribed = false;` |

**Source comments:**

> 是否已订阅

---

### Property `bIsInstalled`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bIsInstalled = false;` |

**Source comments:**

> 是否已安装

---

### Property `bNeedsUpdate`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") bool bNeedsUpdate = false;` |

**Source comments:**

> 是否需要更新

---

### Property `Tags`

| Field | Details |
|------|------|
| C++ type | `TArray<FString>` |
| Reflection specifiers | BlueprintReadOnly, Category="Steam Workshop" |
| Blueprint semantics | **Read-only** in Blueprint; cannot assign directly. |
| Original declaration (excerpt) | `UPROPERTY(BlueprintReadOnly, Category = "Steam Workshop") TArray<FString> Tags;` |

**Source comments:**

> 标签数组

---

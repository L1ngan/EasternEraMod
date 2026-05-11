# `class` `USteamAchievementLibrary`

**Source header:** `EastRimWorld/Mod/SteamAchievementLibrary.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed functions

### Function `RequestCurrentStats`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool RequestCurrentStats();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 请求当前用户的统计和成就数据
> 注意：这是一个异步操作，需要在游戏启动时调用
> 建议在游戏初始化时调用一次，确保统计数据已加载
> @return 是否成功发起请求

---

### Function `AreStatsAvailable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool AreStatsAvailable();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查统计和成就数据是否已加载
> @return 统计数据是否可用

---

### Function `UnlockAchievement`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AchievementName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool UnlockAchievement(const FString& AchievementName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 解锁成就
> @param AchievementName 成就的API名称（在Steamworks后台配置的名称）
> @return 是否成功设置（注意：需要调用 StoreStats 才能保存到Steam）

---

### Function `ClearAchievement`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AchievementName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool ClearAchievement(const FString& AchievementName);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 锁定成就（清除成就）
> @param AchievementName 成就的API名称
> @return 是否成功清除

---

### Function `IsAchievementUnlocked`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AchievementName` | `const FString&` |
| `OutUnlocked` | `bool&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool IsAchievementUnlocked(const FString& AchievementName, bool& OutUnlocked);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查成就是否已解锁
> @param AchievementName 成就的API名称
> @param OutUnlocked 输出：是否已解锁
> @return 是否成功获取状态

---

### Function `GetAchievementInfo`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AchievementName` | `const FString&` |
| `OutAchievementInfo` | [FSteamAchievementInfo](SteamAchievementLibrary__FSteamAchievementInfo.md)& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetAchievementInfo(const FString& AchievementName, FSteamAchievementInfo& OutAchievementInfo);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取成就信息（包括解锁状态和显示信息）
> @param AchievementName 成就的API名称
> @param OutAchievementInfo 输出：成就信息
> @return 是否成功获取

---

### Function `GetAchievementUnlockTime`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AchievementName` | `const FString&` |
| `OutUnlockTime` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetAchievementUnlockTime(const FString& AchievementName, int32& OutUnlockTime);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取成就解锁时间
> @param AchievementName 成就的API名称
> @param OutUnlockTime 输出：解锁时间戳（Unix时间戳，如果未解锁则为0）
> @return 是否成功获取

---

### Function `GetAllAchievements`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `int32` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `OutAchievements` | TArray<[FSteamAchievementInfo](SteamAchievementLibrary__FSteamAchievementInfo.md)>& |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static int32 GetAllAchievements(TArray<FSteamAchievementInfo>& OutAchievements);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 获取所有成就信息
> @param OutAchievements 输出：所有成就信息数组
> @return 获取到的成就数量

---

### Function `SetIntStat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StatName` | `const FString&` |
| `Value` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool SetIntStat(const FString& StatName, int32 Value);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置整数统计值
> @param StatName 统计的API名称
> @param Value 要设置的值
> @return 是否成功设置（注意：需要调用 StoreStats 才能保存到Steam）

---

### Function `GetIntStat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StatName` | `const FString&` |
| `OutValue` | `int32&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetIntStat(const FString& StatName, int32& OutValue);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取整数统计值
> @param StatName 统计的API名称
> @param OutValue 输出：统计值
> @return 是否成功获取

---

### Function `SetFloatStat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StatName` | `const FString&` |
| `Value` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool SetFloatStat(const FString& StatName, float Value);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 设置浮点数统计值
> @param StatName 统计的API名称
> @param Value 要设置的值
> @return 是否成功设置（注意：需要调用 StoreStats 才能保存到Steam）

---

### Function `GetFloatStat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StatName` | `const FString&` |
| `OutValue` | `float&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetFloatStat(const FString& StatName, float& OutValue);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取浮点数统计值
> @param StatName 统计的API名称
> @param OutValue 输出：统计值
> @return 是否成功获取

---

### Function `IncrementIntStat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StatName` | `const FString&` |
| `Increment` | `int32` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool IncrementIntStat(const FString& StatName, int32 Increment);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 增加整数统计值
> @param StatName 统计的API名称
> @param Increment 要增加的值
> @return 是否成功增加（注意：需要调用 StoreStats 才能保存到Steam）

---

### Function `UpdateAvgRateStat`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `StatName` | `const FString&` |
| `CountThisSession` | `float` |
| `SessionLength` | `float` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool UpdateAvgRateStat(const FString& StatName, float CountThisSession, float SessionLength);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 更新平均速率统计
> @param StatName 统计的API名称
> @param CountThisSession 本次会话的计数
> @param SessionLength 本次会话的长度（时间单位，如小时）
> @return 是否成功更新（注意：需要调用 StoreStats 才能保存到Steam）

---

### Function `StoreStats`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool StoreStats();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 存储统计和成就数据到Steam
> 注意：在修改成就或统计后，必须调用此函数才能将更改保存到Steam服务器
> @return 是否成功发起存储请求（异步操作）

---

### Function `ResetAllStats`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `bResetAchievements` | `bool` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool ResetAllStats(bool bResetAchievements);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Source comments:**

> 重置所有统计和成就
> @param bResetAchievements 是否同时重置成就
> @return 是否成功重置

---

### Function `IsSteamUserStatsAvailable`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool IsSteamUserStatsAvailable();`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 检查Steam UserStats是否可用
> @return Steam UserStats接口是否可用

---

### Function `GetAchievementDisplayAttribute`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `AchievementName` | `const FString&` |
| `AttributeKey` | `const FString&` |
| `OutValue` | `FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetAchievementDisplayAttribute(const FString& AchievementName, const FString& AttributeKey, FString& OutValue);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Source comments:**

> 获取成就的显示属性
> @param AchievementName 成就的API名称
> @param AttributeKey 属性键（如 "name", "desc", "hidden"）
> @param OutValue 输出：属性值
> @return 是否成功获取

---

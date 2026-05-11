# `class` `USteamAchievementLibrary`

**源码头文件：** `EastRimWorld/Mod/SteamAchievementLibrary.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `RequestCurrentStats`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool RequestCurrentStats();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 请求当前用户的统计和成就数据
> 注意：这是一个异步操作，需要在游戏启动时调用
> 建议在游戏初始化时调用一次，确保统计数据已加载
> @return 是否成功发起请求

---

### 函数 `AreStatsAvailable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool AreStatsAvailable();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查统计和成就数据是否已加载
> @return 统计数据是否可用

---

### 函数 `UnlockAchievement`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AchievementName` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool UnlockAchievement(const FString& AchievementName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 解锁成就
> @param AchievementName 成就的API名称（在Steamworks后台配置的名称）
> @return 是否成功设置（注意：需要调用 StoreStats 才能保存到Steam）

---

### 函数 `ClearAchievement`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AchievementName` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool ClearAchievement(const FString& AchievementName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 锁定成就（清除成就）
> @param AchievementName 成就的API名称
> @return 是否成功清除

---

### 函数 `IsAchievementUnlocked`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AchievementName` | `const FString&` |
| `OutUnlocked` | `bool&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool IsAchievementUnlocked(const FString& AchievementName, bool& OutUnlocked);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查成就是否已解锁
> @param AchievementName 成就的API名称
> @param OutUnlocked 输出：是否已解锁
> @return 是否成功获取状态

---

### 函数 `GetAchievementInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AchievementName` | `const FString&` |
| `OutAchievementInfo` | [FSteamAchievementInfo](SteamAchievementLibrary__FSteamAchievementInfo.md)& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetAchievementInfo(const FString& AchievementName, FSteamAchievementInfo& OutAchievementInfo);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取成就信息（包括解锁状态和显示信息）
> @param AchievementName 成就的API名称
> @param OutAchievementInfo 输出：成就信息
> @return 是否成功获取

---

### 函数 `GetAchievementUnlockTime`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AchievementName` | `const FString&` |
| `OutUnlockTime` | `int32&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetAchievementUnlockTime(const FString& AchievementName, int32& OutUnlockTime);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取成就解锁时间
> @param AchievementName 成就的API名称
> @param OutUnlockTime 输出：解锁时间戳（Unix时间戳，如果未解锁则为0）
> @return 是否成功获取

---

### 函数 `GetAllAchievements`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `int32` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutAchievements` | TArray<[FSteamAchievementInfo](SteamAchievementLibrary__FSteamAchievementInfo.md)>& |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static int32 GetAllAchievements(TArray<FSteamAchievementInfo>& OutAchievements);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取所有成就信息
> @param OutAchievements 输出：所有成就信息数组
> @return 获取到的成就数量

---

### 函数 `SetIntStat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StatName` | `const FString&` |
| `Value` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool SetIntStat(const FString& StatName, int32 Value);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置整数统计值
> @param StatName 统计的API名称
> @param Value 要设置的值
> @return 是否成功设置（注意：需要调用 StoreStats 才能保存到Steam）

---

### 函数 `GetIntStat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StatName` | `const FString&` |
| `OutValue` | `int32&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetIntStat(const FString& StatName, int32& OutValue);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取整数统计值
> @param StatName 统计的API名称
> @param OutValue 输出：统计值
> @return 是否成功获取

---

### 函数 `SetFloatStat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StatName` | `const FString&` |
| `Value` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool SetFloatStat(const FString& StatName, float Value);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 设置浮点数统计值
> @param StatName 统计的API名称
> @param Value 要设置的值
> @return 是否成功设置（注意：需要调用 StoreStats 才能保存到Steam）

---

### 函数 `GetFloatStat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StatName` | `const FString&` |
| `OutValue` | `float&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetFloatStat(const FString& StatName, float& OutValue);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取浮点数统计值
> @param StatName 统计的API名称
> @param OutValue 输出：统计值
> @return 是否成功获取

---

### 函数 `IncrementIntStat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StatName` | `const FString&` |
| `Increment` | `int32` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool IncrementIntStat(const FString& StatName, int32 Increment);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 增加整数统计值
> @param StatName 统计的API名称
> @param Increment 要增加的值
> @return 是否成功增加（注意：需要调用 StoreStats 才能保存到Steam）

---

### 函数 `UpdateAvgRateStat`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StatName` | `const FString&` |
| `CountThisSession` | `float` |
| `SessionLength` | `float` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool UpdateAvgRateStat(const FString& StatName, float CountThisSession, float SessionLength);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 更新平均速率统计
> @param StatName 统计的API名称
> @param CountThisSession 本次会话的计数
> @param SessionLength 本次会话的长度（时间单位，如小时）
> @return 是否成功更新（注意：需要调用 StoreStats 才能保存到Steam）

---

### 函数 `StoreStats`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool StoreStats();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 存储统计和成就数据到Steam
> 注意：在修改成就或统计后，必须调用此函数才能将更改保存到Steam服务器
> @return 是否成功发起存储请求（异步操作）

---

### 函数 `ResetAllStats`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `bResetAchievements` | `bool` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "Steam Achievement") static bool ResetAllStats(bool bResetAchievements);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 重置所有统计和成就
> @param bResetAchievements 是否同时重置成就
> @return 是否成功重置

---

### 函数 `IsSteamUserStatsAvailable`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool IsSteamUserStatsAvailable();`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 检查Steam UserStats是否可用
> @return Steam UserStats接口是否可用

---

### 函数 `GetAchievementDisplayAttribute`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Steam Achievement" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `AchievementName` | `const FString&` |
| `AttributeKey` | `const FString&` |
| `OutValue` | `FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Steam Achievement") static bool GetAchievementDisplayAttribute(const FString& AchievementName, const FString& AttributeKey, FString& OutValue);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释：**

> 获取成就的显示属性
> @param AchievementName 成就的API名称
> @param AttributeKey 属性键（如 "name", "desc", "hidden"）
> @param OutValue 输出：属性值
> @return 是否成功获取

---

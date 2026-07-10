# `class` `USwordMeetBridge`

**源码头文件:** `EastRimWorld/System/Emergence/Bridges/SwordMeetBridge.h`

---

## 功能说明（来自头文件注释）

> Sword Meet Bridge UObject 类型。

## 蓝图暴露函数

### 函数 `IsSwordMeetOpen`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence|SwordMeet" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|SwordMeet") bool IsSwordMeetOpen() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> ── UI ──

---

### 函数 `GetSwordMeetPickCount`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence|SwordMeet" |
| 返回类型 | `int32` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|SwordMeet") int32 GetSwordMeetPickCount() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 获取或查询 Get Sword Meet Pick Count。

---

### 函数 `CheckPlayerCanJoinSwordMeet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Emergence|SwordMeet" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutRejectReason` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Emergence|SwordMeet") bool CheckPlayerCanJoinSwordMeet(FText& OutRejectReason) const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 玩家可否参赛(弟子最高境界 + 势力声望门槛)。不满足时 OutRejectReason 返回动态组合的错误文案
>  (配置 JoinRejectText, 占位 {Realm}=门槛境界名 {Reputation}=门槛声望值)

---

### 函数 `PlayerJoinSwordMeet`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Emergence|SwordMeet" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DiscipleGuids` | `const TArray<FGuid>&` |
| `OutMessage` | `FText&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Emergence|SwordMeet") bool PlayerJoinSwordMeet(const TArray<FGuid>& DiscipleGuids, FText& OutMessage);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 报名参赛。成功: OutMessage=报名成功提示(JoinSuccessText, 占位 {Names}{Count});
>  失败: OutMessage=门槛错误文案(JoinRejectText)或空(已报名/已出结果/无有效弟子)。UI 直接弹 OutMessage

---

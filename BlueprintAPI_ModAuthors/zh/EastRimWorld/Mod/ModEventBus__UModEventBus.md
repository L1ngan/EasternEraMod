# `class` `UModEventBus`

**源码头文件:** `EastRimWorld/Mod/ModEventBus.h`

---

## 功能说明（来自头文件注释）

> Mod 事件总线
> C++/蓝图在玩法关键节点广播事件；Mod 的 Lua 通过 RegisterModEvent 订阅。
> 监听随注册时的 Mod 上下文记录归属，Mod 卸载时统一清理；连续失败的回调自动摘除。

## 蓝图暴露函数

### 函数 `BroadcastModEvent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Mod System" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventName` | `const FName&` |
| `Payload` | `UObject*` |
| `Params` | `const TMap<FString, FString>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Mod System", meta = (AutoCreateRefTerm = "Params")) static void BroadcastModEvent(const FName& EventName, UObject* Payload, const TMap<FString, FString>& Params);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 广播事件（C++/蓝图通用入口）。无监听者时开销仅一次查表。

---

### 函数 `HasModEventListeners`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="Mod System" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EventName` | `const FName&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") static bool HasModEventListeners(const FName& EventName);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 指定事件当前是否有监听者（C++ 侧构造昂贵参数前可先查询）

---

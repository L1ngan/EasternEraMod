# `class` `UModEventBus`

**Source header:** `EastRimWorld/Mod/ModEventBus.h`

---

## Functional description (from header comments)

> Mod 事件总线
> C++/蓝图在玩法关键节点广播事件；Mod 的 Lua 通过 RegisterModEvent 订阅。
> 监听随注册时的 Mod 上下文记录归属，Mod 卸载时统一清理；连续失败的回调自动摘除。

## Blueprint-exposed functions

### Function `BroadcastModEvent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="Mod System" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventName` | `const FName&` |
| `Payload` | `UObject*` |
| `Params` | `const TMap<FString, FString>&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "Mod System", meta = (AutoCreateRefTerm = "Params")) static void BroadcastModEvent(const FName& EventName, UObject* Payload, const TMap<FString, FString>& Params);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 广播事件（C++/蓝图通用入口）。无监听者时开销仅一次查表。

---

### Function `HasModEventListeners`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="Mod System" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `EventName` | `const FName&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mod System") static bool HasModEventListeners(const FName& EventName);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> 指定事件当前是否有监听者（C++ 侧构造昂贵参数前可先查询）

---

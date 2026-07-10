# `class` `ADoorNavLink`

**源码头文件:** `EastRimWorld/Building/DoorNavLink.h`

---

## 功能说明（来自头文件注释）

> 门用导航链接Actor：继承ANavLinkProxy，可在运行时更新导航链接的起止位置与通行方向。

## 蓝图暴露函数

### 函数 `UpdateNavLink`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `StartPosition` | `FVector` |
| `EndPosition` | `FVector` |
| `（匿名/仅类型）` | `ENavLinkDirection::Type NavLinkDirection = ENavLinkDirection::BothWays` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateNavLink(FVector StartPosition,FVector EndPosition,ENavLinkDirection::Type NavLinkDirection = ENavLinkDirection::BothWays);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 更新导航链接

---

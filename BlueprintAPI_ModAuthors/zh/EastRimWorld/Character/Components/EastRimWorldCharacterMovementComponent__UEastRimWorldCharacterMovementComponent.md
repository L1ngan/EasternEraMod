# `class` `UEastRimWorldCharacterMovementComponent`

**源码头文件:** `EastRimWorld/Character/Components/EastRimWorldCharacterMovementComponent.h`

---

## 功能说明（来自头文件注释）

> UEastRimWorldCharacterMovementComponent
> The base character movement component class used by this project.

## 蓝图暴露函数

### 函数 `GetGroundInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="EastRimWorld|CharacterMovement" |
| 返回类型 | const [FEastRimWorldCharacterGroundInfo](EastRimWorldCharacterMovementComponent__FEastRimWorldCharacterGroundInfo.md)& |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "EastRimWorld|CharacterMovement") const FEastRimWorldCharacterGroundInfo& GetGroundInfo();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> Returns the current ground info.  Calling this will update the ground info if it's out of date.

---

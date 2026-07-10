# `struct` `FRoofActors`

**源码头文件:** `EastRimWorld/Components/ERW_AreaOperationComponent.h`

---

## 功能说明（来自头文件注释）

> 同一屋顶部位类型显示和隐藏的Actor

## 蓝图暴露变量

### 属性 `VisibleActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<AActor* , bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<AActor* , bool> VisibleActors;` |

**说明:**

> 显示的Actor
> TMap<Actor , 占位符>

---

### 属性 `HideActors`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<AActor* , bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<AActor* , bool> HideActors;` |

**说明:**

> 隐藏的Actor
> TMap<Actor , 占位符>

---

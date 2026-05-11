# `class` `UFarmlandPlantInstance`

**源码头文件:** `EastRimWorld/Inventory/FarmlandPlantInstance.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `bAutoOperator`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bAutoOperator;` |

**源码注释:**

> 区分是自动操作还是玩家手动操作

---

### 属性 `BelongFarmlandId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,VisibleInstanceOnly,meta=(AllowPrivateAccess)) FGuid BelongFarmlandId;` |

**源码注释:**

> 归属田地的guid

---

## 蓝图暴露函数

### 函数 `GetBelongFarmlandId`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure |
| 返回类型 | `const FGuid&` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure) const FGuid& GetBelongFarmlandId() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

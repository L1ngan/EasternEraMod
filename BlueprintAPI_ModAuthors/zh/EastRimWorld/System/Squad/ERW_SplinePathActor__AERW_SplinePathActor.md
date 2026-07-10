# `class` `AERW_SplinePathActor`

**源码头文件:** `EastRimWorld/System/Squad/ERW_SplinePathActor.h`

---

## 功能说明（来自头文件注释）

> 样条路径 Actor：在编辑器中拖动样条线点即可绘制路径。
> - 运行时把样条采样为 TArray<FVector>，喂给 UERW_SquadSubsystem 作默认路径。
> - 样条的"闭合(Closed Loop)"开关对应环形路径。

## 蓝图暴露变量

### 属性 `Spline`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<USplineComponent>` |
| 反射说明符 | BlueprintReadOnly, Category="SplinePath" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SplinePath") TObjectPtr<USplineComponent> Spline;` |

**说明:**

> 编辑器中拖动这条样条线的点来绘制路径

---

### 属性 `SampleInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="SplinePath" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "SplinePath", meta = (ClampMin = "10.0")) float SampleInterval = 100.f;` |

**说明:**

> 采样间隔(cm)：越小折线越贴合曲线，点越多

---

## 蓝图暴露函数

### 函数 `IsLoop`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="SplinePath" |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "SplinePath") bool IsLoop() const;`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 是否环形（直接读样条的 Closed Loop 状态）

---

### 函数 `BuildPathPoints`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="SplinePath" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `OutPoints` | `TArray<FVector>&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "SplinePath") void BuildPathPoints(TArray<FVector>& OutPoints) const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 把样条采样成世界坐标折线

---

# `class` `UTotalWorldMap`

**源码头文件:** `EastRimWorld/UI/TotalWorld/TotalWorldMap.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `ScaleOnceValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float ScaleOnceValue;` |

**源码注释:**

> 单次缩放比例

---

### 属性 `CurrentScale`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float CurrentScale;` |

**源码注释:**

> 当前缩放比例

---

### 属性 `MaxExpansionValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxExpansionValue;` |

**源码注释:**

> 最大扩大为：

---

### 属性 `MinShrinkValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MinShrinkValue;` |

**源码注释:**

> 最小缩放为：

---

### 属性 `MapSizeBox`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `USizeBox *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) USizeBox * MapSizeBox = nullptr;` |

---

### 属性 `MapImage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UImage*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) UImage* MapImage;` |

**源码注释:**

> 内部滚动框

---

### 属性 `MapScaleBox`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UScaleBox *` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(meta=(BindWidget),BlueprintReadWrite) UScaleBox * MapScaleBox = nullptr;` |

**源码注释:**

> 缩放框

---

### 属性 `MapImageInitX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float MapImageInitX;` |

**源码注释:**

> 地图初始大小X

---

### 属性 `MapImageInitY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) float MapImageInitY;` |

**源码注释:**

> 地图初始大小Y

---

### 属性 `SpeedAnim`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float SpeedAnim = 1.0f;` |

---

### 属性 `MinimumRollAfterCalculationX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MinimumRollAfterCalculationX;` |

**源码注释:**

> private:
> 计算后的最小滚动X

---

### 属性 `MaximumRollAfterCalculationX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MaximumRollAfterCalculationX;` |

**源码注释:**

> 计算后的最大滚动X

---

### 属性 `MinimumRollAfterCalculationY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MinimumRollAfterCalculationY;` |

**源码注释:**

> 计算后的最小滚动Y

---

### 属性 `MaximumRollAfterCalculationY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float MaximumRollAfterCalculationY;` |

**源码注释:**

> 计算后的最大滚动Y

---

### 属性 `BeyondBorderLocalX`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float BeyondBorderLocalX;` |

**源码注释:**

> 超出的临时X

---

### 属性 `BeyondBorderLocalY`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) float BeyondBorderLocalY;` |

**源码注释:**

> 超出的临时Y

---

### 属性 `TimerHandle`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTimerHandle` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FTimerHandle TimerHandle;` |

**源码注释:**

> 创建一个定时器用于实现播放回弹动画效果

---

### 属性 `bMouseLeftButtonMove`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) bool bMouseLeftButtonMove = false;` |

---

### 属性 `MoveMultiplying`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MoveMultiplying = -10.0f;` |

---

## 蓝图暴露函数

### 函数 `SkipToAppointMapLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Location` | `const FVector2D&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SkipToAppointMapLocation(const FVector2D& Location);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `UpdateMapPosition`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateMapPosition();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `UpdateMapScale`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InScale` | `float` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void UpdateMapScale(float InScale);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SkipToPlayerCapitalCity`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void SkipToPlayerCapitalCity();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OnMouseMoveWithDelta`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DeltaVec` | `FVector2D` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OnMouseMoveWithDelta(FVector2D DeltaVec);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

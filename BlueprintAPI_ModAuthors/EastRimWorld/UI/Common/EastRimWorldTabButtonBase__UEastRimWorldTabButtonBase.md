# `class` `UEastRimWorldTabButtonBase`

**源码头文件：** `EastRimWorld/UI/Common/EastRimWorldTabButtonBase.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `LazyImage_Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UCommonLazyImage>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,meta = (BindWidgetOptional)) TObjectPtr<UCommonLazyImage> LazyImage_Icon;` |

---

## 蓝图暴露函数

### 函数 `SetIconBrush`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Brush` | `const FSlateBrush&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetIconBrush(const FSlateBrush& Brush);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

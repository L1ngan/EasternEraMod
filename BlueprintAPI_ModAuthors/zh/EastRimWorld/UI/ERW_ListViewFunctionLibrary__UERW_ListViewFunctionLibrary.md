# `class` `UERW_ListViewFunctionLibrary`

**源码头文件:** `EastRimWorld/UI/ERW_ListViewFunctionLibrary.h`

---

## 功能说明（来自头文件注释）

> ListView 滚动工具库(适用于 ListView / TileView / TreeView,后两者均派生自 UListView)。
> "只在已经在底部时才自动贴底"的标准用法(聊天记录等):
>   1) 往数据数组塞新项 **之前**,先调 IsListViewScrolledToBottom 存成 bool(bWasAtBottom);
>   2) 塞数据并 SetListItems / AddItem / RequestRefresh;
>   3) Branch(bWasAtBottom):为真才调 ScrollListViewToBottom。
> 这样翻历史时不打扰,停在底部时才跟最新。注意判断必须在"加数据前"做——
> 加完再判断的话新末项还没显示,会误判为不在底部。

## 蓝图暴露函数

### 函数 `IsListViewScrolledToBottom`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="ERW|ListView" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ListView` | `const UListView*` |
| `0` | `int32 NumItemsTolerance =` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "ERW|ListView", meta = (DisplayName = "Is ListView Scrolled To Bottom")) static bool IsListViewScrolledToBottom(const UListView* ListView, int32 NumItemsTolerance = 0);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。 节点显示名可能为「Is ListView Scrolled To Bottom」。

**说明:**

> 当前是否滚到(接近)底部:判断数据里的最后一项,其 Entry 控件是否正在显示。
> 靠"末项 Entry 是否已构建显示"来判,跨引擎版本比直接比滚动偏移更稳。
> @param ListView          目标列表(ListView/TileView/TreeView 均可)。为空视为在底部返回 true。
> @param NumItemsTolerance  容差(条):末项在"倒数第 (Tolerance+1) 项及之后"就算在底部。默认 0=必须末项正显示。
> @return  空列表 / 尚未构建任何 Entry / 末项(在容差内)正显示 → true;否则 false。

---

### 函数 `ScrollListViewToBottom`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="ERW|ListView" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ListView` | `UListView*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "ERW|ListView", meta = (DisplayName = "Scroll ListView To Bottom")) static void ScrollListViewToBottom(UListView* ListView);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。 节点显示名可能为「Scroll ListView To Bottom」。

**说明:**

> 把列表滚到最后一项(末项进入视图)。配合 IsListViewScrolledToBottom 的判断结果使用。

---

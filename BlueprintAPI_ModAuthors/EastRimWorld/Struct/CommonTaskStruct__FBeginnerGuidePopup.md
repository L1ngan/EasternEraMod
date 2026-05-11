# `struct` `FBeginnerGuidePopup`

**源码头文件：** `EastRimWorld/Struct/CommonTaskStruct.h`

---

## 功能说明（来自头文件注释）

> 新手引导弹窗配置结构

## 蓝图暴露变量

### 属性 `Title`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FText Title;` |

**源码注释：**

> 标题

---

### 属性 `Contents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FBeginnerGuidePopupContent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) TArray<FBeginnerGuidePopupContent> Contents;` |

**源码注释：**

> 弹窗内容

---

# `struct` `FModFormatText`

**源码头文件:** `CreateModPlugin/Public/BaseDataStruct.h`

---

## 功能说明（来自头文件注释）

> 可替换文本结构

## 蓝图暴露变量

### 属性 `TextMain`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FText TextMain;` |

**说明:**

> 主文本

---

### 属性 `TextParams`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString, FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FString, FText> TextParams;` |

**说明:**

> 替换变量文本

---

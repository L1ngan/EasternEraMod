# `struct` `FOutputInformation`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 资源产出的展示信息

## 蓝图暴露变量

### 属性 `Title`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Title;` |

**源码注释:**

> 标题

---

### 属性 `OutPutInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,int>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,int> OutPutInfo;` |

**源码注释:**

> 产出的数量

---

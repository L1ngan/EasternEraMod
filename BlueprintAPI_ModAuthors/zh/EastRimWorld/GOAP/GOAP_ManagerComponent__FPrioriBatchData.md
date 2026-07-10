# `struct` `FPrioriBatchData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 优先执行的批量Action数据

## 蓝图暴露变量

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBatchActions](GOAP_ManagerComponent__FBatchActions.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FBatchActions Actions;` |

**说明:**

> 该批次包含的批量Action集合

---

### 属性 `BatchIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 BatchIndex { INDEX_NONE };` |

**说明:**

> 批次索引

---

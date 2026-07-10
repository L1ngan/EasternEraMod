# `struct` `FPrioriActionData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 优先处理的批量Action

## 蓝图暴露变量

### 属性 `BatchData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FPrioriBatchData](GOAP_ManagerComponent__FPrioriBatchData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TMap<FUObjectData , FPrioriBatchData> BatchData;` |

**说明:**

> TMap<Owner的数据 , 批量Action数据>

---

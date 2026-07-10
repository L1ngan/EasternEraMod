# `struct` `FSpecifiedItemActions`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 指定物品的Action数据

## 蓝图暴露变量

### 属性 `Data`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FItemInfoActions](GOAP_ManagerComponent__FItemInfoActions.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , FItemInfoActions> Data;` |

**说明:**

> TMap<GOAP目标 , 物品信息对应的GOAP Action数据>

---

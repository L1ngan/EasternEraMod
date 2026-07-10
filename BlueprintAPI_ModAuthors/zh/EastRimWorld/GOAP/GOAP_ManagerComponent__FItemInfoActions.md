# `struct` `FItemInfoActions`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 物品信息对应的GOAP Action数据

## 蓝图暴露变量

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , [FGOAP_Action](GOAP_Data__FGOAP_Action.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FUObjectData , FGOAP_Action> Actions;` |

**说明:**

> TMap<物品的数据 , GOAP Action>

---

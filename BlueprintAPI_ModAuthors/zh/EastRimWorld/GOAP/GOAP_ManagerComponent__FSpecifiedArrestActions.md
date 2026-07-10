# `struct` `FSpecifiedArrestActions`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 指定抓捕目标的Action集合数据

## 蓝图暴露变量

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) ,[FGOAP_Actions](GOAP_ManagerComponent__FGOAP_Actions.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FUObjectData ,FGOAP_Actions> Actions;` |

**说明:**

> 按目标对象数据分组的抓捕Action映射表

---

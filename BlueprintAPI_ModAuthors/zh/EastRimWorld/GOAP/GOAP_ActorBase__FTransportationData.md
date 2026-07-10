# `struct` `FTransportationData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## 功能说明（来自头文件注释）

> 交通工具相关数据

## 蓝图暴露变量

### 属性 `OccupierGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,FGuid>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,SaveGame) TMap<int32,FGuid> OccupierGuids;` |

**说明:**

> 交通工具在使用的移动信息Guids

---

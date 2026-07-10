# `struct` `FGOAP_Actions`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 包含同类型GOAP_Action的结构体

## 蓝图暴露变量

### 属性 `Actions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FGOAP_Action](GOAP_Data__FGOAP_Action.md) , bool> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGOAP_Action , bool> Actions;` |

**说明:**

> GOAP_Action的TMap
> TMap<GOAP_Action , 是否活跃>

---

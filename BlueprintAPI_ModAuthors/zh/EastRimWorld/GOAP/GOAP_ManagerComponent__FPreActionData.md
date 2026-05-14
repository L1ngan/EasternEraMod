# `struct` `FPreActionData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 前置Action的数据

## 蓝图暴露变量

### 属性 `ActionData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[FUObjectData](../ERW_CommonTypes__FUObjectData.md) , FName> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FUObjectData , FName> ActionData;` |

**源码注释:**

> TMap<Owner的数据 , GOAPAction的ID>

---

# `struct` `FBatchActionData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 批量处理的Action的数据

## 蓝图暴露变量

### 属性 `ActionData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FActionData](GOAP_ManagerComponent__FActionData.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FActionData ActionData;` |

**说明:**

> Action数据

---

### 属性 `ActiveOwnerGuids`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid , bool>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGuid , bool> ActiveOwnerGuids;` |

**说明:**

> 活跃Action的Owner的Guid
> TMap<Owner的Guid , 占位符>

---

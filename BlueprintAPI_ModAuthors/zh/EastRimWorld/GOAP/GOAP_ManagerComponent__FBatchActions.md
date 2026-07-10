# `struct` `FBatchActions`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 批量处理的Action

## 蓝图暴露变量

### 属性 `ResourceActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FBatchActionData](GOAP_ManagerComponent__FBatchActionData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , FBatchActionData> ResourceActions;` |

**说明:**

> TMap<资源ID , 资源Action数据>

---

### 属性 `ConstructActions`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FBatchActionData](GOAP_ManagerComponent__FBatchActionData.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FBatchActionData ConstructActions;` |

**说明:**

> 建造Action

---

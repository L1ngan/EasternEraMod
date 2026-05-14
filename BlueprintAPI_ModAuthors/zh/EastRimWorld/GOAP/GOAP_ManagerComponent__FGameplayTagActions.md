# `struct` `FGameplayTagActions`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> Gameplay标签对应的Action数据

## 蓝图暴露变量

### 属性 `ActionData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGameplayTag , [FItemActions](GOAP_ManagerComponent__FItemActions.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FGameplayTag , FItemActions> ActionData;` |

**源码注释:**

> TMap<Gameplay标签 , 物品Action数据>

---

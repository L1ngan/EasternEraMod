# `struct` `FGameplayTagLayer3`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 第三场标签包含GOAPAction的数据

## 蓝图暴露变量

### 属性 `Layer3Data`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FString , [FGameplayTagActions](GOAP_ManagerComponent__FGameplayTagActions.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FString , FGameplayTagActions> Layer3Data;` |

**源码注释:**

> TMap<第三层的标签 , 标签对应的物品ID>

---

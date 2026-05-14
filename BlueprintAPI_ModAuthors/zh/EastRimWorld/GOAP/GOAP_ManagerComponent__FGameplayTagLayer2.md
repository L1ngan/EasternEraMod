# `struct` `FGameplayTagLayer2`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ManagerComponent.h`

---

## 功能说明（来自头文件注释）

> 第二层标签包含GOAPAction的数据

## 蓝图暴露变量

### 属性 `Layer2Data`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FString , [FGameplayTagLayer3](GOAP_ManagerComponent__FGameplayTagLayer3.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FString , FGameplayTagLayer3> Layer2Data;` |

**源码注释:**

> TMap<第二层的标签 , 第三层的数据>

---

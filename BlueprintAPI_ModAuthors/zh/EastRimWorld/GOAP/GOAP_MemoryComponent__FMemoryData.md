# `struct` `FMemoryData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_MemoryComponent.h`

---

## 功能说明（来自头文件注释）

> GOAP记忆数据

## 蓝图暴露变量

### 属性 `Data`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName , [FGOAP_Value](GOAP_Data__FGOAP_Value.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FName , FGOAP_Value> Data;` |

**源码注释:**

> TMap<ID , GOAP值>

---

# `struct` `FItemUseState`

**源码头文件:** `EastRimWorld/GOAP/GOAP_PlanComponent.h`

---

## 功能说明（来自头文件注释）

> 物品使用状态

## 蓝图暴露变量

### 属性 `States`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGameplayTag , bool>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FGameplayTag , bool> States;` |

**说明:**

> TMap<物品标签 , 是否可用>

---

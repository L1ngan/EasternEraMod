# `struct` `FFacilityBelongData`

**源码头文件:** `EastRimWorld/GOAP/GOAP_ActorBase.h`

---

## 功能说明（来自头文件注释）

> 设施归属数据

## 蓝图暴露变量

### 属性 `BelongState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EFacilityBelongState](../ERW_Enumerations__EFacilityBelongState.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) EFacilityBelongState BelongState { EFacilityBelongState::Share };` |

**说明:**

> 设置归属状态

---

### 属性 `OwnerData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FUObjectData](../ERW_CommonTypes__FUObjectData.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) FUObjectData OwnerData;` |

**说明:**

> 拥有者的数据(用AIController的Guid)

---

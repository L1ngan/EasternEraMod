# `struct` `FApprenticeshipGrantedInjury`

**源码头文件:** `EastRimWorld/System/Apprenticeship/ApprenticeshipTypes.h`

---

## 功能说明（来自头文件注释）

> 历练中受的一处伤势(归来时构造 FInjuryEffectInstance 挂到弟子)

## 蓝图暴露变量

### 属性 `InjuryID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") FName InjuryID;` |

**说明:**

> 伤势配置 ID(GameMode GetInjuryBuffById 查)

---

### 属性 `Organ`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EBodyOrganType](../../ERW_CommonTypes__EBodyOrganType.md) |
| 反射说明符 | BlueprintReadOnly, Category="Harvest" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly, Category = "Harvest") EBodyOrganType Organ = EBodyOrganType::None;` |

**说明:**

> 伤势部位

---

# `struct` `FGrowthInfo`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 动物成长信息：进入该阶段所需成长值及成长后会变成的动物ID（不变则不填）

## 蓝图暴露变量

### 属性 `NeedGrowth`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) float NeedGrowth = 0.f;` |

**说明:**

> 所需要的成长值

---

### 属性 `AnimalID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadWrite) FName AnimalID = NAME_None;` |

**说明:**

> 会变成的另一个动物ID(不会变就不填)

---

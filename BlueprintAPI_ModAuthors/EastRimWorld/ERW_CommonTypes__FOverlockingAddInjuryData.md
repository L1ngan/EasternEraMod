# `struct` `FOverlockingAddInjuryData`

**源码头文件：** `EastRimWorld/ERW_CommonTypes.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `InjuryName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FName InjuryName;` |

**源码注释：**

> 伤势名字

---

### 属性 `InjuryWeight`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) int32 InjuryWeight = 0;` |

**源码注释：**

> 伤势权重

---

### 属性 `InjuryOrganID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBodyOrganType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EBodyOrganType InjuryOrganID = EBodyOrganType::None;` |

**源码注释：**

> 伤势部位

---

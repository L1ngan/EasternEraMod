# `struct` `FTeamChangeInformationInfo`

**源码头文件：** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 存储的团队关系关联信息

## 蓝图暴露变量

### 属性 `SourceTeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") FGenericTeamId SourceTeamId;` |

---

### 属性 `TargetTeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") FGenericTeamId TargetTeamId;` |

---

### 属性 `TeamRelationship`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TEnumAsByte<ETeamAttitude::Type>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite,category = "Base") TEnumAsByte<ETeamAttitude::Type> TeamRelationship = ETeamAttitude::Type::Friendly;` |

---

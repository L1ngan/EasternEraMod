# `struct` `FForceMemberJobInfo`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> 势力人员职位信息

## 蓝图暴露变量

### 属性 `CharacterGuid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FGuid CharacterGuid;` |

**说明:**

> 人员的ID

---

### 属性 `JobType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EForceJobType](WorldStruct__EForceJobType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EForceJobType JobType = EForceJobType::None;` |

**说明:**

> 职位

---

### 属性 `SubClassIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) int32 SubClassIndex = 0;` |

**说明:**

> 堂口Id

---

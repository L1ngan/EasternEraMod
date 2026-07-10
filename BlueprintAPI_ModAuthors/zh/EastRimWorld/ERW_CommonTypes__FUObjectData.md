# `struct` `FUObjectData`

**源码头文件:** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 包含UObject和其对应的Guid的结构

## 蓝图暴露变量

### 属性 `Object`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UObject*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , Transient) UObject* Object { nullptr };` |

**说明:**

> Object（运行时缓存指针；身份靠下方 Guid，标记 Transient 避免被序列化导致悬空指针崩溃）

---

### 属性 `Guid`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGuid` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) FGuid Guid;` |

**说明:**

> Object对应的Guid

---

### 属性 `OwnerType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EActorType](ERW_Enumerations__EActorType.md) |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) EActorType OwnerType { EActorType::None };` |

**说明:**

> Owner的类型

---

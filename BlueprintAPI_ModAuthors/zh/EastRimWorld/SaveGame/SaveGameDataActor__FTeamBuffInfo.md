# `struct` `FTeamBuffInfo`

**源码头文件:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## 功能说明（来自头文件注释）

> 阵营Buff信息（阵营ID及其Buff列表），用于团队Buff存档

## 蓝图暴露变量

### 属性 `TeamId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame) FGenericTeamId TeamId;` |

**说明:**

> 阵营ID

---

### 属性 `TeamBuff`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCommonBuff](../Struct/CommonStruct__FCommonBuff.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TArray<FCommonBuff> TeamBuff;` |

**说明:**

> 该阵营持有的Buff列表

---

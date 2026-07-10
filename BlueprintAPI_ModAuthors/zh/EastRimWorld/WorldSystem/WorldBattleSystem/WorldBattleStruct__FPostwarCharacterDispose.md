# `struct` `FPostwarCharacterDispose`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleStruct.h`

---

## 功能说明（来自头文件注释）

> 战场结果

## 蓝图暴露变量

### 属性 `CaptureCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> CaptureCharacter;` |

**说明:**

> 俘虏的角色

---

### 属性 `LoseCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FCharacterSaveData](../WorldCharacterData__FCharacterSaveData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FCharacterSaveData> LoseCharacter;` |

**说明:**

> 被俘虏的角色

---

### 属性 `DisposalCaptureCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[ECaptureCharacterDisposalType](../WorldStruct__ECaptureCharacterDisposalType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,ECaptureCharacterDisposalType> DisposalCaptureCharacter;` |

**说明:**

> 俘虏的角色处置

---

### 属性 `DisposalLoseCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid,[ECaptureCharacterDisposalType](../WorldStruct__ECaptureCharacterDisposalType.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<FGuid,ECaptureCharacterDisposalType> DisposalLoseCharacter;` |

**说明:**

> 被俘虏的角色处置

---

### 属性 `BackBaseCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> BackBaseCharacter;` |

**说明:**

> 返回的人

---

### 属性 `GarrisonCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> GarrisonCharacter;` |

**说明:**

> 驻守的人

---

### 属性 `WanderCharacter`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FGuid>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TArray<FGuid> WanderCharacter;` |

**说明:**

> 游荡的人

---

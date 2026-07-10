# `struct` `FCharacterOrganUIConfig`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 角色器官显示UI显示配置（综合显示多个器官的汇总值）

## 蓝图暴露变量

### 属性 `OrganName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ESpeciesType](CommonEnum__ESpeciesType.md),FText> |
| 反射说明符 | BlueprintReadWrite, Category="FCharacterOrganUIConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCharacterOrganUIConfig") TMap<ESpeciesType,FText> OrganName;` |

**说明:**

> 显示总器官名称

---

### 属性 `OrganIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite, Category="FCharacterOrganUIConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCharacterOrganUIConfig") TMap<FName,float> OrganIDs;` |

**说明:**

> 包含哪些器官 key 部位id  value 部位占比

---

### 属性 `OrganDesc`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[ESpeciesType](CommonEnum__ESpeciesType.md),FText> |
| 反射说明符 | BlueprintReadWrite, Category="FCharacterOrganUIConfig" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "FCharacterOrganUIConfig") TMap<ESpeciesType,FText> OrganDesc;` |

**说明:**

> 显示总器官描述(左右眼，左右耳，左右手，左右腿 这些都合并在一起显示的)

---

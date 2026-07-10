# `struct` `FModSaveRecord`

**源码头文件:** `EastRimWorld/Mod/ModInfo.h`

---

## 功能说明（来自头文件注释）

> 存档中记录的单个已启用 Mod（随主存档序列化，读档时用于兼容检查）

## 蓝图暴露变量

### 属性 `ModId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) FName ModId;` |

**说明:**

> 存档中记录的已启用 Mod 的唯一标识符

---

### 属性 `Version`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) FString Version;` |

**说明:**

> 存档时该 Mod 的版本号

---

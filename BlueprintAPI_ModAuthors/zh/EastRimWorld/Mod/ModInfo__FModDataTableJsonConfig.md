# `struct` `FModDataTableJsonConfig`

**源码头文件:** `EastRimWorld/Mod/ModInfo.h`

---

## 功能说明（来自头文件注释）

> ModInfo.json 中记录的配置表 JSON 条目（打包时由 CreateModPlugin 写入）

## 蓝图暴露变量

### 属性 `ConfigType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString ConfigType;` |

**说明:**

> 配置表的类型名称

---

### 属性 `JsonFile`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString JsonFile;` |

**说明:**

> 打包导出的配置表 JSON 文件路径

---

### 属性 `StructName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FString StructName;` |

**说明:**

> 配置表行结构体的名称

---

### 属性 `bOverrideData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) bool bOverrideData = false;` |

**说明:**

> 是否覆盖游戏原有的配置表数据

---

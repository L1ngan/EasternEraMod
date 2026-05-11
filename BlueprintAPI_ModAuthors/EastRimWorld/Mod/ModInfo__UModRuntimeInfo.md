# `class` `UModRuntimeInfo`

**源码头文件：** `EastRimWorld/Mod/ModInfo.h`

---

## 功能说明（来自头文件注释）

> Mod运行时信息
> 用于在运行时管理Mod的状态

## 蓝图暴露变量

### 属性 `Metadata`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FModMetadata` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FModMetadata Metadata;` |

**源码注释：**

> Mod元数据

---

### 属性 `LoadState`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModLoadState` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) EModLoadState LoadState = EModLoadState::NotLoaded;` |

**源码注释：**

> Mod加载状态

---

### 属性 `ModRootPath`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString ModRootPath;` |

**源码注释：**

> Mod根目录路径

---

### 属性 `LuaEnvironmentName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString LuaEnvironmentName;` |

**源码注释：**

> Mod的Lua环境（如果使用Lua）

---

### 属性 `LoadTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FDateTime` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FDateTime LoadTime;` |

**源码注释：**

> 加载时间戳

---

### 属性 `ErrorMessage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString ErrorMessage;` |

**源码注释：**

> 错误信息（如果加载失败）

---

### 属性 `MountedPakFiles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FString>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FString> MountedPakFiles;` |

**源码注释：**

> 已挂载的Pak中的文件

---

### 属性 `MountedPaks`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FString>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TArray<FString> MountedPaks;` |

**源码注释：**

> 已挂载的Pak

---

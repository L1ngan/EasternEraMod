# `struct` `FPresetMeshData`

**源码头文件:** `EastRimWorld/Building/ERW_Preset.h`

---

## 功能说明（来自头文件注释）

> 预设模型数据

## 蓝图暴露变量

### 属性 `StaticMeshComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UStaticMeshComponent*` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) UStaticMeshComponent* StaticMeshComponent { nullptr };` |

**源码注释:**

> 静态模型组件

---

### 属性 `EnvironType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EEnvironType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EEnvironType EnvironType { EEnvironType::None };` |

**源码注释:**

> 环境类型

---

### 属性 `IsWide`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) bool IsWide { false };` |

**源码注释:**

> 是否是宽的门或窗

---

# `struct` `FGWOReplaceInstanceMeshStruct`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 按静态网格分组的实例化替换数据（ISM组件及实例变换列表）

## 蓝图暴露变量

### 属性 `instancedStaticComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(Transient) class UInstancedStaticMeshComponent* instancedStaticComponent = nullptr;` |

**说明:**

> 运行时实例化网格组件缓存（标 Transient 防止序列化悬空指针致崩）

---

### 属性 `replaceableStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UStaticMesh*` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() class UStaticMesh* replaceableStaticMesh = nullptr;` |

**说明:**

> 用于实例化替换的静态网格

---

### 属性 `instTransformArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FTransform>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FTransform> instTransformArr;` |

**说明:**

> 该网格所有实例的变换数组

---

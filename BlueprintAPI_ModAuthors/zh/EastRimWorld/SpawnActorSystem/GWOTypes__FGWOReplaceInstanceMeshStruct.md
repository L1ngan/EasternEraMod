# `struct` `FGWOReplaceInstanceMeshStruct`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `instancedStaticComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UInstancedStaticMeshComponent*` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() class UInstancedStaticMeshComponent* instancedStaticComponent = nullptr;` |

---

### 属性 `replaceableStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UStaticMesh*` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() class UStaticMesh* replaceableStaticMesh = nullptr;` |

---

### 属性 `instTransformArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FTransform>` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TArray<FTransform> instTransformArr;` |

---

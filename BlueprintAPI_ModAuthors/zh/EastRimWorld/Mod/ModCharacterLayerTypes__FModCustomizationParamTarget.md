# `struct` `FModCustomizationParamTarget`

**源码头文件:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## 功能说明（来自头文件注释）

> 一个捏脸滑条改动的一个插件参数

## 蓝图暴露变量

### 属性 `TargetType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModCustomizationTargetType](ModCharacterLayerTypes__EModCustomizationTargetType.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) EModCustomizationTargetType TargetType = EModCustomizationTargetType::MorphTarget;` |

---

### 属性 `ParameterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ParameterName;` |

**说明:**

> 插件里的参数名（形变名、动画混合参数名或材质参数名）

---

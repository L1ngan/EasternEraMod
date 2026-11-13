# `struct` `FModCustomizationColorConfig`

**源码头文件:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## 功能说明（来自头文件注释）

> 开放给 Mod 的颜色参数（照官方宗门时装界面的取色器配置）

## 蓝图暴露变量

### 属性 `ID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ID;` |

---

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FText DisplayName;` |

---

### 属性 `Target`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EModCustomizationColorTarget](ModCharacterLayerTypes__EModCustomizationColorTarget.md) |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) EModCustomizationColorTarget Target = EModCustomizationColorTarget::Skin;` |

---

### 属性 `ParameterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName ParameterName;` |

**说明:**

> 插件里的材质参数名

---

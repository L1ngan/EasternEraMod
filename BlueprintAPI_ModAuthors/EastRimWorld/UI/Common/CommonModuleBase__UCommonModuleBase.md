# `class` `UCommonModuleBase`

**源码头文件：** `EastRimWorld/UI/Common/CommonModuleBase.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `InputModuleInfo`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FInstancedStruct` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FInstancedStruct InputModuleInfo;` |

---

### 属性 `InputObject`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UObject>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) TObjectPtr<UObject> InputObject;` |

---

## 蓝图暴露函数

### 函数 `InitModuleInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InInputModuleInfo` | `const FInstancedStruct &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) void InitModuleInfo(const FInstancedStruct & InInputModuleInfo);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 初始化模块信息

---

### 函数 `InitModuleInfoByObject`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `InObject` | `UObject *` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) void InitModuleInfoByObject(UObject * InObject);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**源码注释：**

> 初始化模块通过object

---

### 函数 `UpdateModuleInfo`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintImplementableEvent) void UpdateModuleInfo();`

**用法说明：** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**源码注释：**

> 更新模块信息

---

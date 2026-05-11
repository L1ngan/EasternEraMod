# `class` `UEastRimWorldSceneTextWidget`

**源码头文件：** `EastRimWorld/UI/Common/EastRimWorldSceneTextWidget.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `TextAnimationComplete`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTextAnimationComplete` |
| 反射说明符 | BlueprintCallable, BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable,BlueprintCallable) FTextAnimationComplete TextAnimationComplete;` |

---

### 属性 `TextAnimations`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString,UWidgetAnimation*>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TMap<FString,UWidgetAnimation*> TextAnimations;` |

**源码注释：**

> 界面中包含的所有动画

---

## 蓝图暴露函数

### 函数 `InitSceneTextWidget`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintNativeEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `GenericTeamId` | `const FGenericTeamId &` |
| `SceneTextInfo` | `const FSceneTextInfo &` |
| `InText` | `const FText &` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintNativeEvent) void InitSceneTextWidget(const FGenericTeamId & GenericTeamId,const FSceneTextInfo & SceneTextInfo,const FText & InText);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。 **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

---

### 函数 `InitAllWidgetAnimations`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void InitAllWidgetAnimations();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

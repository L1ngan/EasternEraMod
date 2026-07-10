# `struct` `FFacilityDefineData`

**源码头文件:** `EastRimWorld/Struct/BuildingData.h`

---

## 功能说明（来自头文件注释）

> 设施智能对象定义数据：包含交互动画与设施交互动画两个蒙太奇

## 蓝图暴露变量

### 属性 `AnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UAnimMontage>` |
| 反射说明符 | BlueprintReadOnly, Category="Animation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "Animation") TSoftObjectPtr<UAnimMontage> AnimMontage;` |

**说明:**

> 交互动画

---

### 属性 `FacilityAnimMontage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UAnimMontage>` |
| 反射说明符 | BlueprintReadOnly, Category="Animation" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditDefaultsOnly, Category = "Animation") TSoftObjectPtr<UAnimMontage> FacilityAnimMontage;` |

**说明:**

> 设施交互动画

---

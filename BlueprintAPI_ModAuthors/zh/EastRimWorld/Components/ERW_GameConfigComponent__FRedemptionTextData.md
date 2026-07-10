# `struct` `FRedemptionTextData`

**源码头文件:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 赎回文本数据行(按正邪值区间对应的赎回文本列表)

## 蓝图暴露变量

### 属性 `JusticeValueRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector2D` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FVector2D JusticeValueRange = FVector2D::ZeroVector;` |

**说明:**

> 适用的正邪值区间(X为下限,Y为上限)

---

### 属性 `RedemptionTexts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FText> RedemptionTexts;` |

**说明:**

> 该正邪值区间对应的赎回文本列表

---

# `struct` `FModHairstyleOption`

**源码头文件:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## 功能说明（来自头文件注释）

> GetCharacterHairstyles 的返回项

## 蓝图暴露变量

### 属性 `HairstyleId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FString HairstyleId;` |

**说明:**

> 发型 ID（发型数据资产路径），传给 SetCharacterHairstyle

---

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) FText DisplayName;` |

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) TObjectPtr<UTexture2D> Icon = nullptr;` |

---

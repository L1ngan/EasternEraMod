# `class` `UEastRimWorldWidgetFactory`

**源码头文件:** `EastRimWorld/UI/Common/EastRimWorldWidgetFactory.h`

---

## 功能说明（来自头文件注释）

> East Rim World Widget Factory UObject 类型。

## 蓝图暴露函数

### 函数 `FindWidgetClassForData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintNativeEvent |
| 返回类型 | `TSubclassOf<UUserWidget>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Data` | `const UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintNativeEvent) TSubclassOf<UUserWidget> FindWidgetClassForData(const UObject* Data) const;`

**用法说明:** **BlueprintNativeEvent**：蓝图可重写；C++ 默认实现在 `xxx_Implementation`。

**说明:**

> 获取或查询 Find Widget Class For Data。

---

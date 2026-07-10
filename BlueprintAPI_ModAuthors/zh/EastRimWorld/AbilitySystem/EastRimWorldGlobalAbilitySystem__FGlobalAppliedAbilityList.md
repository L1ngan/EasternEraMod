# `struct` `FGlobalAppliedAbilityList`

**源码头文件:** `EastRimWorld/AbilitySystem/EastRimWorldGlobalAbilitySystem.h`

---

## 功能说明（来自头文件注释）

> 记录某技能类已施加到各ASC的授予句柄列表，支持按ASC或整体移除

## 蓝图暴露变量

### 属性 `Handles`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<TObjectPtr<[UEastRimWorldAbilitySystemComponent](EastRimWorldAbilitySystemComponent__UEastRimWorldAbilitySystemComponent.md)>, FGameplayAbilitySpecHandle> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() TMap<TObjectPtr<UEastRimWorldAbilitySystemComponent>, FGameplayAbilitySpecHandle> Handles;` |

**说明:**

> ASC到已授予技能Spec句柄的映射

---

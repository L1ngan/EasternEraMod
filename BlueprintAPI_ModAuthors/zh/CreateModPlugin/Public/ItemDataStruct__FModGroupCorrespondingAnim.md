# `struct` `FModGroupCorrespondingAnim`

**源码头文件:** `CreateModPlugin/Public/ItemDataStruct.h`

---

## 功能说明（来自头文件注释）

> 动画组结构：组编号到动画蒙太奇的映射，用于行为对应的动画配置

## 蓝图暴露变量

### 属性 `AnimGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32, TSoftObjectPtr<UAnimMontage>>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, TSoftObjectPtr<UAnimMontage>> AnimGroup;` |

**说明:**

> 动画组映射，键为组编号，值为对应的动画蒙太奇（软引用）

---

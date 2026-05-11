# `struct` `FAssemblePartTransform`

**源码头文件:** `EastRimWorld/ERW_CommonTypes.h`

---

## 功能说明（来自头文件注释）

> 组装建筑部位的Transform

## 蓝图暴露变量

### 属性 `AssemblePartType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EAssemblePartType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) EAssemblePartType AssemblePartType = EAssemblePartType::None;` |

**源码注释:**

> 组装部位类型

---

### 属性 `Transform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FTransform Transform;` |

**源码注释:**

> 相对坐标

---

# `struct` `FPuppetPlatformMeshConfig`

**源码头文件：** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 傀儡台

## 蓝图暴露变量

### 属性 `MeshTransform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) FTransform MeshTransform;` |

**源码注释：**

> 模型相对位置

---

### 属性 `IdleAnim`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UAnimationAsset>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TSoftObjectPtr<UAnimationAsset> IdleAnim;` |

**源码注释：**

> 待机动画

---

# `struct` `FGWOActorReplaceParameters`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 演员替换为静态网格实例时的参数（网格与位置/旋转偏移）

## 蓝图暴露变量

### 属性 `replaceableStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FSoftObjectPath` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FSoftObjectPath replaceableStaticMesh;` |

**说明:**

> 用于替换演员的静态网格资源软路径

---

### 属性 `locationOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FVector locationOffset = FVector::ZeroVector;` |

**说明:**

> 替换网格相对演员的位置偏移

---

### 属性 `rotatorOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FRotator` |
| 反射说明符 | BlueprintReadWrite, Category="Actor Spawn Parameters" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actor Spawn Parameters") FRotator rotatorOffset = FRotator::ZeroRotator;` |

**说明:**

> 替换网格相对演员的旋转偏移

---

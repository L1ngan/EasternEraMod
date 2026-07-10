# `struct` `FGWOReplaceMeshRuleStruct`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 替换网格规则数据表行（网格、投影阴影、碰撞类型）

## 蓝图暴露变量

### 属性 `staticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `class UStaticMesh*` |
| 反射说明符 | BlueprintReadWrite, Category="Replace Mesh Rule" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") class UStaticMesh* staticMesh = nullptr;` |

**说明:**

> 该规则对应的静态网格资源

---

### 属性 `bCastShadow`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite, Category="Replace Mesh Rule" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") bool bCastShadow = true;` |

**说明:**

> 替换网格实例是否投射阴影

---

### 属性 `collisionType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TEnumAsByte<ECollisionEnabled::Type>` |
| 反射说明符 | BlueprintReadWrite, Category="Replace Mesh Rule" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Replace Mesh Rule") TEnumAsByte<ECollisionEnabled::Type> collisionType = ECollisionEnabled::NoCollision;` |

**说明:**

> 替换网格实例的碰撞启用类型（默认无碰撞）

---

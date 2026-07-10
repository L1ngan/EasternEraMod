# `struct` `FWeaponsInfo`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 武器插槽网格信息：武器静态网格组件、手持插槽与携带插槽名称

## 蓝图暴露变量

### 属性 `WeaponStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UStaticMeshComponent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) TObjectPtr<UStaticMeshComponent> WeaponStaticMesh;` |

**说明:**

> 携带的武器插槽对应的网格组件

---

### 属性 `HandParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadOnly) FName HandParentSocket = NAME_None;` |

**说明:**

> 手持武器的插槽

---

### 属性 `CarryParentSocket`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere,BlueprintReadOnly) FName CarryParentSocket = NAME_None;` |

**说明:**

> 携带武器的插槽

---

# `struct` `FCharacterTool`

**源码头文件:** `EastRimWorld/Struct/ItemStruct.h`

---

## 功能说明（来自头文件注释）

> 角色工具

## 蓝图暴露变量

### 属性 `ToolType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EToolType` |
| 反射说明符 | BlueprintReadWrite, Category="Tool" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Tool") EToolType ToolType = EToolType::None;` |

---

### 属性 `CollectLossDurability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite, Category="Weapon" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Weapon") float CollectLossDurability = 0.f;` |

**源码注释:**

> 采集掉耐久

---

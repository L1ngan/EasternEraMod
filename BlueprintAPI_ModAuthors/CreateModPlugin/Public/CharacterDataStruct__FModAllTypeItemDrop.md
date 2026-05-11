# `struct` `FModAllTypeItemDrop`

**源码头文件：** `CreateModPlugin/Public/CharacterDataStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `ItemType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EModGroundInventoryType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) EModGroundInventoryType ItemType = EModGroundInventoryType::None;` |

**源码注释：**

> 掉落物的类型

---

### 属性 `DropNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite) int32 DropNum = 0;` |

**源码注释：**

> 掉落物的数量

---

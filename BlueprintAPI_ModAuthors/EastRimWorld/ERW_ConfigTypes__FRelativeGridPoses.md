# `struct` `FRelativeGridPoses`

**源码头文件：** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 物体的相对格子坐标

## 蓝图暴露变量

### 属性 `GridPoses`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FGridPosition](ERW_CommonTypes__FGridPosition.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , SaveGame) TArray<FGridPosition> GridPoses;` |

---

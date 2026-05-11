# `struct` `FClosureAreas`

**源码头文件：** `EastRimWorld/Components/ERW_MapDataMgr.h`

---

## 功能说明（来自头文件注释）

> 同一层的所有闭合区域

## 蓝图暴露变量

### 属性 `HeatSourceRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FClosureAreaRange,[FHeatSourceAreaData](ERW_MapDataMgr__FHeatSourceAreaData.md)> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly ,SaveGame) TMap<FClosureAreaRange,FHeatSourceAreaData> HeatSourceRange;` |

---

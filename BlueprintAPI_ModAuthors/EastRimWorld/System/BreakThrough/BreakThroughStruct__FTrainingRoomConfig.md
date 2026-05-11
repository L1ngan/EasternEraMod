# `struct` `FTrainingRoomConfig`

**源码头文件：** `EastRimWorld/System/BreakThrough/BreakThroughStruct.h`

---

## 功能说明（来自头文件注释）

> 练功房配置

## 蓝图暴露变量

### 属性 `ElementType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EFiveElementType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) EFiveElementType ElementType = EFiveElementType::None;` |

**源码注释：**

> 五行类型

---

### 属性 `LevelConfigs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<int32, [FTrainingRoomLevelConfig](BreakThroughStruct__FTrainingRoomLevelConfig.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<int32, FTrainingRoomLevelConfig> LevelConfigs;` |

**源码注释：**

> 各等级配置

---

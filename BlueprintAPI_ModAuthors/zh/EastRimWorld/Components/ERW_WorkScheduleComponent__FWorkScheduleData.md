# `struct` `FWorkScheduleData`

**源码头文件:** `EastRimWorld/Components/ERW_WorkScheduleComponent.h`

---

## 功能说明（来自头文件注释）

> 工作日程数据

## 蓝图暴露变量

### 属性 `Schedules`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32 , FName>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<int32 , FName> Schedules;` |

**说明:**

> TMap<时间点(小时) , 工作日程配置行名>

---

### 属性 `Agents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid , [AEastRimWorldCharacter](../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Transient) TMap<FGuid , AEastRimWorldCharacter*> Agents;` |

**说明:**

> 执行此计划的角色（运行时缓存；标 Transient 不入盘，避免序列化裸角色指针悬空致崩）
> 读档身份由各角色 FCharacterSaveData::CurrentWorkScheduleName 持有，角色重建后回注
> （见 AEastRimWorldCharacter::ReinjectToWorkScheduleAfterLoad）

---

# `struct` `FWorkScheduleData`

**源码头文件：** `EastRimWorld/Components/ERW_WorkScheduleComponent.h`

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

**源码注释：**

> TMap<时间点(小时) , 工作日程配置行名>

---

### 属性 `Agents`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FGuid , AEastRimWorldCharacter*>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) TMap<FGuid , AEastRimWorldCharacter*> Agents;` |

**源码注释：**

> 执行此计划的角色
> TMap<角色的Guid , 角色>

---

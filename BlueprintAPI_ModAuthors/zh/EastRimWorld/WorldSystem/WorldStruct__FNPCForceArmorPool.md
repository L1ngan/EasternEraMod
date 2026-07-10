# `struct` `FNPCForceArmorPool`

**源码头文件:** `EastRimWorld/WorldSystem/WorldStruct.h`

---

## 功能说明（来自头文件注释）

> NPC Force Armor Pool 数据结构。

## 蓝图暴露变量

### 属性 `ForceArmorDataPool`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<FName,float> ForceArmorDataPool;` |

**说明:**

> 培养角色的防具池<DT_EquipmentQualityRange表ID,成长积分>

---

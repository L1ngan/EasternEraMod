# `struct` `FObserveObjectsRecordMap`

**源码头文件:** `EastRimWorld/Struct/ObserveStruct.h`

---

## 功能说明（来自头文件注释）

> Observe Objects Record Map 数据结构。

## 蓝图暴露变量

### 属性 `ObservedRecord`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FName,[FObservedObjectsRecord](ObserveStruct__FObservedObjectsRecord.md)> |
| 反射说明符 | BlueprintReadWrite, Category="Base" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Base") TMap<FName,FObservedObjectsRecord> ObservedRecord;` |

**说明:**

> Observed Record 字段。

---

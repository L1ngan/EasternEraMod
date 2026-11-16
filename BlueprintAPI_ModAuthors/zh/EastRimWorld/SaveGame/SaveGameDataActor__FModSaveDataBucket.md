# `struct` `FModSaveDataBucket`

**源码头文件:** `EastRimWorld/SaveGame/SaveGameDataActor.h`

---

## 功能说明（来自头文件注释）

> Mod 按存档保存的一份键值数据（一个 Mod 一份）。值的格式由 Mod 自定；内层键用 FString：Savior 对 Map 值走 JSON 转换，FName 键会被改大小写

## 蓝图暴露变量

### 属性 `Values`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString, FString>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, SaveGame) TMap<FString, FString> Values;` |

**说明:**

> 键 -> 值（格式由 Mod 自定）

---

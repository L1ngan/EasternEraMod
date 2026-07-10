# `struct` `FCharacterAttributeSaveData`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 角色属性存档数据

## 蓝图暴露变量

### 属性 `Data`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FString , [FAttributeSetSaveData](CharacterStruct__FAttributeSetSaveData.md)> |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) TMap<FString , FAttributeSetSaveData> Data;` |

**说明:**

> TMap<属性名 , 属性存档数据>

---

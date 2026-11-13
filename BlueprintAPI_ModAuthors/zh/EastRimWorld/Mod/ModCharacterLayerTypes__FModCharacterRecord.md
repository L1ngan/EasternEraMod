# `struct` `FModCharacterRecord`

**源码头文件:** `EastRimWorld/Mod/ModCharacterLayerTypes.h`

---

## 功能说明（来自头文件注释）

> MOD 数据区里一个角色的记录（按角色 Guid 存在 ASaveGameDataActor::ModCharacterRecords）。
> 只记 MOD 写的东西，游戏原有字段（CustomizationId、AvatarConfigID、主角捏脸档案）一律不写；
> 捏脸档案本体是插件的蓝图结构体，放在 BP_SaveGameData 的蓝图变量 ModAppearanceProfiles 里，这里只放元数据。

## 蓝图暴露变量

### 属性 `AppearanceModId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FName AppearanceModId;` |

**说明:**

> 最后写捏脸的 Mod；None 表示没有捏脸层

---

### 属性 `AppearanceAssetRefs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FString, FSoftObjectPath>` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) TMap<FString, FSoftObjectPath> AppearanceAssetRefs;` |

**说明:**

> 捏脸档案里每个对象引用的软路径（键为属性路径）。档案里的发型等是硬引用，写它的 Mod 停用时读档会变空，靠这份补回

---

### 属性 `PresetOverrideId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FString PresetOverrideId;` |

**说明:**

> Mod 换的捏脸预设（预设表行名）；为空表示没换

---

### 属性 `PresetModId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FName PresetModId;` |

**说明:**

> 换预设的 Mod

---

### 属性 `AvatarConfigId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FName AvatarConfigId;` |

**说明:**

> Mod 指定的立绘行（立绘表行名）；None 表示没指定

---

### 属性 `AvatarModId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame, BlueprintReadOnly) FName AvatarModId;` |

**说明:**

> 指定立绘的 Mod

---

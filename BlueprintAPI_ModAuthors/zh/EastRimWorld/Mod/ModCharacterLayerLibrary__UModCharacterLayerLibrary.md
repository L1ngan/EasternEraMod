# `class` `UModCharacterLayerLibrary`

**源码头文件:** `EastRimWorld/Mod/ModCharacterLayerLibrary.h`

---

## 功能说明（来自头文件注释）

> MOD 角色数据层。
> MOD 写的捏脸、换的预设、指定的立绘都按角色 Guid 存在 MOD 数据区（ASaveGameDataActor::ModCharacterRecords
> 与 BP_SaveGameData 的蓝图变量 ModAppearanceProfiles），游戏原有字段一律不写；生成外观、取立绘时在这里叠加。
> 写它的 Mod 没加载时 MOD 数据不生效，角色按原数据显示，MOD 数据原样保留。

## 蓝图暴露函数

### 函数 `ResolveCharacterAvatarPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintPure, Category="Mod System|Character" |
| 返回类型 | `FSoftObjectPath` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `const UObject*` |
| `CharacterGuid` | `FGuid` |
| `OriginalAvatar` | `FSoftObjectPath` |
| `AvatarType` | [EDiscipleAvatarType](../Struct/CharacterStruct__EDiscipleAvatarType.md) |

**原始声明（单行节选）:** `UFUNCTION(BlueprintPure, Category = "Mod System|Character", meta = (WorldContext = "WorldContextObject")) static FSoftObjectPath ResolveCharacterAvatarPath(const UObject* WorldContextObject, FGuid CharacterGuid, FSoftObjectPath OriginalAvatar, EDiscipleAvatarType AvatarType);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**说明:**

> 界面用：按角色 Guid 取生效的立绘路径；有 MOD 立绘时返回它，否则原样返回 OriginalAvatar

---

# `struct` `FCharacterAvatarConfig`

**源码头文件:** `EastRimWorld/Struct/CharacterStruct.h`

---

## 功能说明（来自头文件注释）

> 角色立绘配置（DT_CharacterAvatarConfig 表行，EGameConfigType::CharacterAvatarConfig）
> 一行集中一套立绘，使用方通过 AERW_GameModeBase::GetCharacterAvatarConfig(ID) 获取

## 蓝图暴露变量

### 属性 `Avatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Avatar;` |

**说明:**

> 头像

---

### 属性 `HalfAvatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> HalfAvatar;` |

**说明:**

> 半身立绘

---

### 属性 `HalfUIAvatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> HalfUIAvatar;` |

**说明:**

> UI半身立绘

---

### 属性 `HalfTourAvatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> HalfTourAvatar;` |

**说明:**

> 比武半身立绘

---

### 属性 `SmallTourAvatar`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> SmallTourAvatar;` |

**说明:**

> 比武小图

---

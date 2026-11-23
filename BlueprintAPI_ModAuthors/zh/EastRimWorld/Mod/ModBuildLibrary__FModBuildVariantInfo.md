# `struct` `FModBuildVariantInfo`

**源码头文件:** `EastRimWorld/Mod/ModBuildLibrary.h`

---

## 功能说明（来自头文件注释）

> 建筑的一种可选规格(同族建筑行, 见建筑配置的 VariantOf)

## 蓝图暴露变量

### 属性 `VariantId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Mod System|Build" |
| 蓝图侧含义 | 蓝图仅可 **读取**。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") FName VariantId;` |

**说明:**

> 规格的建筑 ID(本体自己也算一条, 等于 BuildId)

---

### 属性 `BuildId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadOnly, Category="Mod System|Build" |
| 蓝图侧含义 | 蓝图仅可 **读取**。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") FName BuildId;` |

**说明:**

> 规格本体的建筑 ID

---

### 属性 `DisplayName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadOnly, Category="Mod System|Build" |
| 蓝图侧含义 | 蓝图仅可 **读取**。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") FText DisplayName;` |

**说明:**

> 规格行菜单行的显示名(保留菜单行里的字符表引用)

---

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly, Category="Mod System|Build" |
| 蓝图侧含义 | 蓝图仅可 **读取**。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") TObjectPtr<UTexture2D> Icon;` |

**说明:**

> 规格行菜单行的图标

---

### 属性 `Size`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FIntVector` |
| 反射说明符 | BlueprintReadOnly, Category="Mod System|Build" |
| 蓝图侧含义 | 蓝图仅可 **读取**。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") FIntVector Size;` |

**说明:**

> 规格行配置的占格尺寸(旋转前, Z 为占高)

---

### 属性 `bIsDefault`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Mod System|Build" |
| 蓝图侧含义 | 蓝图仅可 **读取**。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") bool bIsDefault;` |

**说明:**

> 是否本体

---

### 属性 `bAvailable`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="Mod System|Build" |
| 蓝图侧含义 | 蓝图仅可 **读取**。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") bool bAvailable;` |

**说明:**

> 是否通过建造配置与解锁检查(同 CanBuild);不代表一定能进入放置(还要在基地里操控玩家 Pawn), 也不含落点和数量上限

---

### 属性 `UnavailableReason`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `EBuildUnavailableReason` |
| 反射说明符 | BlueprintReadOnly, Category="Mod System|Build" |
| 蓝图侧含义 | 蓝图仅可 **读取**。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , Category = "Mod System|Build") EBuildUnavailableReason UnavailableReason;` |

**说明:**

> bAvailable 为 false 时的原因

---


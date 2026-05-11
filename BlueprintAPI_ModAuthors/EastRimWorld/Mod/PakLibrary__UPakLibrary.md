# `class` `UPakLibrary`

**源码头文件：** `EastRimWorld/Mod/PakLibrary.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `MountAndRegisterPak`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PAK" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PakFilePath` | `FString` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "PAK") static bool MountAndRegisterPak(FString PakFilePath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `MountPakFile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PAK" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PakFilePath` | `const FString&` |
| `PakMountPoint` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "PAK") static bool MountPakFile(const FString& PakFilePath, const FString& PakMountPoint);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `UnmountPakFile`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PAK" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PakFilePath` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "PAK") static bool UnmountPakFile(const FString& PakFilePath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `RegisterMountPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PAK" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RootPath` | `const FString&` |
| `ContentPath` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "PAK") static void RegisterMountPoint(const FString& RootPath, const FString& ContentPath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `UnRegisterMountPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="PAK" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `RootPath` | `const FString&` |
| `ContentPath` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, Category = "PAK") static void UnRegisterMountPoint(const FString& RootPath, const FString& ContentPath);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetPakMountPoint`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="PAK" |
| 返回类型 | `FString const` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PakFilePath` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "PAK") static FString const GetPakMountPoint(const FString& PakFilePath);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetPakContent`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="PAK" |
| 返回类型 | `TArray<FString>` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PakFilePath` | `const FString&` |
| `true` | `bool bOnlyCooked =` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "PAK") static TArray<FString> GetPakContent(const FString& PakFilePath, bool bOnlyCooked = true);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `GetPakMountContentPath`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="PAK" |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PakFilePath` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "PAK") static FString GetPakMountContentPath(const FString& PakFilePath);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `LoadPakObjClassReference`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="PAK" |
| 返回类型 | `UClass*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PakContentPath` | `FString` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PAK") static UClass* LoadPakObjClassReference(FString PakContentPath);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `LoadPakFileClass`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="PAK" |
| 返回类型 | `UClass*` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `FileName` | `const FString&` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PAK") static UClass* LoadPakFileClass(const FString& FileName);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

### 函数 `Conv_PakContentPathToReferenceString`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="PAK" |
| 返回类型 | `FString` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `PakContentPath` | `const FString` |
| `PakMountPath` | `const FString` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PAK") static FString Conv_PakContentPathToReferenceString(const FString PakContentPath, const FString PakMountPath);`

**用法说明：** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

---

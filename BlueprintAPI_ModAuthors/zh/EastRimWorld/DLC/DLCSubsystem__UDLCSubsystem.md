# `class` `UDLCSubsystem`

**源码头文件:** `EastRimWorld/DLC/DLCSubsystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露函数

### 函数 `MountAllDLCPak`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool MountAllDLCPak();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetAllDLCInformationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UDLCInformationAsset](DLCSubsystem__UDLCInformationAsset.md)*> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UDLCInformationAsset*> GetAllDLCInformationAsset();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `IsDLCInstalled`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DLCId` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,BlueprintPure) bool IsDLCInstalled(int DLCId);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> Dlc是否拥有且安装

---

### 函数 `OpenStore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DLCId` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) void OpenStore(int DLCId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 打开商店

---

### 函数 `SteamToWebPage`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `URl` | `FString` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static void SteamToWebPage(FString URl);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `OpenSteamStore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static void OpenSteamStore();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CheckCanLoadSaveGame`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NeedDLCId` | `TArray<int>` |
| `OutNeedDLCId` | `TMap<int,EDLCActiveState> &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanLoadSaveGame(TArray<int> NeedDLCId,TMap<int,EDLCActiveState> & OutNeedDLCId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetDLCState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `EDLCActiveState` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DLCInfoConfig` | const [FDLCInfoConfig](DLCSubsystem__FDLCInfoConfig.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) EDLCActiveState GetDLCState(const FDLCInfoConfig & DLCInfoConfig);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取dlc的状态

---

### 函数 `GetDlcDownloadProgress`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DLCId` | `int` |
| `bDownload` | `bool &` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static float GetDlcDownloadProgress(int DLCId,bool & bDownload);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 获取dlc的下载进度

---

### 函数 `InstallDLC`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DLCId` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static void InstallDLC(int DLCId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 安装dlc

---

### 函数 `UninstallDLC`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DLCId` | `int` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static void UninstallDLC(int DLCId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 卸载dlc

---

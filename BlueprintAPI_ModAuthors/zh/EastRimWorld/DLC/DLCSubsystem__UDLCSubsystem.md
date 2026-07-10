# `class` `UDLCSubsystem`

**源码头文件:** `EastRimWorld/DLC/DLCSubsystem.h`

---

## 功能说明（来自头文件注释）

> DLC子系统，负责挂载DLC的Pak包、读取DLC信息资产、查询DLC安装与激活状态以及打开Steam商店页面。

## 蓝图暴露函数

### 函数 `MountAllDLCPak`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool MountAllDLCPak();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 挂载所有DLC的Pak文件，返回是否成功。

---

### 函数 `GetAllDLCInformationAsset`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | TArray<[UDLCInformationAsset](DLCSubsystem__UDLCInformationAsset.md)*> |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) TArray<UDLCInformationAsset*> GetAllDLCInformationAsset();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 获取所有已挂载DLC包中的DLC信息资产列表。

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

**说明:**

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

**说明:**

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

**说明:**

> 通过Steam打开指定URL的网页。

---

### 函数 `OpenSteamStore`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) static void OpenSteamStore();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 打开Steam商店页面。

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
| `OutNeedDLCId` | TMap<int,[EDLCActiveState](DLCSubsystem__EDLCActiveState.md)> & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanLoadSaveGame(TArray<int> NeedDLCId,TMap<int,EDLCActiveState> & OutNeedDLCId);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

> 检查存档所需的DLC是否全部可用，输出不满足的DLC ID及其激活状态，返回是否可以加载该存档。

---

### 函数 `GetDLCState`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [EDLCActiveState](DLCSubsystem__EDLCActiveState.md) |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `DLCInfoConfig` | const [FDLCInfoConfig](DLCSubsystem__FDLCInfoConfig.md) & |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) EDLCActiveState GetDLCState(const FDLCInfoConfig & DLCInfoConfig);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**说明:**

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

**说明:**

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

**说明:**

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

**说明:**

> 卸载dlc

---

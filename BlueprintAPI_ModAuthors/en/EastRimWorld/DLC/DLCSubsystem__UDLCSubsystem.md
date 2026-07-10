# `class` `UDLCSubsystem`

**Source header:** `EastRimWorld/DLC/DLCSubsystem.h`

---

## Functional description (from header comments)

> DLC subsystem responsible for mounting DLC pak files, reading DLC information assets, querying DLC install/activation states and opening the Steam store page.

## Blueprint-exposed functions

### Function `MountAllDLCPak`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool MountAllDLCPak();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Mounts all DLC pak files and returns whether it succeeded.

---

### Function `GetAllDLCInformationAsset`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | TArray<[UDLCInformationAsset](DLCSubsystem__UDLCInformationAsset.md)*> |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) TArray<UDLCInformationAsset*> GetAllDLCInformationAsset();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Returns the list of DLC information assets from all mounted DLC paks.

---

### Function `IsDLCInstalled`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DLCId` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure) bool IsDLCInstalled(int DLCId);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Dlc是否拥有且安装

---

### Function `OpenStore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DLCId` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) void OpenStore(int DLCId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 打开商店

---

### Function `SteamToWebPage`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `URl` | `FString` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void SteamToWebPage(FString URl);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Opens the specified URL web page via Steam.

---

### Function `OpenSteamStore`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | (none) |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void OpenSteamStore();`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Opens the Steam store page.

---

### Function `CheckCanLoadSaveGame`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `NeedDLCId` | `TArray<int>` |
| `OutNeedDLCId` | TMap<int,[EDLCActiveState](DLCSubsystem__EDLCActiveState.md)> & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) bool CheckCanLoadSaveGame(TArray<int> NeedDLCId,TMap<int,EDLCActiveState> & OutNeedDLCId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Checks whether all DLCs required by a save game are available, outputs the unsatisfied DLC IDs with their activation states, and returns whether the save can be loaded.

---

### Function `GetDLCState`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | [EDLCActiveState](DLCSubsystem__EDLCActiveState.md) |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DLCInfoConfig` | const [FDLCInfoConfig](DLCSubsystem__FDLCInfoConfig.md) & |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) EDLCActiveState GetDLCState(const FDLCInfoConfig & DLCInfoConfig);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取dlc的状态

---

### Function `GetDlcDownloadProgress`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `float` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DLCId` | `int` |
| `bDownload` | `bool &` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static float GetDlcDownloadProgress(int DLCId,bool & bDownload);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 获取dlc的下载进度

---

### Function `InstallDLC`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DLCId` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void InstallDLC(int DLCId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 安装dlc

---

### Function `UninstallDLC`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `DLCId` | `int` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable) static void UninstallDLC(int DLCId);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> 卸载dlc

---

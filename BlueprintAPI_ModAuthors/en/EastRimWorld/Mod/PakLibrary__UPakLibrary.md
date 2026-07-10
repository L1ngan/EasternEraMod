# `class` `UPakLibrary`

**Source header:** `EastRimWorld/Mod/PakLibrary.h`

---

## Functional description (from header comments)

> Blueprint function library for Pak file operations (mount/unmount Paks, register mount points, load classes from Paks)

## Blueprint-exposed functions

### Function `MountAndRegisterPak`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PAK" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PakFilePath` | `FString` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PAK") static bool MountAndRegisterPak(FString PakFilePath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Mounts a Pak file and registers its mount point; returns whether it succeeded

---

### Function `MountPakFile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PAK" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PakFilePath` | `const FString&` |
| `PakMountPoint` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PAK") static bool MountPakFile(const FString& PakFilePath, const FString& PakMountPoint);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Mounts a Pak file at the specified mount point; returns whether it succeeded

---

### Function `UnmountPakFile`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PAK" |
| Return type | `bool` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PakFilePath` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PAK") static bool UnmountPakFile(const FString& PakFilePath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Unmounts the specified Pak file; returns whether it succeeded

---

### Function `RegisterMountPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PAK" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RootPath` | `const FString&` |
| `ContentPath` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PAK") static void RegisterMountPoint(const FString& RootPath, const FString& ContentPath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Registers a mount point (maps a root path to a content path)

---

### Function `UnRegisterMountPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, Category="PAK" |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `RootPath` | `const FString&` |
| `ContentPath` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, Category = "PAK") static void UnRegisterMountPoint(const FString& RootPath, const FString& ContentPath);`

**Usage:** Appears as a **callable** Blueprint function node (with exec pins).

**Notes:**

> Unregisters a mount point (the root path to content path mapping)

---

### Function `GetPakMountPoint`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="PAK" |
| Return type | `FString const` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PakFilePath` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "PAK") static FString const GetPakMountPoint(const FString& PakFilePath);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the mount point of a Pak file

---

### Function `GetPakContent`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="PAK" |
| Return type | `TArray<FString>` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PakFilePath` | `const FString&` |
| `true` | `bool bOnlyCooked =` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "PAK") static TArray<FString> GetPakContent(const FString& PakFilePath, bool bOnlyCooked = true);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the list of file paths inside a Pak file (optionally only cooked assets)

---

### Function `GetPakMountContentPath`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="PAK" |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PakFilePath` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable,BlueprintPure, Category = "PAK") static FString GetPakMountContentPath(const FString& PakFilePath);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Returns the mounted content path of a Pak file

---

### Function `LoadPakObjClassReference`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="PAK" |
| Return type | `UClass*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PakContentPath` | `FString` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PAK") static UClass* LoadPakObjClassReference(FString PakContentPath);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Loads an object class reference (UClass) from a Pak content path

---

### Function `LoadPakFileClass`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="PAK" |
| Return type | `UClass*` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `FileName` | `const FString&` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PAK") static UClass* LoadPakFileClass(const FString& FileName);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Loads a class (UClass) from a Pak by file name

---

### Function `Conv_PakContentPathToReferenceString`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintCallable, BlueprintPure, Category="PAK" |
| Return type | `FString` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `PakContentPath` | `const FString` |
| `PakMountPath` | `const FString` |

**Original declaration (excerpt):** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "PAK") static FString Conv_PakContentPathToReferenceString(const FString PakContentPath, const FString PakMountPath);`

**Usage:** Appears as a **pure** Blueprint node (no exec pins); commonly used for getters.

**Notes:**

> Converts a Pak content path to an asset reference string using the given mount path

---

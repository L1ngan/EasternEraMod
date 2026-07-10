# `struct` `FGPUInfo`

**源码头文件:** `EastRimWorld/GPUInfoLibrary.h`

---

## 功能说明（来自头文件注释）

> 显卡信息（品牌、适配器名称、厂商与设备ID）

## 蓝图暴露变量

### 属性 `GPUBrand`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="GPU" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="GPU") FString GPUBrand;` |

**说明:**

> 显卡品牌字符串

---

### 属性 `AdapterName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="GPU" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="GPU") FString AdapterName;` |

**说明:**

> 显卡适配器名称

---

### 属性 `VendorId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="GPU" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="GPU") int32 VendorId = 0;` |

**说明:**

> 显卡厂商ID

---

### 属性 `DeviceId`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="GPU" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="GPU") int32 DeviceId = 0;` |

**说明:**

> 显卡设备ID

---

### 属性 `VendorName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FString` |
| 反射说明符 | BlueprintReadOnly, Category="GPU" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category="GPU") FString VendorName;` |

**说明:**

> 显卡厂商名称

---

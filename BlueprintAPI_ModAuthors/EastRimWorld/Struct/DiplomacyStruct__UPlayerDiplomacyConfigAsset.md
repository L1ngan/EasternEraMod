# `class` `UPlayerDiplomacyConfigAsset`

**源码头文件：** `EastRimWorld/Struct/DiplomacyStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `DiplomacyNumLevelLimit`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<int32,int32>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32,int32> DiplomacyNumLevelLimit;` |

**源码注释：**

> 门派等级可以结交门派的数量限制

---

### 属性 `DiplomacyCostMoneyCoefficient`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float DiplomacyCostMoneyCoefficient;` |

**源码注释：**

> 结交所需金钱 = 对方门派声望 * 此系数

---

### 属性 `DiplomacySuccessAddFavor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float DiplomacySuccessAddFavor;` |

**源码注释：**

> 结交成功增加好感度

---

### 属性 `DiplomacySuccessTipText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DiplomacySuccessTipText;` |

**源码注释：**

> 结交成功提示文本

---

### 属性 `BrokenColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrokenColdDown;` |

**源码注释：**

> 断交操作冷却

---

### 属性 `BrokenColdDownTipText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FText BrokenColdDownTipText;` |

**源码注释：**

> 断交操作冷却提示文本

---

### 属性 `BrokenReduceFavor`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float BrokenReduceFavor;` |

**源码注释：**

> 断交减少的好感度(填正数)

---

### 属性 `RequireTaskColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequireTaskColdDown;` |

**源码注释：**

> 请求任务冷却

---

### 属性 `RequireHelpColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequireHelpColdDown;` |

**源码注释：**

> 请求援助冷却

---

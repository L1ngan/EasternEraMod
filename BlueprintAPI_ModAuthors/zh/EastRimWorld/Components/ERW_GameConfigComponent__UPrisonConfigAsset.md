# `class` `UPrisonConfigAsset`

**源码头文件:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 监狱配置

## 蓝图暴露变量

### 属性 `ImprisonActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ImprisonActionID;` |

**源码注释:**

> 囚禁行为(在监狱的核心建筑上创建)

---

### 属性 `ImprisonedBuffes`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FName> ImprisonedBuffes;` |

**源码注释:**

> 囚犯被囚禁时施加的buff

---

### 属性 `ExecutePrisonerActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName ExecutePrisonerActionID;` |

**源码注释:**

> 处决囚犯行为

---

### 属性 `PrisonerExecutedActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName PrisonerExecutedActionID;` |

**源码注释:**

> 囚犯被处决行为

---

### 属性 `PrisonerTorturedActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName PrisonerTorturedActionID;` |

**源码注释:**

> 囚犯被处决行为

---

### 属性 `PrisonTeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FGenericTeamId` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FGenericTeamId PrisonTeamID;` |

**源码注释:**

> 囚犯队伍ID

---

### 属性 `PrisonerInfoWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) FName PrisonerInfoWidget;` |

**源码注释:**

> 囚犯界面

---

### 属性 `MaxTortureColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxTortureColdDown;` |

**源码注释:**

> 拷打CD

---

### 属性 `TortureLoyaltyBaseValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float TortureLoyaltyBaseValue = 0.f;` |

**源码注释:**

> 拷打导致的忠诚度变化基础值

---

### 属性 `RecruitLoyaltyValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RecruitLoyaltyValue = 0.f;` |

**源码注释:**

> 可发起招募的忠诚度

---

### 属性 `CanRecruitShoutTexts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<FText>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FText> CanRecruitShoutTexts;` |

**源码注释:**

> 可招募时NPC喊话文本

---

### 属性 `RecruitLoyaltyRate`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float RecruitLoyaltyRate = 1.f;` |

**源码注释:**

> 每10点忠诚度提供的

---

### 属性 `MaxRecruitColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxRecruitColdDown;` |

**源码注释:**

> 招募CD

---

### 属性 `MaxRecruitWorkload`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxRecruitWorkload;` |

---

### 属性 `RedemptionTexts`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<[FRedemptionTextData](ERW_GameConfigComponent__FRedemptionTextData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TArray<FRedemptionTextData> RedemptionTexts;` |

**源码注释:**

> 赎回文本

---

### 属性 `RedemptionWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UCommonGameDialog>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UCommonGameDialog> RedemptionWidget;` |

**源码注释:**

> 赎回界面

---

### 属性 `RecruitSuccessWidget`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftClassPtr<UCommonGameDialog>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UCommonGameDialog> RecruitSuccessWidget;` |

**源码注释:**

> 招募成功分配堂口界面

---

### 属性 `MaxSendFoodColdDown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float MaxSendFoodColdDown;` |

**源码注释:**

> 送饭CD

---

### 属性 `CanManageItemTags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<ECanManageTagType , [FGameplayTagArr](ERW_GameConfigComponent__FGameplayTagArr.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<ECanManageTagType , FGameplayTagArr> CanManageItemTags;` |

**源码注释:**

> 可以管理的物品Tag

---

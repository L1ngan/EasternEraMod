# `class` `UCharacterChatConfigAsset`

**源码头文件:** `EastRimWorld/Struct/CharacterChatStruct.h`

---

## 功能说明（来自头文件注释）

> 角色聊天配置资产

## 蓝图暴露变量

### 属性 `ChatInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChatInterval;` |

**源码注释:**

> 聊天间隔

---

### 属性 `ChatDuration`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChatDuration;` |

**源码注释:**

> 一次持续时间

---

### 属性 `FindChatPartnerInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float FindChatPartnerInterval;` |

**源码注释:**

> 查找聊天对象的间隔

---

### 属性 `FindChatPartnerRadius`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float FindChatPartnerRadius;` |

**源码注释:**

> 查找半径

---

### 属性 `ShowFindChatPartnerRadiusDebug`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowFindChatPartnerRadiusDebug;` |

**源码注释:**

> 显示查找Debug

---

### 属性 `ChatDistance`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChatDistance;` |

**源码注释:**

> 角色聊天时保持的距离

---

### 属性 `UpdateChattingInterval`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float UpdateChattingInterval;` |

**源码注释:**

> 聊天中更新间隔

---

### 属性 `ChatWidgetVisibleScaleCurve`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UCurveFloat>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UCurveFloat> ChatWidgetVisibleScaleCurve;` |

**源码注释:**

> 聊天表情框显示距离缩放曲线

---

### 属性 `ChatActionID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ChatActionID;` |

**源码注释:**

> 社交行为id

---

### 属性 `ChatType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<EChatType,[FChatTypeData](CharacterChatStruct__FChatTypeData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EChatType,FChatTypeData> ChatType;` |

**源码注释:**

> 社交类型

---

### 属性 `ChatReplyProbability`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChatReplyProbability;` |

**源码注释:**

> 闲聊回复概率(0~1)

---

### 属性 `MinGoodOpinion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MinGoodOpinion=-999;` |

**源码注释:**

> 好感度下限

---

### 属性 `MaxGoodOpinion`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxGoodOpinion=999;` |

**源码注释:**

> 好感度上限

---

### 属性 `CeremonyBuildingAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,FName> CeremonyBuildingAction;` |

**源码注释:**

> 仪式建筑主要人员的goap行为

---

### 属性 `SpectateCeremonyBuildingAction`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FName>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FName,FName> SpectateCeremonyBuildingAction;` |

**源码注释:**

> 仪式建筑旁观者的goap行为(不能与CeremonyBuildingAction重复)

---

### 属性 `CeremonyWaitTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) float CeremonyWaitTime;` |

**源码注释:**

> 仪式最长等待时间(单位秒)

---

### 属性 `CeremonySpectateMaxNum`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CeremonySpectateMaxNum;` |

**源码注释:**

> 参与仪式的旁观者最大数量

---

### 属性 `BuildingRelationshipIDs`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<FName,FName>` |
| 反射说明符 | BlueprintReadWrite, Category="Ceremony" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere,Category = "Ceremony") TMap<FName,FName> BuildingRelationshipIDs;` |

**源码注释:**

> 建筑为哪种关系举办仪式(建筑id,关系表id)

---

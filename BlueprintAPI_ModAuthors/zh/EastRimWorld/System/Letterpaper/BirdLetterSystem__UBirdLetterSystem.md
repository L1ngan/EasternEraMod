# `class` `UBirdLetterSystem`

**源码头文件:** `EastRimWorld/System/Letterpaper/BirdLetterSystem.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `FOnUpdateLetterData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FOnUpdateLetterData` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FOnUpdateLetterData FOnUpdateLetterData;` |

---

### 属性 `CharacterLetterMap`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<FGuid, [FCharacterLetterData](BirdLetterSystem__FCharacterLetterData.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) TMap<FGuid, FCharacterLetterData> CharacterLetterMap;` |

---

### 属性 `AvtiveTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) int32 AvtiveTime = -10000;` |

---

## 蓝图暴露函数

### 函数 `AddNewLetter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dialogue Events" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `LetterType` | `ELetterDialogueType` |
| `Character` | [AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `AddTime` | `int32` |
| `Mandatory` | `bool` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") bool AddNewLetter(ELetterDialogueType LetterType, AEastRimWorldCharacter_Human* Character,int32 AddTime,bool Mandatory);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `InitCharacterLetterMap`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dialogue Events" |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void InitCharacterLetterMap();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `DialogueComplete`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dialogue Events" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Character` | [AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)* |
| `dialogueindex` | `FDialogueNode` |
| `addtime` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void DialogueComplete(AEastRimWorldCharacter_Human* Character, FDialogueNode dialogueindex, int32 addtime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 掌门回话对话

---

### 函数 `EndDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dialogue Events" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EndCharacterArr` | `TArray<FGuid>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void EndDialogue(TArray<FGuid> EndCharacterArr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 结束对话

---

### 函数 `CharacterWishEquipment`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dialogue Events" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterArri` | TArray<[AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)*> |
| `AddTime` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void CharacterWishEquipment(TArray<AEastRimWorldCharacter_Human*> CharacterArri,int32 AddTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 角色希望获得装备

---

### 函数 `CharacterHaveDebuff`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dialogue Events" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterArr` | TArray<[AEastRimWorldCharacter_Human](../../Character/EastRimWorldCharacter_Human__AEastRimWorldCharacter_Human.md)*> |
| `AddTime` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void CharacterHaveDebuff(TArray<AEastRimWorldCharacter_Human*> CharacterArr, int32 AddTime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 角色Debuff状态

---

### 函数 `RemoveDialogue`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dialogue Events" |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `EndCharacterArr` | `TArray<FGuid>` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") void RemoveDialogue(TArray<FGuid> EndCharacterArr);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 移除对话

---

### 函数 `GetCanActiveLetter`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Dialogue Events" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `Currenttime` | `int32` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Dialogue Events") bool GetCanActiveLetter(int32 Currenttime);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 判断是否可以主动发起信笺

---

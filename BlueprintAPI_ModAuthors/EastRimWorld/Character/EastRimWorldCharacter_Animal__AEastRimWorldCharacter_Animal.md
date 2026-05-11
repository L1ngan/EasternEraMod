# `class` `AEastRimWorldCharacter_Animal`

**源码头文件：** `EastRimWorld/Character/EastRimWorldCharacter_Animal.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `BreedingComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UCharacterBreedingComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Animal" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Animal", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UCharacterBreedingComponent> BreedingComponent;` |

**源码注释：**

> 繁育组件

---

### 属性 `CultivationComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UAnimalCultivationComponent>` |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="EastRimWorld|Animal" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "EastRimWorld|Animal", Meta = (AllowPrivateAccess = "true")) TObjectPtr<UAnimalCultivationComponent> CultivationComponent;` |

**源码注释：**

> 修炼组件

---

### 属性 `CurrentTameCD`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere , BlueprintReadWrite , SaveGame) int32 CurrentTameCD = 0;` |

---

### 属性 `CurAnimalGrowthValue`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float CurAnimalGrowthValue;` |

**源码注释：**

> 动物当前成长值

---

### 属性 `LoopingPSC`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UParticleSystemComponent*` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly) UParticleSystemComponent* LoopingPSC;` |

---

### 属性 `CurAnimalOutputRemainingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly , SaveGame) float CurAnimalOutputRemainingTime;` |

**源码注释：**

> 动物产出间隔剩余时间

---

### 属性 `bHadBreeding`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadWrite) bool bHadBreeding;` |

---

### 属性 `bPregnant`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadWrite) bool bPregnant;` |

---

### 属性 `CurAnimalName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame , BlueprintReadWrite) FText CurAnimalName;` |

---

### 属性 `OnAnimalRename`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FAnimalRename` |
| 反射说明符 | BlueprintAssignable |
| 蓝图侧含义 | **多播委托**：可在蓝图中 **Bind / Add** 绑定事件。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintAssignable) FAnimalRename OnAnimalRename;` |

---

## 蓝图暴露函数

### 函数 `GetAnimalData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `FEastRimWorldAnimalData` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) FEastRimWorldAnimalData GetAnimalData();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 获取动物的信息

---

### 函数 `StartEnterTameCD`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void StartEnterTameCD();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CalculationGrowBonus`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `float` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) float CalculationGrowBonus();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CalcTameIsSuccessful`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `TameCharacter` | `AEastRimWorldCharacter*` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) bool CalcTameIsSuccessful(AEastRimWorldCharacter* TameCharacter);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 计算驯服是否成功

---

### 函数 `TameSuccessed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TameSuccessed();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 驯服成功

---

### 函数 `TameFailed`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void TameFailed();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 驯服失败

---

### 函数 `CreateTameAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `CharacterGuid` | `FGuid` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateTameAction(FGuid CharacterGuid);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 创建驯服行为

---

### 函数 `CheckAnimalNeedGrowUp`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CheckAnimalNeedGrowUp();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 检查动物是否需要进化

---

### 函数 `CancelTameAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CancelTameAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释：**

> 取消驯服行为

---

### 函数 `AnimalTrainingFinish`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void AnimalTrainingFinish();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CreateAnimalOutputAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CreateAnimalOutputAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CancelAnimalOutputAction`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | （无） |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void CancelAnimalOutputAction();`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `SetAnimalName`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewName` | `FText` |

**原始声明（单行节选）：** `UFUNCTION(BlueprintCallable) void SetAnimalName(FText NewName);`

**用法说明：** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

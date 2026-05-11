# `class` `AEastRimWorldAIController_Summons`

**源码头文件:** `EastRimWorld/Player/EastRimWorldAIController_Summons.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `SelfController`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TObjectPtr<[AEastRimWorldAIController](EastRimWorldAIController__AEastRimWorldAIController.md)> |
| 反射说明符 | BlueprintReadOnly, AllowPrivateAccess, Category="Summons" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Summons", Meta = (AllowPrivateAccess = "true")) TObjectPtr<AEastRimWorldAIController> SelfController;` |

**源码注释:**

> 召唤物的控制者

---

### 属性 `bUseOwnerCharacterBehavior`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite) bool bUseOwnerCharacterBehavior = false;` |

**源码注释:**

> 使用拥有者的行为

---

## 蓝图暴露函数

### 函数 `SetSummonsController`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Summons" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `NewController` | [AEastRimWorldAIController](EastRimWorldAIController__AEastRimWorldAIController.md) * |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable,Category = "Summons") bool SetSummonsController(AEastRimWorldAIController * NewController);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 设置召唤物的控制器（骑乘者）

---

### 函数 `GetSummonsData`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | [FEastRimWorldSummonsData](../Struct/CharacterStruct__FEastRimWorldSummonsData.md) |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) FEastRimWorldSummonsData GetSummonsData();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `CheckCanRunBattleBehavior`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable |
| 返回类型 | `bool` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable) bool CheckCanRunBattleBehavior();`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

### 函数 `GetOwnerCharacterLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="Summons" |
| 返回类型 | `FVector` |
| 参数 | （无） |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "Summons") FVector GetOwnerCharacterLocation() const;`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

---

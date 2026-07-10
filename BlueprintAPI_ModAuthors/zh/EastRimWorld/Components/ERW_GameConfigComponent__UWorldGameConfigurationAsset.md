# `class` `UWorldGameConfigurationAsset`

**源码头文件:** `EastRimWorld/Components/ERW_GameConfigComponent.h`

---

## 功能说明（来自头文件注释）

> 世界

## 蓝图暴露变量

### 属性 `WorldMapPossessPlayerPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<AERW_PlayerPawn> WorldMapPossessPlayerPawn;` |

**说明:**

> 世界地图使用的pawn

---

### 属性 `WorldMapOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform WorldMapOffset = FTransform::Identity;` |

**说明:**

> 世界地图的位置偏移

---

### 属性 `MainWidgetUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> MainWidgetUI;` |

**说明:**

> 世界地图界面UI

---

### 属性 `WorldMapMoveActorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AWorldMapMoveActor](../Character/WorldMapMoveActor__AWorldMapMoveActor.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<AWorldMapMoveActor> WorldMapMoveActorClass;` |

**说明:**

> 世界中移动的actor

---

### 属性 `AfterNewlyBornAttackMultiplyingPower`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) float AfterNewlyBornAttackMultiplyingPower = 1.f;` |

**说明:**

> 新生后攻击期望值倍率

---

### 属性 `WorldPlaceTypeName`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TMap<[EWorldPlaceType](../Struct/CommonEnum__EWorldPlaceType.md),FText> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TMap<EWorldPlaceType,FText> WorldPlaceTypeName;` |

**说明:**

> 世界地点类型名称

---

### 属性 `ForceCharacterEditorWidgetUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<UEastRimWorldActivatableWidget> ForceCharacterEditorWidgetUI;` |

**说明:**

> 门派换装-界面UI

---

### 属性 `ForceCharacterEditorPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere) TSoftClassPtr<AERW_PlayerPawn> ForceCharacterEditorPawn;` |

**说明:**

> 门派换装-Pawn

---

### 属性 `ForceCharacterEditorPawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere) FTransform ForceCharacterEditorPawnOffset = FTransform::Identity;` |

**说明:**

> 门派换装-Pawn生成位置

---

### 属性 `ForceSkillTestWidgetUI`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[UEastRimWorldActivatableWidget](../UI/EastRimWorldActivatableWidget__UEastRimWorldActivatableWidget.md)> |
| 反射说明符 | BlueprintReadWrite, Category="SkillTest|技能测试" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="SkillTest|技能测试") TSoftClassPtr<UEastRimWorldActivatableWidget> ForceSkillTestWidgetUI;` |

**说明:**

> 技能/武学测试沙盒-界面UI

---

### 属性 `ForceSkillTestPawn`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TSoftClassPtr<[AERW_PlayerPawn](../Framework/ERW_PlayerPawn__AERW_PlayerPawn.md)> |
| 反射说明符 | BlueprintReadWrite, Category="SkillTest|技能测试" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite,EditAnywhere,Category="SkillTest|技能测试") TSoftClassPtr<AERW_PlayerPawn> ForceSkillTestPawn;` |

**说明:**

> 技能/武学测试沙盒-观察Pawn

---

### 属性 `ForceSkillTestPawnOffset`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadOnly, Category="SkillTest|技能测试" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly,EditAnywhere,Category="SkillTest|技能测试") FTransform ForceSkillTestPawnOffset = FTransform::Identity;` |

**说明:**

> 技能/武学测试沙盒-观察Pawn生成位置

---

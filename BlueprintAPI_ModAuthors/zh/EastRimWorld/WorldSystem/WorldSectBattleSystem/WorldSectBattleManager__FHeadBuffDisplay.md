# `struct` `FHeadBuffDisplay`

**源码头文件:** `EastRimWorld/WorldSystem/WorldSectBattleSystem/WorldSectBattleManager.h`

---

## 功能说明（来自头文件注释）

> 头顶 buff 图标的单格显示数据（已算好转圈% + 剩余秒，UI 直接喂给 WBP_Buff，不用查表/算时间）。

## 蓝图暴露变量

### 属性 `Icon`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<UTexture2D>` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") TSoftObjectPtr<UTexture2D> Icon;` |

**说明:**

> buff 图标（UI 直接 SetBrush）。

---

### 属性 `RemainPercent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") float RemainPercent = 1.f;` |

**说明:**

> 转圈进度 = 剩余/总，0~1，直接喂转圈控件。士气(无倒计时)恒为 1。

---

### 属性 `RemainSeconds`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") float RemainSeconds = 0.f;` |

**说明:**

> 剩余秒数（可选显示数字）。士气为 0。

---

### 属性 `bHasCountdown`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") bool bHasCountdown = false;` |

**说明:**

> 是否有倒计时：事件 buff(FixedTime)=true → 显示转圈；士气 buff(ForEver)=false → 转圈隐藏/满圈。

---

### 属性 `MoraleStage`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadOnly, Category="WorldSectBattle|Buff" |
| 蓝图侧含义 | 蓝图 **只读**，不可直接赋值。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadOnly, Category = "WorldSectBattle|Buff") int32 MoraleStage = 0;` |

**说明:**

> 士气档位（= 占旗数，仅士气有效），UI 可显示"第几档"。

---

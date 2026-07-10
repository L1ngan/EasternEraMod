# `struct` `FGWOWave`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 波次生成配置（优先级及该波次的演员列表数据表数组）

## 蓝图暴露变量

### 属性 `priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Spawn Time" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta=(ClampMin="0")) int priority = 0;` |

**说明:**

> 波次优先级，数值最小为0

---

### 属性 `waveActorListDataTableArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<class UDataTable*>` |
| 反射说明符 | BlueprintReadWrite, Category="Spawn Time" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time") TArray<class UDataTable*> waveActorListDataTableArr;` |

**说明:**

> 该波次使用的演员生成列表数据表数组

---

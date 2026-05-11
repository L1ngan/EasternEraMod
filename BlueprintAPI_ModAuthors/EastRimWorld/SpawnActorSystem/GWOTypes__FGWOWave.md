# `struct` `FGWOWave`

**源码头文件：** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `priority`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | BlueprintReadWrite, Category="Spawn Time" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time", meta=(ClampMin="0")) int priority = 0;` |

---

### 属性 `waveActorListDataTableArr`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TArray<class UDataTable*>` |
| 反射说明符 | BlueprintReadWrite, Category="Spawn Time" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawn Time") TArray<class UDataTable*> waveActorListDataTableArr;` |

---

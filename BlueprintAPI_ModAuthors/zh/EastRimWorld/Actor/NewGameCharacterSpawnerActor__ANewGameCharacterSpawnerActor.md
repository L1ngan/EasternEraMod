# `class` `ANewGameCharacterSpawnerActor`

**源码头文件:** `EastRimWorld/Actor/NewGameCharacterSpawnerActor.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `BoxComponent`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TObjectPtr<UBoxComponent>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(VisibleAnywhere, BlueprintReadWrite) TObjectPtr<UBoxComponent> BoxComponent;` |

---

## 蓝图暴露函数

### 函数 `GetSpawnerActor`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, BlueprintPure, Category="NewGame|Spawner" |
| 返回类型 | [ANewGameCharacterSpawnerActor](NewGameCharacterSpawnerActor__ANewGameCharacterSpawnerActor.md)* |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, BlueprintPure, Category = "NewGame|Spawner", meta = (WorldContext = "WorldContextObject")) static ANewGameCharacterSpawnerActor* GetSpawnerActor(UObject* WorldContextObject);`

**用法说明:** 在蓝图中为**纯函数**（无执行流引脚），常用于 Getter。

**源码注释:**

> 当前关卡中首个本类 Actor（同 GetActorOfClass）

---

### 函数 `GetSpawnerLocation`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintCallable, Category="NewGame|Spawner" |
| 返回类型 | `bool` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `WorldContextObject` | `UObject*` |
| `OutLocation` | `FVector&` |

**原始声明（单行节选）:** `UFUNCTION(BlueprintCallable, Category = "NewGame|Spawner", meta = (WorldContext = "WorldContextObject")) static bool GetSpawnerLocation(UObject* WorldContextObject, FVector& OutLocation);`

**用法说明:** 在蓝图中为**可调用函数节点**（含执行引脚）。

**源码注释:**

> 写入 Spawner 世界坐标；成功返回 true，失败时 OutLocation 置零并返回 false

---

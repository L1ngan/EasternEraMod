# `struct` `FCharacterTypes`

**源码头文件:** `EastRimWorld/WorldSystem/WorldBattleSystem/WorldBattleManager.h`

---

## 功能说明（来自头文件注释）

> Character Types 数据结构。

## 蓝图暴露变量

### 属性 `Characters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | TArray<class [AEastRimWorldCharacter](../../Character/EastRimWorldCharacter__AEastRimWorldCharacter.md)*> |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient) TArray<class AEastRimWorldCharacter*> Characters;` |

**说明:**

> 角色（运行时缓存；标 Transient 防止作为存档结构体序列化悬空指针致崩；当前容器非 SaveGame，防御性）

---

# `struct` `FGWOSaveFrozenActorStruct`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOSaveGame.h`

---

## 功能说明（来自头文件注释）

> 冻结Actor的存档数据结构，保存被扇区系统冻结的Actor在解冻重建时所需的全部信息（由运行期FGWOFrozenActorStruct转换而来）

## 蓝图暴露变量

### 属性 `transform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FTransform transform = FTransform::Identity;` |

**说明:**

> 冻结时Actor的世界变换（位置/旋转/缩放）

---

### 属性 `sectorIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int sectorIndex = -1;` |

**说明:**

> 所属扇区在扇区数组中的索引，-1表示未分配

---

### 属性 `actorIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int actorIndex = -1;` |

**说明:**

> 该Actor在生成数据数组中的索引，-1表示无效

---

### 属性 `spawnDistanceSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float spawnDistanceSquare = 0.f;` |

**说明:**

> 生成距离的平方值，用于距离判定

---

### 属性 `destroyDistanceSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float destroyDistanceSquare = 0.f;` |

**说明:**

> 销毁距离的平方值，用于距离判定

---

### 属性 `noSpawnDistanceSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float noSpawnDistanceSquare = 0.f;` |

**说明:**

> 禁止生成距离的平方值（距离过近时不生成）

---

### 属性 `distanceCheck`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOAxes](GWOTypes__EGWOAxes.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() EGWOAxes distanceCheck = EGWOAxes::XYZ;` |

**说明:**

> 距离检测使用的轴向（EGWOAxes，默认XYZ）

---

### 属性 `uniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int uniqID = -1;` |

**说明:**

> Actor在GWO系统中的全局唯一ID，-1表示无效

---

### 属性 `lifeTimeInBackground`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float lifeTimeInBackground = 0.f;` |

**说明:**

> Actor在后台（冻结状态）允许的存活时长（秒）

---

### 属性 `timeInsertInBackground`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() double timeInsertInBackground = 0.f;` |

**说明:**

> Actor转入后台（冻结）时记录的时间戳

---

### 属性 `sectorID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int sectorID = -1;` |

**说明:**

> 所属扇区的ID，-1表示未分配

---

### 属性 `bReplaceStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bReplaceStaticMesh = false;` |

**说明:**

> 冻结时是否用静态网格实例替代该Actor显示

---

### 属性 `replaceParameters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FGWOActorReplaceParameters replaceParameters;` |

**说明:**

> 冻结时静态网格替换的参数（FGWOActorReplaceParameters）

---

### 属性 `ActorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() uint8 ActorType = 0;` |

**说明:**

> Actor类型编号（uint8）

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() uint8 TeamID = 0;` |

**说明:**

> 队伍/阵营ID（uint8）

---

### 属性 `ActorInfoID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FName ActorInfoID;` |

**说明:**

> Actor配置表行ID（FName）

---

### 属性 `BoxLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) FVector BoxLocation = FVector::ZeroVector;` |

**说明:**

> 所属生成箱体的位置

---

### 属性 `IdleRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(SaveGame) int32 IdleRange = 1000.f;` |

**说明:**

> 待机活动范围半径（默认1000）

---

### 属性 `CharacterSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FCharacterSaveData CharacterSaveData;` |

**说明:**

> 角色存档数据（FCharacterSaveData），保存角色组件等状态

---

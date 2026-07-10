# `struct` `FGWOFrozenActorStruct`

**源码头文件:** `EastRimWorld/SpawnActorSystem/GWOTypes.h`

---

## 功能说明（来自头文件注释）

> 冻结（转入后台）演员的完整快照数据，用于远离后销毁、靠近时重建

## 蓝图暴露变量

### 属性 `actorClass`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `UClass*` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() UClass* actorClass = nullptr;` |

**说明:**

> 冻结演员的类，用于重新生成

---

### 属性 `transform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FTransform transform = FTransform::Identity;` |

**说明:**

> 冻结时保存的演员变换（位置/旋转/缩放）

---

### 属性 `sectorIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int sectorIndex = -1;` |

**说明:**

> 演员所属扇区的索引（-1表示无效）

---

### 属性 `actorIndex`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int actorIndex = -1;` |

**说明:**

> 演员在其生成列表中的索引（-1表示无效）

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(); float spawnDistance = 2000.f;` |

---

### 属性 `?`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY(); float distanceDestroyOffset = 500.f;` |

---

### 属性 `spawnDistanceSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float spawnDistanceSquare = 0.f;` |

**说明:**

> 生成距离的平方缓存值

---

### 属性 `destroyDistanceSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float destroyDistanceSquare = 0.f;` |

**说明:**

> 销毁距离的平方缓存值

---

### 属性 `noSpawnDistanceSquare`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float noSpawnDistanceSquare = 0.f;` |

**说明:**

> 禁止生成距离的平方缓存值

---

### 属性 `distanceCheck`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [EGWOAxes](GWOTypes__EGWOAxes.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() EGWOAxes distanceCheck = EGWOAxes::XYZ;` |

**说明:**

> 距离测量使用的轴数（XYZ或XY）

---

### 属性 `uniqID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int uniqID = -1;` |

**说明:**

> 冻结演员的唯一ID（-1表示未分配）

---

### 属性 `lifeTimeInBackground`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() float lifeTimeInBackground = 0.f;` |

**说明:**

> 演员在后台的冻结生命时间，超时后其信息被销毁

---

### 属性 `timeInsertInBackground`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `double` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() double timeInsertInBackground = 0.f;` |

**说明:**

> 演员转入后台时记录的时间戳

---

### 属性 `sectorID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int sectorID = -1;` |

**说明:**

> 演员所属扇区的ID（-1表示无效）

---

### 属性 `bReplaceStaticMesh`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() bool bReplaceStaticMesh = false;` |

**说明:**

> 是否将该演员替换为静态网格实例

---

### 属性 `replaceParameters`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FGWOActorReplaceParameters](GWOTypes__FGWOActorReplaceParameters.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FGWOActorReplaceParameters replaceParameters;` |

**说明:**

> 替换静态网格时使用的参数（网格与偏移）

---

### 属性 `ActorType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() uint8 ActorType = 0;` |

**说明:**

> 演员类型：1人类、2召唤物、3动物

---

### 属性 `TeamID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `uint8` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() uint8 TeamID = 0;` |

**说明:**

> 演员的队伍ID

---

### 属性 `ActorInfoID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FName ActorInfoID;` |

**说明:**

> 演员的配置信息ID

---

### 属性 `BoxLocation`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FVector` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FVector BoxLocation = FVector::ZeroVector;` |

**说明:**

> 演员所属生成箱体的位置

---

### 属性 `IdleRange`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() int32 IdleRange = 1000.f;` |

**说明:**

> 演员的闲逛范围（厘米）

---

### 属性 `ConfigID`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FName` |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FName ConfigID;` |

**说明:**

> 演员的配置表ID

---

### 属性 `CharacterSaveData`

| 项目 | 内容 |
|------|------|
| C++ 类型 | [FCharacterSaveData](../WorldSystem/WorldCharacterData__FCharacterSaveData.md) |
| 反射说明符 | （仅蓝图可见相关标记） |
| 蓝图侧含义 | 变量暴露给蓝图侧；具体能否在编辑器默认值中修改取决于 Edit 说明符。 |
| 原始声明（单行节选） | `UPROPERTY() FCharacterSaveData CharacterSaveData;` |

**说明:**

> 冻结时保存的角色存档数据，重建时恢复

---

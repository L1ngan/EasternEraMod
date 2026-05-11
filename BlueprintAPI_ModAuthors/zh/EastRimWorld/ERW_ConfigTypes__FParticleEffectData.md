# `struct` `FParticleEffectData`

**源码头文件:** `EastRimWorld/ERW_ConfigTypes.h`

---

## 功能说明（来自头文件注释）

> 建筑粒子效果数据

## 蓝图暴露变量

### 属性 `UseNiagara`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `bool` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) bool UseNiagara { false };` |

**源码注释:**

> 是否使用Niagara粒子

---

### 属性 `NiagaraSystem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<class UNiagaraSystem>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , meta=(EditConditionHides , EditCondition="UseNiagara")) TSoftObjectPtr<class UNiagaraSystem> NiagaraSystem;` |

**源码注释:**

> Niagara粒子效果

---

### 属性 `ParticleSystem`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TSoftObjectPtr<class UParticleSystem>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere , meta=(EditConditionHides , EditCondition="!UseNiagara")) TSoftObjectPtr<class UParticleSystem> ParticleSystem;` |

**源码注释:**

> 粒子效果

---

### 属性 `Transform`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FTransform` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite , EditAnywhere) FTransform Transform;` |

**源码注释:**

> 粒子效果的Transform

---

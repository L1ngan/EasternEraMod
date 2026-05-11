# `struct` `FCommonLogInfo`

**源码头文件：** `EastRimWorld/Struct/CommonLogStruct.h`

---

*（该类型在头文件中 UCLASS/USTRUCT 上方无功能说明类注释；请结合成员列表与源码理解其职责。）*

## 蓝图暴露变量

### 属性 `TipsText`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere,meta=(MultiLine)) FText TipsText;` |

**源码注释：**

> 提示文字 文本中包含对应的参数 参数中用占位符替换 例如 七杀门堂主孟星魂进入战场。 配置为 [1][3][2]进入战场。 数字代表ECommonLogParameterType的枚举值

---

### 属性 `CoolingTime`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `float` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) float CoolingTime;` |

**源码注释：**

> 同id的日志内置CD

---

### 属性 `CommonLogType`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ECommonLogType` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonLogType CommonLogType = ECommonLogType::None;` |

**源码注释：**

> 日志的类型(相同类型可以有多个,生成时通过条件判断取一个,如果没有条件限制则随机取一个)

---

### 属性 `GenerateCondition`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `TMap<ECommonLogGenerateCondition,float>` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) TMap<ECommonLogGenerateCondition,float> GenerateCondition;` |

**源码注释：**

> 生成日志的条件 key为条件类型 value 为条件值

---

### 属性 `LogGroup`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `ECommonLogGroup` |
| 反射说明符 | BlueprintReadWrite |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 |
| 原始声明（单行节选） | `UPROPERTY(BlueprintReadWrite, EditAnywhere) ECommonLogGroup LogGroup = ECommonLogGroup::None;` |

**源码注释：**

> 日志的分组

---

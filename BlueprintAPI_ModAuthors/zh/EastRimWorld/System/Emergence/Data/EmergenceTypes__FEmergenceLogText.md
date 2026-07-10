# `struct` `FEmergenceLogText`

**源码头文件:** `EastRimWorld/System/Emergence/Data/EmergenceTypes.h`

---

## 功能说明（来自头文件注释）

> 涌现日志文案 — 文本 + 本条日志中哪些实体类型渲染为可点击超链接(未勾选的以纯文本渲染)。
> 尾随动作链接(对话/报名, 由 Actions 的 Label 生成)不受此开关控制——那是事件的功能入口。

## 蓝图暴露变量

### 属性 `Text`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `FText` |
| 反射说明符 | BlueprintReadWrite, Category="Log" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "Log") FText Text;` |

**说明:**

> 文案(占位符见各事件配置说明)

---

### 属性 `LinkFlags`

| 项目 | 内容 |
|------|------|
| C++ 类型 | `int32` |
| 反射说明符 | BlueprintReadWrite, Category="Log" |
| 蓝图侧含义 | 蓝图可 **读取与写入**（仍受 Edit 系列说明符在编辑器中的限制）。 参与 **SaveGame** 序列化的字段。 |
| 原始声明（单行节选） | `UPROPERTY(EditAnywhere, BlueprintReadWrite, SaveGame, Category = "Log", meta = (Bitmask, BitmaskEnum = "/Script/EastRimWorld.EEmergenceLogLinkFlag")) int32 LinkFlags = 15;` |

**说明:**

> 超链接类型开关(默认全开; 去勾某类则该类占位以纯文本渲染)

---

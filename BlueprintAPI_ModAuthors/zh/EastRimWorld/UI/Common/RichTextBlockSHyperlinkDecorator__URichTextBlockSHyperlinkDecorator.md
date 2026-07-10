# `class` `URichTextBlockSHyperlinkDecorator`

**源码头文件:** `EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator.h`

---

## 功能说明（来自头文件注释）

> Allows you to setup an image decorator that can be configured
> to map certain keys to certain images.  We recommend you subclass this
> as a blueprint to configure the instance.
> Understands the format <img id="NameOfBrushInTable"></>

## 蓝图暴露函数

### 函数 `NoticeRichInlineSHyperlink`

| 项目 | 内容 |
|------|------|
| 反射说明符 | BlueprintImplementableEvent |
| 返回类型 | `void` |
| 参数 | 见下表 |

| 参数名 | 类型 |
|--------|------|
| `ID` | `const FString&` |
| `CGamemode` | [AERW_GameModeBase](../../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**原始声明（单行节选）:** `UFUNCTION(BlueprintImplementableEvent) void NoticeRichInlineSHyperlink(const FString& ID, AERW_GameModeBase* CGamemode);`

**用法说明:** 事件可在**蓝图子类中实现**；C++ 侧通常通过 `FunctionName_Implementation` 或 Generated 代码调度。

**说明:**

> Notice Rich Inline S Hyperlink 字段。

---

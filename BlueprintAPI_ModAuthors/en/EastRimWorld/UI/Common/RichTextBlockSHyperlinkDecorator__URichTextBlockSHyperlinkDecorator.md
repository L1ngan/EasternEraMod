# `class` `URichTextBlockSHyperlinkDecorator`

**Source header:** `EastRimWorld/UI/Common/RichTextBlockSHyperlinkDecorator.h`

---

## Functional description (from header comments)

> Allows you to setup an image decorator that can be configured
> to map certain keys to certain images.  We recommend you subclass this
> as a blueprint to configure the instance.
> Understands the format <img id="NameOfBrushInTable"></>

## Blueprint-exposed functions

### Function `NoticeRichInlineSHyperlink`

| Field | Details |
|------|------|
| Reflection specifiers | BlueprintImplementableEvent |
| Return type | `void` |
| Parameters | see table below |

| Name | Type |
|--------|------|
| `ID` | `const FString&` |
| `CGamemode` | [AERW_GameModeBase](../../Framework/ERW_GameModeBase__AERW_GameModeBase.md)* |

**Original declaration (excerpt):** `UFUNCTION(BlueprintImplementableEvent) void NoticeRichInlineSHyperlink(const FString& ID, AERW_GameModeBase* CGamemode);`

**Usage:** Implement in **Blueprint subclasses**; C++ typically dispatches via `FunctionName_Implementation` or generated code.

**Notes:**

> Notice Rich Inline S Hyperlink field.

---

# `class` `ULoadingWidgetAsset`

**Source header:** `EastRimWorld/Struct/CommonStruct.h`

---

*(No type-level description comment above `UCLASS`/`USTRUCT` in the header; infer responsibility from members and source.)*

## Blueprint-exposed variables

### Property `LoadingWidgetInfo`

| Field | Details |
|------|------|
| C++ type | TMap<FString,[FLoadingTipInfoArray](CommonStruct__FLoadingTipInfoArray.md)> |
| Reflection specifiers | BlueprintReadWrite |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString,FLoadingTipInfoArray> LoadingWidgetInfo;` |

**Source comments:**

> 加载界面集合，地图名字以及该地图所可以随机到的Tip和图片

---

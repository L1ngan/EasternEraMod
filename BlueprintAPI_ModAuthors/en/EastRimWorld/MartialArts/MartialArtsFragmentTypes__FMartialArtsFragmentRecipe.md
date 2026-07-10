# `struct` `FMartialArtsFragmentRecipe`

**Source header:** `EastRimWorld/MartialArts/MartialArtsFragmentTypes.h`

---

## Functional description (from header comments)

> 武学残卷合成配方 (DT_MartialArtsFragmentRecipe 行结构)
> 一行 = 一本可合成"完本书"的配方。设计依据: Apprenticeship_FragmentCraft_Design_v1 §3.2。
> 复用红线:
>  - 残卷本体走现成 DT_InventoryItem 物品 (EItemType::Materials), 不另造武学/物品体系。
>  - 合成产出 = TargetBookID 指向的 DT_MartialArtsBookData "完本书" 行, 复用现成"得书即学"链路。
>  - 不复用 FFormulaData (那是 GOAP 建筑配方, 语义不符)。
>  *** BM_* 坑 (必守) ***
>  TargetBookID / RequiredFragmentItemIDs 指向的目标书, 必须是完本书 RowName
>  (S_<拼音>_Moves / A_<拼音>_Internal, 含 1~N 层全部词条),
>  绝不能填 DT_MartialArtsBookCategory 的 MartialArtsBooks 数组里的 BM_* / Category_* (基础招式版 / 分类ID),
>  否则合成出的"书"是无层级的残废书 (基础招式版而非完整武学)。

## Blueprint-exposed variables

### Property `TargetBookID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") FName TargetBookID;` |

**Notes:**

> GENERATED_USTRUCT_BODY()
> 
> 	// 产出的完本书, 指向 DT_MartialArtsBookData 的 RowName。
> 	// *** 必填完本书 ID (S_*_Moves / A_*_Internal), 绝不填 BM_Category_* (见结构注释 BM_* 坑) ***

---

### Property `RequiredFragmentItemIDs`

| Field | Details |
|------|------|
| C++ type | `TArray<FName>` |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") TArray<FName> RequiredFragmentItemIDs;` |

**Notes:**

> 需集齐的 N 张残卷物品ID列表 (DT_InventoryItem 中 bIsFragment=true 的物品行)。
> 数组长度 = 该书残卷总张数 N。单一数据源在此 (残卷物品行不冗余张数/编号)。

---

### Property `ExtraMaterials`

| Field | Details |
|------|------|
| C++ type | `TMap<FName, int32>` |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") TMap<FName, int32> ExtraMaterials;` |

**Notes:**

> 合成辅料 (物品ID -> 数量), 走 DT_InventoryItem 真实物品 ID (纸墨/灵石等)。可空。

---

### Property `CraftTimeSeconds`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") float CraftTimeSeconds = 600.f;` |

**Notes:**

> 合成耗时 (游戏秒)。v1 可由调用方决定是否实际计时。

---

### Property `RequiredBuildingID`

| Field | Details |
|------|------|
| C++ type | `FName` |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") FName RequiredBuildingID;` |

**Notes:**

> 需要的建筑/工作台 (可空=任意据点)。v1 一般 None。

---

### Property `MinComprehension`

| Field | Details |
|------|------|
| C++ type | `int32` |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") int32 MinComprehension = 0;` |

**Notes:**

> 合成所需最低悟性 (可选, 防低悟性强合高阶绝学)。v1 默认 0 不卡。

---

### Property `MajorCategory`

| Field | Details |
|------|------|
| C++ type | [EMartialArtsMajorCategories](../Struct/MartialArts__EMartialArtsMajorCategories.md) |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") EMartialArtsMajorCategories MajorCategory = EMartialArtsMajorCategories::None;` |

**Notes:**

> 武学大类 (冗余, 供 UI 分组)。

---

### Property `bConsumeFragments`

| Field | Details |
|------|------|
| C++ type | `bool` |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") bool bConsumeFragments = true;` |

**Notes:**

> 合成是否消耗残卷 (默认 True)。

---

### Property `SuccessRate`

| Field | Details |
|------|------|
| C++ type | `float` |
| Reflection specifiers | BlueprintReadWrite, Category="FragmentRecipe" |
| Blueprint semantics | Readable and writable in Blueprint (still subject to Edit* specifiers in the editor). |
| Original declaration (excerpt) | `UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="FragmentRecipe") float SuccessRate = 1.0f;` |

**Notes:**

> 合成成功率。v1 恒 1.0; v2 走火入魔再议。

---

# Mod Data Tables & Skeletal Mesh Fields

---

## 1. How config reaches the game

1. Maintain **DataTables** (and meshes, animations, etc.) under `Content/Mods/<ModName>/`.  
2. In **`UModInformationAsset`**, add **`FModConfig`** rows: **`ModConfigType`** → matching **`EModConfigType`**, **`DataTable`** soft pointer.  
3. **Row struct** must match the type (e.g. `AnimalConfig` → `FModAnimalData` from the plugin).

Fields below come from `Plugins/CreateModPlugin/Source/CreateModPlugin/Public/*.h`; code wins if it diverges.

---

## 2. Animals / monsters (`FModAnimalData`)

**Header**: `CharacterDataStruct.h`  
**Typical type**: `EModConfigType::AnimalConfig`

Creatures often use **independent** or shared animal skeletons; **all animation refs** must match **`AnimalMesh` → Skeleton**.

| Field | Conceptual type | Notes & skeleton relation |
|-------|-----------------|---------------------------|
| `AnimalMesh` | soft → `SkeletalMesh` | **Core mesh**; defines `USkeleton`. All anims must be compatible. |
| `AnimGroup` | `int32` | **Animation group**—different skeletons should use distinct groups per team rules to avoid wrong AnimBP picks. |
| `AnimalBlendSpace` | soft → `BlendSpace1D` | Move blend; same Skeleton as mesh. |
| `DeathAnimMontage` | soft → `AnimMontage` | Death; Skeleton match. |
| `HitAnimMontage` | map → `AnimMontage` | Hit reacts; Skeleton match. |
| `MeshScale` | `FVector` | Visual scale only. |
| `MeshLocationOffset` | `FVector` | Offset only. |

**Self-check**: Open `AnimalMesh` → note **Skeleton**; open each BlendSpace/Montage → same Skeleton (or retargeted for it).

---

## 3. Buildings / facilities (`FModBuildData`)

**Header**: `BuildDataStruct.h`  
**Typical type**: `EModConfigType::BuildConfig`

Skinned interactive props.

| Field | Notes |
|-------|--------|
| `bUseSkeletalMesh` | If **true**, skeletal mesh + anim instance below apply. |
| `SkeletalMesh` | Facility mesh; **Skeleton** drives valid animation. |
| `AnimInstance` | Runtime **`UAnimInstance`** subclass; must match **that Mesh’s Skeleton** / AnimBP family. |

`AnimInstance` for Skeleton A vs mesh on Skeleton B → no anim or crash.

---

## 4. Humans / protagonist (`FModHumanData`)

**Header**: `CharacterDataStruct.h`  
**Typical type**: `EModConfigType::CharacterConfig`

Includes customization, portraits, weapons, montages, etc.; not every field is a mesh path.

**Hard rule** for **playable human body** meshes: **`USkeletalMesh` → Skeleton** must be the same **`USkeleton`** as Mannequin reference:

- `Content/Art/Animations/Characters/Mannequins/Meshes/SK_Mannequin.uasset` (**Skeleton** asset, not a generic mesh).

Import flow: [ModelImportAndSkeletonMatching.md](./ModelImportAndSkeletonMatching.md). When filling tables, open custom human meshes and verify **Skeleton** in Details.

---

## 5. General table rules

1. **Per row**, mesh + animations form a **closed loop** on one Skeleton (or approved retarget chain).  
2. **`AnimGroup`** mainly for multi-skeleton animals—coordinate numeric IDs with existing content.  
3. **Soft paths**: keep referenced assets under **Mod** or Cook-visible paths.  
4. **Don’t mix** facility Skeleton with protagonist AnimBP families.

---

## 6. References

- [ModDocumentationIndex.md](./ModDocumentationIndex.md)  
- [ModelImportAndSkeletonMatching.md](./ModelImportAndSkeletonMatching.md)  
- `CharacterDataStruct.h`, `BuildDataStruct.h`, `BaseDataStruct.h`

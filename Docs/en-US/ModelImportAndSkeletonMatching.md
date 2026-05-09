# Model Import & Skeleton Matching

DCC → Unreal flow, **`USkeleton`** vs **`USkeletalMesh`** & animation assets, **protagonist Mannequin** rule, and **creature/monster independent skeletons**.

---

## 1. Why skeletons must match

Characters, animals, and some buildings use **skeletal meshes**. Skinning follows bones; **sequences / montages / blend spaces** compile against a specific **`USkeleton`**.

Mismatched skeleton vs animation causes **no playback**, **silent failure**, or **bad deformation**. Import is often **binding the mesh to the correct Skeleton**, not only importing geometry.

---

## 2. Project rules: protagonist vs creatures

| Type | Skeleton rule |
|------|----------------|
| **Protagonist** (player human & same pipeline) | **Must** use the project Mannequin **reference skeleton** `USkeleton`: `Content/Art/Animations/Characters/Mannequins/Meshes/SK_Mannequin.uasset` (open the **Skeleton** asset in Content Browser—not a mesh that merely references it). Import protagonist FBX as **Skeletal Mesh**, enable **Use Existing Skeleton**, pick that **`USkeleton`**. Do **not** use an incompatible custom skeleton for protagonist human bodies. |
| **Animals, monsters** | **May** use **independent skeletons**: import without Mannequin; maintain dedicated `USkeleton` and matching blend spaces/montages; align **`AnimGroup`** etc. with code (data table doc). |

Sections **A / B** below follow this table.

---

## 3. Three asset types

1. **`USkeleton`**: hierarchy, ref pose, sockets, retarget chains; animations bind here.  
2. **`USkeletalMesh`**: skinned geometry; **references one** `USkeleton`.  
3. **Animation** (`UAnimSequence`, `UAnimMontage`, `BlendSpace`, …): built for a skeleton (or retargeted equivalent).

**Rule**: Table references must be **compatible** with that row’s **`SkeletalMesh` → Skeleton**. **Protagonist** must additionally equal Mannequin’s Skeleton.

---

## 4. DCC (Blender/Maya, etc.)

1. **Rig & skin**: single skeleton, clean weights; **names/hierarchy** close to target Skeleton (Mannequin or creature ref).  
2. **Scale & axes**: usual FBX settings (cm, UE axes); tune display with `MeshScale` / `MeshLocationOffset` in data if needed.  
3. **Bind/reference pose**: align with game/Mannequin (often T-pose); verify **Reference Pose** in skeletal mesh editor.

---

## 5. Import strategies

### 5.1 Use existing Skeleton (required for protagonist; reuse game anims otherwise)

1. **Protagonist**: **`USkeletalMesh` Skeleton must be** the Mannequin **`USkeleton`** at §2 path; rig in DCC to match.  
2. **Others**: pick an in-project reference skeleton for the same pipeline.  
3. FBX: **Skeletal Mesh**, **Use Existing Skeleton**, pick target `USkeleton`.  
4. Fix DCC if names/hierarchy diverge—import may fail or weights break.

### 5.2 Independent Skeleton (creatures; **not for protagonist**)

1. Import without Mannequin; create/select dedicated `USkeleton`.  
2. Author or retarget **all** needed animation; tables reference **only** that set.  
3. Use **`AnimGroup`** per team conventions; don’t mix with human Mannequin anims.

### 5.3 Animation FBX

Animations **must** target the **same Skeleton** as the mesh they drive.

### 5.4 Replacing reference meshes safely

Duplicate/locate reference **`SkeletalMesh`** → **Reimport** or re-import with **same Skeleton** to reduce path/skeleton drift.

---

## 6. Fixing mismatches (outline)

- UE5 **IK Rig + Retargeter** or project retarget pipeline → animations for target Skeleton; Mod references **retargeted** assets; **AnimInstance** matches target Skeleton.

---

## 7. Post-import checklist

- [ ] **`USkeletalMesh` → Skeleton** as intended (protagonist = Mannequin).  
- [ ] BlendSpace/Montage preview without severe distortion.  
- [ ] Buildings: **`AnimInstance`** matches Mesh Skeleton.

---

## 8. Troubleshooting

| Symptom | Likely cause | Fix |
|---------|--------------|-----|
| No animation / T-pose stuck | Skeleton ≠ animation asset | Unify Skeleton on mesh & anim import |
| Twisted limbs | Bone names/hierarchy/weights | Fix DCC vs ref Skeleton; bind pose |
| Some creatures wrong | `AnimGroup` vs animation pipeline | Align group IDs / full anim set |
| Protagonist/equipment broken | Not Mannequin **`USkeleton`** | Re-import mesh bound to `SK_Mannequin` Skeleton asset |
| Building no anim | `AnimInstance` vs Mesh Skeleton | Use compatible AnimBP subclass |

---

## 9. Related docs

- [ModDocumentationIndex.md](./ModDocumentationIndex.md)  
- [ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md)  
- [ModDataTablesAndSkeletalMeshFields.md](./ModDataTablesAndSkeletalMeshFields.md)

*If UE UI differs from this text, trust the engine.*

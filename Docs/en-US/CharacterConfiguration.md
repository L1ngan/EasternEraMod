# Character Configuration

**Skeleton/import**: For **playable human body meshes**, bind to the **Mannequin reference `USkeleton`**: [ModelImportAndSkeletonMatching.md](./ModelImportAndSkeletonMatching.md).

---

Step 1 | Open `DA_ModDataAsset`

![](../../assets/角色配置_r3_c2_01.png)

Step 2 | Link three config tables

Notes: | 1 | Put all three tables under your Mod tree; a **`Config`** subfolder is recommended.

2 | Table **row struct** must match **Mod Config Type**—see screenshots.

![](../../assets/角色配置_r18_c2_02.png)

Step 3 | Table roles

1 | Appearance: `DT_AnatomyProfiles_V10`

Note: **Row name** is the unique ID used later.

![](../../assets/角色配置_r50_c3_03.png)

Two setups: | 1) | Separate head & body models (not recommended) | 2) | Single combined body model (recommended)

~Slot 1 body, slot 2 head | ~Set body mesh only; ignore the rest for simple cases

~Slot indices = material slot names & materials (optional if not protagonist) | ~Notes: | 1 | Don’t change area marked **3** on the left (needed for playable chars)

2 | For **single-body** setup, **don’t** tick the option shown

![](../../assets/角色配置_r56_c6_04.png)

![](../../assets/角色配置_r56_c21_05.png)

![](../../assets/角色配置_r57_c16_06.png)

2 | Detail preset: `DT_PresetCustomizationProfiles_V10`

Note: **Row name** = unique ID (keep consistent with Anatomy).

![](../../assets/角色配置_r108_c3_07.png)

Screenshot guide:

1 | **Name** matches row name

![](../../assets/角色配置_r114_c3_08.png)

2 | **Anatomy** = row name from `DT_AnatomyProfiles_V10`

3 | **Race**: currently **Human** only

4 | **Gender**: **Male** / **Female**

5 | **Generation**: **Adult** only for now

6 | **Age**: no lifespan yet—use **0.1–1**

7 | **Size**: height scale (**190 cm = 1**)

3 | Character info: `DT_ModHumanData`

1 | **Customization Id** = row name from `DT_PresetCustomizationProfiles_V10`

![](../../assets/角色配置_r157_c3_09.png)

2 | **Height / Weight / BackgroundStory**

3 | **Init Characteristic Ids** (not available yet—reserved)

4 | **Character First Name / Character Name** (both needed or defaults apply)

5 | **Sex / Age**

6 | **Death Anim Montage**

7 | **…Avatar** portrait sizes:

Avatar: 102×103  
Half Avatar: 630×580  
Half Tour Avatar: 1536×1053  
Small Tour Avatar: 239×860  
Half UIAvatar: 418×378

1 | **Hit Anim Montage**: hits per direction—configure four directional montages

![](../../assets/角色配置_r208_c5_10.png)

2 | **Init Weapon** & **Armor**

Weapon prefixes: Sword / Spear / Bow / Fist  
Slot prefixes: Armor / Pants / Shoes  
Quality suffix: Green / Blue / Purple / Orange / Golden  

Weapon naming: `Prefix_LV0x_Suffix`  
Armor naming: `Prefix_LV_0x_Suffix`  
`x` ∈ **1–4**

3 | Tick **“Can Choose New Game”** to offer at character creation.

4 | **Template ID**: don’t change—fallback template when fields are missing.

5 | **ID**: must match **row name**.

6 | **Attributes** — important:

Keep these three groups consistent (body-part stats)

![](../../assets/角色配置_r222_c14_11.png)

![](../../assets/角色配置_r222_c17_12.png)

![](../../assets/角色配置_r222_c20_13.png)

Life skill levels

![](../../assets/角色配置_r246_c14_14.png)

Other stats (MoveSpeed, FreeWeight, Attack, Shield, etc.)—adjust as needed.

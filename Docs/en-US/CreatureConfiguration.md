# Creature (Animal / Monster) Configuration

After creating a Mod, place creature assets (skeleton, mesh, textures, materials, animation) under **Mod root**:

**`Content/Mods/<ModFolder>/`**

`<ModFolder>` matches **Mod Id / folder name** from **Create Mod**. Content must stay in a **first-level** child of **`Content/Mods/`** (not a sibling path under `Content/`). Layout rules: [ModProjectAndDirectoryStructure.md](./ModProjectAndDirectoryStructure.md).

![](../../assets/动物or怪物配置_r2_c2_01.png)

Step 1 | Create/open the Mod information asset in the Mod folder

![](../../assets/动物or怪物配置_r16_c1_02.png)

Step 2 | Create & link **three** tables in `DA_ModDataAsset`: **Animal**, **AnimalActionAbility**, **GameAbility**

1 | **AnimalConfig**: basic creature info

![](../../assets/动物or怪物配置_r29_c1_03.png)

2 | **AnimalActionAbility**: non-combat behaviors (idle, sleep, etc.)

3 | **GameAbility**: abilities—attacks & skills

When creating tables, **ConfigType** must match. Put all three under **`Content/Mods/<ModFolder>/Config/`** (below, “Mods/XXX” means that path).

**Override**: tick to replace vanilla data—**AnimalConfig** usually ticked; the other two often **not**.

![](../../assets/动物or怪物配置_r38_c13_04.png)

Step 3 | Table details

1) | **AnimalConfig**

![](../../assets/动物or怪物配置_r50_c3_05.png)

Like character tables, **row name** = unique runtime ID.

![](../../assets/动物or怪物配置_r53_c2_06.png)

**ID** must match **row name**.

**TemplateID** | Vanilla row ID used as template when fields are missing.

Example **10000** = Wolf King template—good baseline for new creatures.

Screenshot shows **ID** and **TemplateID** both **10000** → this Mod’s creature **replaces Wolf King** spawns.

![](../../assets/动物or怪物配置_r60_c2_07.png)

**Character First Name / Character Name** | Same idea as human config—detail UI; FirstName optional, shown before Name if set.

**Sex & Age** | Freeform; checked = male.

**AnimGroup** | **Critical**—behavior grouping; **AnimalActionAbility** references it.

Use **distinct group IDs** per distinct skeleton/setup; suggest **6-digit** IDs (e.g. `100001`).

**Species** | Default **Beast**; avoid changing unless design requires.

**DeathAnimMontage** | Death montage.

**DeathAnimMontageSection** | Section name **must** match montage (case-sensitive).

![](../../assets/动物or怪物配置_r70_c12_08.png)

**HitAnimMontage** | Hit react montage (optional—many creatures have none yet).

**Init/Default Weapon/Armor** | Usually empty.

**Output** | Loot on kill (meat, hide, etc.)—start from template until base item IDs are documented.

**SightRadius** | Vision / lose-vision range—try **300–1500**.

**ButcherWorkLoad** | Butchering workload after kill.

**CanbeTreat** | Can be healed—default off.

**CanbeKnockDown** | Knockdown—params not tunable yet; suggest off.

**CanChooseNewGame** | Selectable starter companion—**strongly suggest off** (size/collision issues).

![](../../assets/动物or怪物配置_r90_c1_09.png)

![](../../assets/动物or怪物配置_r90_c6_10.png)

**Stats** | Same families as character stats—tune offense/defense/body HP.

**AnimalBodyType** | Size class for feeders/beds—pick to match creature scale.

![](../../assets/动物or怪物配置_r110_c1_11.png)

**Growth** fields | Leave empty.

**AnimalMesh** | Skeletal mesh.

**MeshScale** | XYZ scale.

**MeshLocationOffset** | Grounding offset.

**CapsuleSize** | Collision capsule—iterate in-game.

**AnimalBlendSpace** | Move blend space (**BlendSpace1D**).

![](../../assets/动物or怪物配置_r118_c11_12.png)

![](../../assets/动物or怪物配置_r119_c15_13.png)

![](../../assets/动物or怪物配置_r136_c11_14.png)

![](../../assets/动物or怪物配置_r136_c15_15.png)

Tune blend space to match movement stats.

**InitGamePlayAbilityByID** | Initial ability IDs from **GameAbility** (basic attacks, skills).

![](../../assets/动物or怪物配置_r153_c4_16.png)

**Taming** | Suggest **off** to avoid oversized creatures blocking buildings.

**BeforeObserveName** | Overhead name—free text.

2) | **GameAbility** (creature skills)

![](../../assets/动物or怪物配置_r186_c1_17.png)

![](../../assets/动物or怪物配置_r190_c5_18.png)

**Row name** must match **ID**—this row key is what **AnimalConfig.InitGamePlayAbilityByID** calls.

![](../../assets/动物or怪物配置_r197_c1_19.png)

**Tag manager file (important)**

GameplayTag + `ModInfo` + ini naming: **[ModGameplayTagsConfiguration.md](./ModGameplayTagsConfiguration.md)**.

![](../../assets/动物or怪物配置_r198_c6_20.png)

1 | Each creature with unique attack animation sets needs its **own skill tags**.

2 | When creating/editing Mod info, enable **IncludeGameplayTags**—plugin generates config under Mod folder.

When adding tags, pick that file as **Source**.

After generating, **restart UE** once.

![](../../assets/动物or怪物配置_r204_c15_21.png)

3 | **New tags**

![](../../assets/动物or怪物配置_r215_c3_22.png)

![](../../assets/动物or怪物配置_r215_c7_23.png)

Green **+** or arrows—add children; name, optional comment, pick **Source** (must be Mod ini).

4 | Prefer nesting creature skill tags under **`Ability.UniqueSkill`**.

5 | Pick the new tag as the skill’s unique tag.

![](../../assets/动物or怪物配置_r225_c12_24.png)

**UseDistance** | Range to begin ability.

**GameplayAbility** | Each row needs a **GA blueprint**.

![](../../assets/动物or怪物配置_r240_c5_25.png)

Create child of **`GA_GeneralAbilityBase`**, move child **into Mod folder**—don’t edit/move parent.

Assign child class to the row.

**Do not** move or edit the parent GA—only children inside Mod content.

![](../../assets/动物or怪物配置_r244_c5_26.png)

![](../../assets/动物or怪物配置_r244_c18_27.png)

![](../../assets/动物or怪物配置_r245_c13_28.png)

**AbilityAllTags** | Advanced—often leave default.

**AbilityType** | Creature basics: **GeneralAbility** (active).

**AbilityAttackType** | Basic attack: **NormalAttack**.

![](../../assets/动物or怪物配置_r266_c5_29.png)

**TriggerProjectile** | Fire projectile without anim notify—usually **off** (use montage notifies).

**Skill UI block** | SkillName | Icon | SkillDescribe | Quality | NeedWeaponTypes — mainly for cultivation skills; for creature basics leave default.

**AbilityUsageScenario** must be **BattleGeneralAbility**.

**Cooldown** | Seconds when enabled.

![](../../assets/动物or怪物配置_r287_c4_31.png)

Tags as in screenshots.

1 | **Has montage** for basic attacks—**must** tick for creature basics.

![](../../assets/动物or怪物配置_r294_c5_32.png)

2 | Assign attack montage.

3 | **Event tags** from montage sections.

![](../../assets/动物or怪物配置_r297_c13_33.png)

Add **`NS_AbilityNotify`** in montage tracks; set **Event Tag**.

4 | Max/default play rate.

5 | **Section names** to distinguish attack clips.

6 | **Effects** field—rarely used standalone.

7 | **GE on self/friend/foe**—usually handled via projectiles instead.

![](../../assets/动物or怪物配置_r324_c4_35.png)

1 | **Anim triggers projectile** — usually **on** (notify-driven).

2 | **Projectile event tag** — **must match** `NS_AbilityNotify` **Event Tag** in montage.

3 | **Projectile ID** — vanilla IDs or custom projectile table.

![](../../assets/动物or怪物配置_r333_c13_36.png)

![](../../assets/动物or怪物配置_r333_c16_37.png)

4 | **Projectile target filter** — attacks often **Other Than Friends**.

5 | **Projectile GE** — usually damage.

6 | **Control tags** if needed.

7 | **Building damage** — durability drain.

![](../../assets/动物or怪物配置_r360_c5_38.png)

1 | Summons — **not supported**; leave off.

2 | Extra hit weights — default off.

3) | **AnimalActionAbility** (behaviors)

![](../../assets/动物or怪物配置_r370_c1_39.png)

1 | **Behavior ID** & **TemplateID**

**Idle** example: non-combat roaming needs at least **Idle**. Vanilla idle row ID **`Idle`** → **TemplateID** `Idle`; new creature also uses Idle → **ID** = **TemplateID** = `Idle`.

2 | **Montage** for behavior — left: **`AnimGroup`** (must match **AnimalConfig**); right: montage asset.

3 | **Start / Loop / End section names**

Again **`AnimGroup`** where required; **Loop section required**; Start/End optional.

Add **`NS_AbilityNotify`** on **Loop**; **Event Tag** uses **`Montage.Behavior`**.

4 | **Extensions** — sleep, tame, eat, etc.—advanced; covered separately later.

![](../../assets/动物or怪物配置_r388_c1_40.png)

For now configuring **Idle** alone is enough.

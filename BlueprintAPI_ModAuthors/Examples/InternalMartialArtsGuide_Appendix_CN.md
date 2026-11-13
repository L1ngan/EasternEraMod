# 附录：官方内功每层词条与效果

> 配合《[自制内功武学 Mod 制作指南](InternalMartialArtsGuide_CN.md)》使用。数据取自当前版本的官方配置表，游戏更新后可能变化。

用法：

- **整层照搬**：在你的书的 `MartialArtsLevels` 里直接写"词条 ID"列的值，例如 `"MartialArtsEntries": ["Power_GuiXi_05"]`。标了"授予技能"的词条只能这样用。
- **组合效果**：自建词条行，把几个"词条 GE 路径"放进 `EffectiveAfterEquippingGameplayEffects`。
- "效果"列是官方写给玩家看的描述，末尾的"-某某N层"是官方备注，抄到你的描述里时去掉。
- 词条效果的数值是固定的，不随内功等级变化；随等级成长的部分来自书上的等级成长 GE。

按品质（绿 → 蓝 → 紫 → 橙）、同品质按书 ID 排序。

### C_CaoShangFei_Internal（绿色-内功-轻功-草上飞）

品质 绿 · 中正 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_CaoShangFei_01` | 罡气上限+350、闪避+40点。 -草上飞1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_CaoShangFei_L1.GE_Book_CaoShangFei_L1_C` |
| 5 | `Power_CaoShangFei_05` | 罡气上限+300；放轻功招进草上飞窗6秒，窗内增伤+5%。 -草上飞5层；授予技能 Power_CaoShangFei_05_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_CaoShangFei_L5.GE_Book_CaoShangFei_L5_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_CaoShangFei_WinBuff.GE_Book_CaoShangFei_WinBuff_C` |
| 10 | `Power_CaoShangFei_10` | 罡气上限+250；成功闪避20%反击30%。 -草上飞10层；授予技能 Power_CaoShangFei_10_Counter | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_CaoShangFei_L10.GE_Book_CaoShangFei_L10_C` |
| 15 | `Power_CaoShangFei_15` | 罡气上限+225、闪避+30点。 -草上飞15层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_CaoShangFei_L15.GE_Book_CaoShangFei_L15_C` |

### C_GuiXiGong_Internal（绿色-内功-中正-龟息功）

品质 绿 · 中正 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_GuiXi_01` | 罡气上限+350、悟性+3、修炼经验+8%。 -龟息功1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_GuiXi_L1.GE_Book_GuiXi_L1_C` |
| 5 | `Power_GuiXi_05` | 罡气上限+300、资质+3、罡气恢复加快。 -龟息功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_GuiXi_L5.GE_Book_GuiXi_L5_C` |
| 10 | `Power_GuiXi_10` | 罡气上限+250；放支援招恢复2%罡气(CD6s)。 -龟息功10层；授予技能 Power_GuiXi_10_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_GuiXi_L10.GE_Book_GuiXi_L10_C` |
| 15 | `Power_GuiXi_15` | 罡气上限+225、修炼经验+7%。 -龟息功15层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_GuiXi_L15.GE_Book_GuiXi_L15_C` |

### C_HuangLongQiangJue_Internal（绿色-内功-阳性-黄龙枪诀）

品质 绿 · 阳性 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_HuangLongQiangJue_01` | 罡气上限+400、抗性+25。 -黄龙枪诀1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HuangLongQiangJue_01.GE_Power_HuangLongQiangJue_01_C` |
| 5 | `Power_HuangLongQiangJue_05` | 罡气上限+400、暴击+15。 -黄龙枪诀5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HuangLongQiangJue_05.GE_Power_HuangLongQiangJue_05_C` |
| 10 | `Power_HuangLongQiangJue_10` | 罡气上限+400、移动速度+20。 -黄龙枪诀10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HuangLongQiangJue_10.GE_Power_HuangLongQiangJue_10_C` |
| 15 | `Power_HuangLongQiangJue_15` | 资质+15；受到攻击后有15%概率在10秒内，攻击+15。 -黄龙枪诀15层；授予技能 Power_HuangLongQiangJue_15 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HuangLongQiangJue_15.GE_Power_HuangLongQiangJue_15_C` |

### C_JiChu_Internal（绿色-内功-中正-吐纳诀）

品质 绿 · 中正 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_JiChu_01` | 罡气上限+500。 -吐纳诀1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JiChu_01.GE_Power_JiChu_01_C` |
| 5 | `Power_JiChu_05` | 罡气上限+500、最小攻击+18、最大攻击+18。 -吐纳诀5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JiChu_05.GE_Power_JiChu_05_C` |
| 10 | `Power_JiChu_10` | 资质+15。 -吐纳诀10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JiChu_10.GE_Power_JiChu_10_C` |
| 15 | `Power_JiChu_15` | 躯干最大健康+25%、罡气上限+500。 -吐纳诀15层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JiChu_15.GE_Power_JiChu_15_C` |

### C_LieYuXinFa_Internal（绿色-内功-阳性-烈羽心法）

品质 绿 · 阳性 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_LieYuXinFa_01` | 罡气上限+400、暴击+15。 -烈羽心法1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LieYuXinFa_01.GE_Power_LieYuXinFa_01_C` |
| 5 | `Power_LieYuXinFa_05` | 命中+15、最小攻击+15、最大攻击+15。 -烈羽心法5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LieYuXinFa_05.GE_Power_LieYuXinFa_05_C` |
| 10 | `Power_LieYuXinFa_10` | 罡气上限+400、移动速度+20。 -烈羽心法10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LieYuXinFa_10.GE_Power_LieYuXinFa_10_C` |
| 15 | `Power_LieYuXinFa_15` | 悟性+3；每次攻击有15%概率额外造成60%伤害，冷却5秒。 -烈羽心法15层；授予技能 Power_LieYuXinFa_15 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LieYuXinFa_15.GE_Power_LieYuXinFa_15_C` |

### C_MangNiu_Internal（绿色-内功-阳性-莽牛功）

品质 绿 · 阳性 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_MangNiu_01` | 罡气上限+500、躯干最大健康+150。 -莽牛功1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_MangNiu_01.GE_Power_MangNiu_01_C` |
| 5 | `Power_MangNiu_05` | 资质+15；受到攻击后有15%概率在10秒内，攻击+10。 -莽牛功5层；授予技能 Power_MangNiu_05 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_MangNiu_02.GE_Power_MangNiu_02_C` |
| 10 | `Power_MangNiu_10` | 悟性+3、命中+15。 -莽牛功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_MangNiu_04.GE_Power_MangNiu_04_C` |
| 15 | `Power_MangNiu_15` | 罡气上限+500、最小攻击+18、最大攻击+18。 -莽牛功15层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_MangNiu_06.GE_Power_MangNiu_06_C` |

### C_QiLinBi_Internal（绿色-内功-阳性-麒麟臂）

品质 绿 · 阳性 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_QiLinBi_01` | 罡气上限+350、钝击+8%。 -麒麟臂1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_QiLinBi_L1.GE_Book_QiLinBi_L1_C` |
| 5 | `Power_QiLinBi_05` | 罡气上限+300；拳脚命中20%挂流血(CD4s)。 -麒麟臂5层；授予技能 Power_QiLinBi_05_Bleed | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_QiLinBi_L5.GE_Book_QiLinBi_L5_C` |
| 10 | `Power_QiLinBi_10` | 罡气上限+250、暴击+80点。 -麒麟臂10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_QiLinBi_L10.GE_Book_QiLinBi_L10_C` |
| 15 | `Power_QiLinBi_15` | 罡气上限+225、钝击+5%。 -麒麟臂15层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_QiLinBi_L15.GE_Book_QiLinBi_L15_C` |

### C_TieBuShan_Internal（绿色-内功-中正-铁布衫）

品质 绿 · 中正 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_TieBuShan_01` | 罡气上限+350；受到攻击伤害-6%。 -铁布衫1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TieBuShan_L1.GE_Book_TieBuShan_L1_C` |
| 5 | `Power_TieBuShan_05` | 罡气上限+300；放防御招进入铁布护体6秒，窗内受击12%反弹40%钝击。 -铁布衫5层；授予技能 Power_TieBuShan_05_Window,Power_TieBuShan_05_Counter | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TieBuShan_L5.GE_Book_TieBuShan_L5_C` |
| 10 | `Power_TieBuShan_10` | 罡气上限+250；铁布护体内额外-8%受伤。 -铁布衫10层；授予技能 Power_TieBuShan_10_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TieBuShan_L10.GE_Book_TieBuShan_L10_C` |
| 15 | `Power_TieBuShan_15` | 罡气上限+225；钝击伤害+10%。 -铁布衫15层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TieBuShan_L15.GE_Book_TieBuShan_L15_C` |

### C_ZiWuGong_Internal（绿色-内功-阴性-子午功）

品质 绿 · 阴性 · 等级表 `InternalGreenMaxLv15` · 等级 GE `GE_BookBase_Green` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_ZiWuGong_01` | 罡气上限+500、闪避+15。 -子午功1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiWuGong_01.GE_Power_ZiWuGong_01_C` |
| 5 | `Power_ZiWuGong_05` | 资质+15。 -子午功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiWuGong_05.GE_Power_ZiWuGong_05_C` |
| 10 | `Power_ZiWuGong_10` | 罡气上限+500、最小攻击+18、最大攻击+18。 -子午功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiWuGong_10.GE_Power_ZiWuGong_10_C` |
| 15 | `Power_ZiWuGong_15` | 悟性+3；每次攻击有15%概率额外造成60%伤害，冷却5秒。 -子午功15层；授予技能 Power_ZiWuGong_15 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiWuGong_15.GE_Power_ZiWuGong_15_C` |

### B_HunYuanGong_Internal（蓝色-内功-中正-混元功）

品质 蓝 · 中正 · 等级表 `InternalBlueMaxLv25` · 等级 GE `GE_BookBase_Blue` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_HunYuan_01` | 罡气上限+500；钝击命中、施放招式、成功闪避分别获得一种混元印，持续8秒。 -混元功1层；授予技能 Power_HunYuan_01_Yin01,Power_HunYuan_01_Yin02,Power_HunYuan_01_Yin03 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HunYuan_L1.GE_Book_HunYuan_L1_C` |
| 5 | `Power_HunYuan_05` | 罡气上限+400；拥有两种不同混元印时，钝击伤害+6%、所受伤害-6%。 -混元功5层；授予技能 Power_HunYuan_05_Pair12,Power_HunYuan_05_Pair13,Power_HunYuan_05_Pair23 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HunYuan_L5.GE_Book_HunYuan_L5_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_HunYuan_L5_TwoYinBuff.GE_Book_HunYuan_L5_TwoYinBuff_C` |
| 10 | `Power_HunYuan_10` | 罡气上限+400；集齐三种混元印后，蓄势后的拳脚附加80%真气伤害，冷却8秒；命中有20%概率恢复2%最大罡气。 -混元功10层；授予技能 Power_HunYuan_10_YinAll,Power_HunYuan_10_Arm,Power_HunYuan_10_TrueQi | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HunYuan_L10.GE_Book_HunYuan_L10_C` |
| 20 | `Power_HunYuan_20` | 罡气上限+400；三印结算后进入混元归一6秒，钝击伤害+18%，且首次受伤降低25%。 -混元功20层；授予技能 Power_HunYuan_20_GuiYi,Power_HunYuan_20_FirstHurtConsume | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HunYuan_L20.GE_Book_HunYuan_L20_C` |
| 25 | `Power_HunYuan_25` | 罡气上限+300、钝击伤害+5%；混元归一期间拳脚命中有25%概率恢复2%最大罡气，每3秒最多一次。 -混元功25层；授予技能 Power_HunYuan_25_SanCaiHuanYuan | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HunYuan_L25.GE_Book_HunYuan_L25_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_HunYuan_L25_SanCaiBuff.GE_Book_HunYuan_L25_SanCaiBuff_C` |

### B_JiaYiShenGong_Internal（蓝色-内功-中正-舍身功）

品质 蓝 · 中正 · 等级表 `InternalBlueMaxLv25` · 等级 GE `GE_BookBase_Blue` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_JiaYi_01` | 罡气+500；受击进舍身窗(全增伤+12%、受伤+8%)。 -舍身功1层；授予技能 Power_JiaYi_01_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_JiaYi_L1.GE_Book_JiaYi_L1_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_JiaYi_JYBuff.GE_Book_JiaYi_JYBuff_C` |
| 5 | `Power_JiaYi_05` | 罡气+400；窗内命中20%回3%罡气。 -舍身功5层；授予技能 Power_JiaYi_05_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_JiaYi_L5.GE_Book_JiaYi_L5_C` |
| 10 | `Power_JiaYi_10` | 罡气+400；增伤累计+18%。 -舍身功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_JiaYi_L10.GE_Book_JiaYi_L10_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_JiaYi_JYBuff2.GE_Book_JiaYi_JYBuff2_C` |
| 20 | `Power_JiaYi_20` | 罡气+400；窗内攻击附虚弱。 -舍身功20层；授予技能 Power_JiaYi_20_XuRuo | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_JiaYi_L20.GE_Book_JiaYi_L20_C` |
| 25 | `Power_JiaYi_25` | 罡气+300。 -舍身功25层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_JiaYi_L25.GE_Book_JiaYi_L25_C` |

### B_LongXingMoQiao_Internal（蓝色-内功-阳性-连环桥手）

品质 蓝 · 阳性 · 等级表 `InternalBlueMaxLv25` · 等级 GE `GE_BookBase_Blue` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_MoQiao_01` | 罡气+500、钝击+8%。 -连环桥手1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoQiao_L1.GE_Book_MoQiao_L1_C` |
| 5 | `Power_MoQiao_05` | 罡气+400；连击叠桥手(每层钝击+2%,≤4)。 -连环桥手5层；授予技能 Power_MoQiao_10_Stack | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoQiao_L5.GE_Book_MoQiao_L5_C` |
| 10 | `Power_MoQiao_10` | 罡气+400。 -连环桥手10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoQiao_L10.GE_Book_MoQiao_L10_C` |
| 20 | `Power_MoQiao_20` | 罡气+400。 -连环桥手20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoQiao_L20.GE_Book_MoQiao_L20_C` |
| 25 | `Power_MoQiao_25` | 罡气+300、钝击+5%。 -连环桥手25层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoQiao_L25.GE_Book_MoQiao_L25_C` |

### B_ManTianHuaYu_Internal（蓝色-内功-远程-袖箭功）

品质 蓝 · 阴性 · 等级表 `InternalBlueMaxLv25` · 等级 GE `GE_BookBase_Blue` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_HuaYu_01` | 罡气+500、远程+10%。 -袖箭功1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuaYu_L1.GE_Book_HuaYu_L1_C` |
| 5 | `Power_HuaYu_05` | 罡气+400；暗器命中25%破甲。 -袖箭功5层；授予技能 Power_HuaYu_05_PoJia | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuaYu_L5.GE_Book_HuaYu_L5_C` |
| 10 | `Power_HuaYu_10` | 罡气+400；放召唤招进袖箭窗(远程+8%)。 -袖箭功10层；授予技能 Power_HuaYu_10_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuaYu_L10.GE_Book_HuaYu_L10_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_HuaYu_HYBuff.GE_Book_HuaYu_HYBuff_C` |
| 20 | `Power_HuaYu_20` | 罡气+400。 -袖箭功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuaYu_L20.GE_Book_HuaYu_L20_C` |
| 25 | `Power_HuaYu_25` | 罡气+300、远程+5%。 -袖箭功25层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuaYu_L25.GE_Book_HuaYu_L25_C` |

### B_MoHeWuLiang_Internal（蓝色-内功-中正-寸劲功）

品质 蓝 · 中正 · 等级表 `InternalBlueMaxLv25` · 等级 GE `GE_BookBase_Blue` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_MoHe_01` | 罡气+500、暴击+150。 -寸劲功1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoHe_L1.GE_Book_MoHe_L1_C` |
| 5 | `Power_MoHe_05` | 罡气+400；造成伤害20%进寸劲态(真气+12%、暴击+80)。 -寸劲功5层；授予技能 Power_MoHe_05_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoHe_L5.GE_Book_MoHe_L5_C` |
| 10 | `Power_MoHe_10` | 罡气+400。 -寸劲功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoHe_L10.GE_Book_MoHe_L10_C` |
| 20 | `Power_MoHe_20` | 罡气+400；寸劲态内命中20%回3%罡气。 -寸劲功20层；授予技能 Power_MoHe_20_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoHe_L20.GE_Book_MoHe_L20_C` |
| 25 | `Power_MoHe_25` | 罡气+300、真气+8%。 -寸劲功25层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_MoHe_L25.GE_Book_MoHe_L25_C` |

### B_NeiDan_Internal（蓝色-内功-中正-内丹术）

品质 蓝 · 中正 · 等级表 `InternalBlueMaxLv25` · 等级 GE `GE_BookBase_Blue` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_NeiDan_01` | 罡气上限+500、最小攻击+15、最大攻击+15。 -内丹术1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_NeiDan_01.GE_Power_NeiDan_01_C` |
| 5 | `Power_NeiDan_05` | 资质+8、中性武学经验加成+10%、罡气上限+500、真气附伤+5、闪避+10、躯干最大健康+150。 -内丹术5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_NeiDan_05.GE_Power_NeiDan_05_C` |
| 10 | `Power_NeiDan_10` | 悟性+1、罡气上限+500、真气附伤+5、命中+10、左臂最大健康+25%、右臂最大健康+25%。 -内丹术10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_NeiDan_10.GE_Power_NeiDan_10_C` |
| 20 | `Power_NeiDan_20` | 悟性+1、罡气上限+500、击退抗性+15、击飞抗性+15、左腿最大健康+25%、右腿最大健康+25%。 -内丹术20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_NeiDan_20.GE_Power_NeiDan_20_C` |
| 25 | `Power_NeiDan_25` | 受到攻击时有20%概率回复200点罡气，冷却10秒。 -内丹术25层；授予技能 Power_NeiDan_25 | — |

### B_ShenZhaoJing_Internal（蓝色-内功-中正-养气诀）

品质 蓝 · 中正 · 等级表 `InternalBlueMaxLv25` · 等级 GE `GE_BookBase_Blue` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_ShenZhao_01` | 罡气+500；受击25%回2%罡气。 -养气诀1层；授予技能 Power_ShenZhao_01_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenZhao_L1.GE_Book_ShenZhao_L1_C` |
| 5 | `Power_ShenZhao_05` | 罡气+400；放防御招进养气窗，受伤-10%。 -养气诀5层；授予技能 Power_ShenZhao_05_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenZhao_L5.GE_Book_ShenZhao_L5_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_ShenZhao_SZBuff.GE_Book_ShenZhao_SZBuff_C` |
| 10 | `Power_ShenZhao_10` | 罡气+400、罡气恢复加快。 -养气诀10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenZhao_L10.GE_Book_ShenZhao_L10_C` |
| 20 | `Power_ShenZhao_20` | 罡气+400；养气窗内受击反弹30%。 -养气诀20层；授予技能 Power_ShenZhao_20_Counter | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenZhao_L20.GE_Book_ShenZhao_L20_C` |
| 25 | `Power_ShenZhao_25` | 罡气+300。 -养气诀25层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenZhao_L25.GE_Book_ShenZhao_L25_C` |

### B_XiaoWuXiangGong_Internal（蓝色-内功-中正-凝气诀）

品质 蓝 · 中正 · 等级表 `InternalBlueMaxLv25` · 等级 GE `GE_BookBase_Blue` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_WuXiang_01` | 罡气+500；攻击叠凝气真气(每层真气+2.5%,≤5)。 -凝气诀1层；授予技能 Power_WuXiang_01_Stack | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_WuXiang_L1.GE_Book_WuXiang_L1_C` |
| 5 | `Power_WuXiang_05` | 罡气+400；蓄劲后攻击25%爆发80%真气。 -凝气诀5层；授予技能 Power_WuXiang_05_Burst | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_WuXiang_L5.GE_Book_WuXiang_L5_C` |
| 10 | `Power_WuXiang_10` | 罡气+400。 -凝气诀10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_WuXiang_L10.GE_Book_WuXiang_L10_C` |
| 20 | `Power_WuXiang_20` | 罡气+400。 -凝气诀20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_WuXiang_L20.GE_Book_WuXiang_L20_C` |
| 25 | `Power_WuXiang_25` | 罡气+300、真气+8%。 -凝气诀25层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_WuXiang_L25.GE_Book_WuXiang_L25_C` |

### A_BiXieJianPu_Internal（紫色-内功-阴性-辟邪剑谱）

品质 紫 · 阴性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple_TypeATT` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_BiXieJianPu_01` | 移动速度+50%、挥砍伤害+50%；每次攻击时，在5秒内挥砍暴击+10%，最多可叠加10层。 -辟邪剑谱1层；授予技能 Power_BiXieJianPu_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BiXieJianPu_01.GE_Power_BiXieJianPu_01_C` |
| 5 | `Power_BiXieJianPu_05` | 最小攻击+12、最大攻击+24、挥砍增幅+8%、左腿最大健康+150、右腿最大健康+150。 -辟邪剑谱5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BiXieJianPu_02.GE_Power_BiXieJianPu_02_C` |
| 10 | `Power_BiXieJianPu_10` | 罡气上限+500；每次攻击时，在3秒内闪避+30、命中+30。 -辟邪剑谱10层；授予技能 Power_BiXieJianPu_04 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BiXieJianPu_04.GE_Power_BiXieJianPu_04_C` |
| 20 | `Power_BiXieJianPu_20` | 最小攻击+16、最大攻击+32、挥砍增幅+4%。 -辟邪剑谱20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BiXieJianPu_06.GE_Power_BiXieJianPu_06_C` |
| 30 | `Power_BiXieJianPu_30` | 最小攻击+16、最大攻击+32、挥砍增幅+4%。 -辟邪剑谱30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BiXieJianPu_08.GE_Power_BiXieJianPu_08_C` |
| 40 | `Power_BiXieJianPu_40` | 最低温度耐受-25、罡气上限+500、挥砍增幅+12%；受到伤害时，射出1道剑影，追踪目标造成110挥砍伤害。 -辟邪剑谱40层；授予技能 Power_BiXieJianPu_10 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BiXieJianPu_10.GE_Power_BiXieJianPu_10_C` |

### A_BingPoShenGong_Internal（紫色-内功-阴性-冰魄神功）

品质 紫 · 阴性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_BingPoShenGong_01` | 罡气上限+500；攻击时有20%概率附加2秒冻结效果，冷却20秒。 -冰魄神功1层；授予技能 Power_BingPoShenGong_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BingPoShenGong_01.GE_Power_BingPoShenGong_01_C` |
| 5 | `Power_BingPoShenGong_05` | 阴性武学经验加成+40%、罡气上限+500、移动速度+8。 -冰魄神功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BingPoShenGong_05.GE_Power_BingPoShenGong_05_C` |
| 10 | `Power_BingPoShenGong_10` | 罡气上限+500、左腿最大健康+85%、右腿最大健康+85%。 -冰魄神功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BingPoShenGong_10.GE_Power_BingPoShenGong_10_C` |
| 20 | `Power_BingPoShenGong_20` | 资质+18、罡气上限+500、钝击伤害+50。 -冰魄神功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BingPoShenGong_20.GE_Power_BingPoShenGong_20_C` |
| 30 | `Power_BingPoShenGong_30` | 罡气上限+500、躯干最大健康+25%、命中+15。 -冰魄神功30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BingPoShenGong_30.GE_Power_BingPoShenGong_30_C` |
| 40 | `Power_BingPoShenGong_40` | 罡气上限+500、移动速度+15。 -冰魄神功40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_BingPoShenGong_40.GE_Power_BingPoShenGong_40_C` |

### A_ChuanYunPoKong_Internal（紫色-内功-远程-穿云破空诀）

品质 紫 · 阳性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_ChuanYun_01` | 罡气+600、修炼经验+8%、穿刺+12%、远程+8%。 -穿云破空诀1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ChuanYun_L1.GE_Book_ChuanYun_L1_C` |
| 5 | `Power_ChuanYun_05` | 罡气+550；穿刺命中25%破甲。 -穿云破空诀5层；授予技能 Power_ChuanYun_05_PoJia | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ChuanYun_L5.GE_Book_ChuanYun_L5_C` |
| 10 | `Power_ChuanYun_10` | 罡气+550、远程+5%。 -穿云破空诀10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ChuanYun_L10.GE_Book_ChuanYun_L10_C` |
| 20 | `Power_ChuanYun_20` | 罡气+550、穿刺+10%。 -穿云破空诀20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ChuanYun_L20.GE_Book_ChuanYun_L20_C` |
| 30 | `Power_ChuanYun_30` | 罡气+500、暴击+200。 -穿云破空诀30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ChuanYun_L30.GE_Book_ChuanYun_L30_C` |
| 40 | `Power_ChuanYun_40` | 罡气+450、远程+6%。 -穿云破空诀40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ChuanYun_L40.GE_Book_ChuanYun_L40_C` |

### A_ChunYang_Internal（紫色-内功-中正-纯阳无极功）

品质 紫 · 阳性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_ChunYang_01` | 悟性+8、罡气上限+800、最小攻击+25、最大攻击+25。 -纯阳无极功1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ChunYang_01.GE_Power_ChunYang_01_C` |
| 5 | `Power_ChunYang_05` | 阳性武学经验加成+40%、罡气上限+800、躯干最大健康+20%、最低温度耐受-5。 -纯阳无极功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ChunYang_05.GE_Power_ChunYang_05_C` |
| 10 | `Power_ChunYang_10` | 罡气上限+800、左臂最大健康+85%、右臂最大健康+85%。 -纯阳无极功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ChunYang_10.GE_Power_ChunYang_10_C` |
| 20 | `Power_ChunYang_20` | 罡气上限+800、躯干最大健康+25%、击退抗性+25。 -纯阳无极功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ChunYang_20.GE_Power_ChunYang_20_C` |
| 30 | `Power_ChunYang_30` | 资质+8、罡气上限+1000、最小攻击+20、最大攻击+20、最低温度耐受-5、最高温度耐受+10。 -纯阳无极功30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ChunYang_30.GE_Power_ChunYang_30_C` |
| 40 | `Power_ChunYang_40` | 受到攻击有15%概率攻击+45，效果持续15秒，最多叠加3层。 -纯阳无极功40层；授予技能 Power_ChunYang_40 | — |

### A_HeHuanGong_Internal（紫色-内功-阴性-合欢功）

品质 紫 · 阴性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple_TypeATT` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_HeHuanGong_01` | 罡气上限+500；每次攻击有20%概率掷出合欢刃，（合欢刃：在20秒内，每秒造成18%的真气伤害，合欢刃冷却20秒）。 -合欢功1层；授予技能 Power_HeHuanGong_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HeHuanGong_01.GE_Power_HeHuanGong_01_C` |
| 5 | `Power_HeHuanGong_05` | 阴性武学经验加成+40%、罡气上限+500、移动速度+8。 -合欢功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HeHuanGong_05.GE_Power_HeHuanGong_05_C` |
| 10 | `Power_HeHuanGong_10` | 罡气上限+500、左腿最大健康+85%、右腿最大健康+85%。 -合欢功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HeHuanGong_10.GE_Power_HeHuanGong_10_C` |
| 20 | `Power_HeHuanGong_20` | 罡气上限+500、躯干最大健康+25%、击退抗性+25。 -合欢功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HeHuanGong_20.GE_Power_HeHuanGong_20_C` |
| 30 | `Power_HeHuanGong_30` | 资质+18、罡气上限+500、钝击伤害+50。 -合欢功30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HeHuanGong_30.GE_Power_HeHuanGong_30_C` |
| 40 | `Power_HeHuanGong_40` | 罡气上限+500、移动速度+18。 -合欢功40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_HeHuanGong_40.GE_Power_HeHuanGong_40_C` |

### A_JianQiJue_Internal（紫色-内功-阳性-剑气诀）

品质 紫 · 阳性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple_TypeDEF` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_JianQiJue_01` | 罡气上限+700；每次攻击有20%概率召唤[剑气护体]，（剑气护体：在30秒内，减少15%受到的伤害，冷却75秒）。 -剑气诀1层；授予技能 Power_JianQiJue_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JianQiJue_01.GE_Power_JianQiJue_01_C` |
| 5 | `Power_JianQiJue_05` | 罡气上限+700；受到攻击时有20%概率触发[剑气反击]，（剑气反击：对敌人造成100%攻击的伤害，冷却5秒）。 -剑气诀5层；授予技能 Power_JianQiJue_05 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JianQiJue_05.GE_Power_JianQiJue_05_C` |
| 10 | `Power_JianQiJue_10` | 罡气上限+700、躯干最大健康+25%。 -剑气诀10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JianQiJue_10.GE_Power_JianQiJue_10_C` |
| 20 | `Power_JianQiJue_20` | 资质+18、罡气上限+700、挥砍伤害+50。 -剑气诀20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JianQiJue_20.GE_Power_JianQiJue_20_C` |
| 30 | `Power_JianQiJue_30` | 悟性+6、暴击+15。 -剑气诀30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_JianQiJue_30.GE_Power_JianQiJue_30_C` |
| 40 | `Power_JianQiJue_40` | 攻击时有20%概率召唤3道护体剑气，在30秒内，减少45%受到的伤害，冷却75秒）。 -剑气诀40层；授予技能 Power_JianQiJue_40 | — |

### A_LuoHanFuMoGong_Internal（紫色-内功-阳性-罗汉伏魔功）

品质 紫 · 阳性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple_TypeDEF` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_LuoHanFuMoGong_01` | 罡气上限+700；每次攻击有30%概率触发[罗汉金身]，（罗汉金身：在20秒内，每次攻击额外造成20%钝击抗性的真气伤害，罗汉金身冷却60秒）。 -罗汉伏魔功1层；授予技能 Power_LuoHanFuMoGong_01,Power_LuoHanFuMoGong_01_2 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LuoHanFuMoGong_01.GE_Power_LuoHanFuMoGong_01_C` |
| 5 | `Power_LuoHanFuMoGong_05` | 阳性武学经验加成+40%、罡气上限+700、躯干最大健康+200。 -罗汉伏魔功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LuoHanFuMoGong_05.GE_Power_LuoHanFuMoGong_05_C` |
| 10 | `Power_LuoHanFuMoGong_10` | 罡气上限+700、左臂最大健康+85%、右臂最大健康+85%。 -罗汉伏魔功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LuoHanFuMoGong_10.GE_Power_LuoHanFuMoGong_10_C` |
| 20 | `Power_LuoHanFuMoGong_20` | 罡气上限+700、躯干最大健康+25%、击退抗性+25。 -罗汉伏魔功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LuoHanFuMoGong_20.GE_Power_LuoHanFuMoGong_20_C` |
| 30 | `Power_LuoHanFuMoGong_30` | 资质+8、罡气上限+700、钝击伤害+50。 -罗汉伏魔功30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LuoHanFuMoGong_30.GE_Power_LuoHanFuMoGong_30_C` |
| 40 | `Power_LuoHanFuMoGong_40` | 罡气上限+1000、命中+50。 -罗汉伏魔功40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_LuoHanFuMoGong_40.GE_Power_LuoHanFuMoGong_40_C` |

### A_SheHunJing_Internal（紫色-内功-阴性-摄魂经）

品质 紫 · 阴性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_SheHun_01` | 罡气+600、修炼经验+8%；命中15%附沉默。 -摄魂经1层；授予技能 Power_SheHun_01_Silence | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_SheHun_L1.GE_Book_SheHun_L1_C` |
| 5 | `Power_SheHun_05` | 罡气+550；命中20%附减速。 -摄魂经5层；授予技能 Power_SheHun_05_Slow | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_SheHun_L5.GE_Book_SheHun_L5_C` |
| 10 | `Power_SheHun_10` | 罡气+550、全增伤+5%。 -摄魂经10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_SheHun_L10.GE_Book_SheHun_L10_C` |
| 20 | `Power_SheHun_20` | 罡气+550；命中15%附定身。 -摄魂经20层；授予技能 Power_SheHun_20_Ding | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_SheHun_L20.GE_Book_SheHun_L20_C` |
| 30 | `Power_SheHun_30` | 罡气+550、全增伤+3%。 -摄魂经30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_SheHun_L30.GE_Book_SheHun_L30_C` |
| 40 | `Power_SheHun_40` | 罡气+450、全增伤+6%。 -摄魂经40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_SheHun_L40.GE_Book_SheHun_L40_C` |

### A_ShenJiHuoLong_Internal（紫色-内功-远程-神机火龙诀）

品质 紫 · 阳性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_ShenJi_01` | 罡气+600、修炼经验+8%、远程+12%。 -神机火龙诀1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenJi_L1.GE_Book_ShenJi_L1_C` |
| 5 | `Power_ShenJi_05` | 罡气+550；远程命中25%灼烧。 -神机火龙诀5层；授予技能 Power_ShenJi_05_Burn | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenJi_L5.GE_Book_ShenJi_L5_C` |
| 10 | `Power_ShenJi_10` | 罡气+550、远程+5%。 -神机火龙诀10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenJi_L10.GE_Book_ShenJi_L10_C` |
| 20 | `Power_ShenJi_20` | 罡气+550、灼烧DoT+15%。 -神机火龙诀20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenJi_L20.GE_Book_ShenJi_L20_C` |
| 30 | `Power_ShenJi_30` | 罡气+500、远程+10%。 -神机火龙诀30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenJi_L30.GE_Book_ShenJi_L30_C` |
| 40 | `Power_ShenJi_40` | 罡气+450、远程+6%。 -神机火龙诀40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_ShenJi_L40.GE_Book_ShenJi_L40_C` |

### A_XiXingDaFa_Internal（紫色-内功-阴性-吸星大法）

品质 紫 · 阴性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_XiXing_01` | 罡气+600、修炼经验+8%；造成伤害20%回2%罡气。 -吸星大法1层；授予技能 Power_XiXing_01_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XiXing_L1.GE_Book_XiXing_L1_C` |
| 5 | `Power_XiXing_05` | 罡气+550；命中叠星力(每层全增伤+2%,≤5)。 -吸星大法5层；授予技能 Power_XiXing_05_Stack | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XiXing_L5.GE_Book_XiXing_L5_C` |
| 10 | `Power_XiXing_10` | 罡气+550。 -吸星大法10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XiXing_L10.GE_Book_XiXing_L10_C` |
| 20 | `Power_XiXing_20` | 罡气+550；有星力时攻击35%爆发80%真气。 -吸星大法20层；授予技能 Power_XiXing_20_Burst | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XiXing_L20.GE_Book_XiXing_L20_C` |
| 30 | `Power_XiXing_30` | 罡气+500、全增伤+3%。 -吸星大法30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XiXing_L30.GE_Book_XiXing_L30_C` |
| 40 | `Power_XiXing_40` | 罡气+450、全增伤+3%。 -吸星大法40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XiXing_L40.GE_Book_XiXing_L40_C` |

### A_XianTianGong_Internal（紫色-内功-中正-先天功）

品质 紫 · 中正 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_XianTian_01` | 罡气+600、悟性+5、资质+5、修炼经验+10%。 -先天功1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XianTian_L1.GE_Book_XianTian_L1_C` |
| 5 | `Power_XianTian_05` | 罡气+550；受击25%回2%罡气。 -先天功5层；授予技能 Power_XianTian_05_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XianTian_L5.GE_Book_XianTian_L5_C` |
| 10 | `Power_XianTian_10` | 罡气+550；放防御招进先天窗8秒(受伤-12%)。 -先天功10层；授予技能 Power_XianTian_10_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XianTian_L10.GE_Book_XianTian_L10_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_XianTian_XTBuff.GE_Book_XianTian_XTBuff_C` |
| 20 | `Power_XianTian_20` | 罡气+550；先天窗内每2秒回2%罡气。 -先天功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XianTian_L20.GE_Book_XianTian_L20_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_XianTian_TickHui.GE_Book_XianTian_TickHui_C` |
| 30 | `Power_XianTian_30` | 罡气+500；先天窗内放支援招回2%罡气。 -先天功30层；授予技能 Power_XianTian_30_SupRecover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XianTian_L30.GE_Book_XianTian_L30_C` |
| 40 | `Power_XianTian_40` | 罡气+450；全类型受伤再-6%。 -先天功40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_XianTian_L40.GE_Book_XianTian_L40_C` |

### A_YinXueMoGong_Internal（紫色-内功-刃刺-饮血魔功）

品质 紫 · 阴性 · 等级表 `InternalPurpleMaxLv40` · 等级 GE `GE_BookBase_Purple` · 阅读境界 1

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_YinXue_01` | 罡气+600、修炼经验+8%；挥砍命中附流血。 -饮血魔功1层；授予技能 Power_YinXue_01_Bleed | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_YinXue_L1.GE_Book_YinXue_L1_C` |
| 5 | `Power_YinXue_05` | 罡气+550、劈砍+9%。 -饮血魔功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_YinXue_L5.GE_Book_YinXue_L5_C` |
| 10 | `Power_YinXue_10` | 罡气+550；挥砍命中25%回2%罡气。 -饮血魔功10层；授予技能 Power_YinXue_10_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_YinXue_L10.GE_Book_YinXue_L10_C` |
| 20 | `Power_YinXue_20` | 罡气+550、劈砍+5%。 -饮血魔功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_YinXue_L20.GE_Book_YinXue_L20_C` |
| 30 | `Power_YinXue_30` | 罡气+550、流血DoT+15%。 -饮血魔功30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_YinXue_L30.GE_Book_YinXue_L30_C` |
| 40 | `Power_YinXue_40` | 罡气+450、劈砍+8%。 -饮血魔功40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_YinXue_L40.GE_Book_YinXue_L40_C` |

### S_BuSiYinFa_Internal（橙色-内功-中正-不死印法）

品质 橙 · 中正 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_BuSi_01` | 罡气+600、悟性+3、资质+3、修炼经验+10%；受击进不死窗(受伤-15%)。 -不死印法1层；授予技能 Power_BuSi_01_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_BuSi_L1.GE_Book_BuSi_L1_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_BuSi_Buff1.GE_Book_BuSi_Buff1_C` |
| 5 | `Power_BuSi_05` | 罡气+550；不死窗内受击反弹40%。 -不死印法5层；授予技能 Power_BuSi_05_Counter | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_BuSi_L5.GE_Book_BuSi_L5_C` |
| 10 | `Power_BuSi_10` | 罡气+550；不死窗内每2秒回2%罡气。 -不死印法10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_BuSi_L10.GE_Book_BuSi_L10_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_BuSi_Tick.GE_Book_BuSi_Tick_C` |
| 20 | `Power_BuSi_20` | 罡气+550；不死窗内受击30%回2%罡气。 -不死印法20层；授予技能 Power_BuSi_20_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_BuSi_L20.GE_Book_BuSi_L20_C` |
| 30 | `Power_BuSi_30` | 罡气+550；不死窗内受伤再-10%(合计-23.5%)。 -不死印法30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_BuSi_L30.GE_Book_BuSi_L30_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_BuSi_Buff2.GE_Book_BuSi_Buff2_C` |
| 40 | `Power_BuSi_40` | 罡气+550。 -不死印法40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_BuSi_L40.GE_Book_BuSi_L40_C` |
| 50 | `Power_BuSi_50` | 罡气+500；常驻受伤-8%。 -不死印法50层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_BuSi_L50.GE_Book_BuSi_L50_C` |

### S_DaoXinZhongMo_Internal（橙色-内功-阴性-道心种魔大法）

品质 橙 · 阴性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_DaoXin_01` | 罡气+600、修炼经验+10%；战斗中每3秒叠1层魔种(每层全增伤+2%,≤8)。 -道心种魔大法1层；授予技能 Power_DaoXin_01_Tick | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_DaoXin_L1.GE_Book_DaoXin_L1_C` |
| 5 | `Power_DaoXin_05` | 罡气+550；造成伤害20%额外叠1层魔种。 -道心种魔大法5层；授予技能 Power_DaoXin_05_Stack | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_DaoXin_L5.GE_Book_DaoXin_L5_C` |
| 10 | `Power_DaoXin_10` | 罡气+550；魔种上限8。 -道心种魔大法10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_DaoXin_L10.GE_Book_DaoXin_L10_C` |
| 20 | `Power_DaoXin_20` | 罡气+550；有魔种时攻击爆发80%真气。 -道心种魔大法20层；授予技能 Power_DaoXin_20_Burst | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_DaoXin_L20.GE_Book_DaoXin_L20_C` |
| 30 | `Power_DaoXin_30` | 罡气+550、全增伤+3%。 -道心种魔大法30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_DaoXin_L30.GE_Book_DaoXin_L30_C` |
| 40 | `Power_DaoXin_40` | 罡气+550；放攻击招额外叠1层魔种。 -道心种魔大法40层；授予技能 Power_DaoXin_40_Stack | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_DaoXin_L40.GE_Book_DaoXin_L40_C` |
| 50 | `Power_DaoXin_50` | 罡气+500、全增伤+8%。 -道心种魔大法50层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_DaoXin_L50.GE_Book_DaoXin_L50_C` |

### S_DouZhuanXingYi_Internal（金色-内功-阴性-斗转星移）

品质 橙 · 阴性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold` · 阅读境界 3

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_DouZhuanXingYi_01` | 罡气上限+500；每次受到伤害时反弹30%的伤害。 -斗转星移1层；授予技能 Power_DouZhuanXingYi_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DouZhuanXingYi_01.GE_Power_DouZhuanXingYi_01_C` |
| 5 | `Power_DouZhuanXingYi_05` | 资质+50、罡气上限+500、穿刺伤害+50。 -斗转星移5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DouZhuanXingYi_05.GE_Power_DouZhuanXingYi_05_C` |
| 10 | `Power_DouZhuanXingYi_10` | 罡气上限+500、枪戟武学经验加成+50%、闪避+50。 -斗转星移10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DouZhuanXingYi_10.GE_Power_DouZhuanXingYi_10_C` |
| 20 | `Power_DouZhuanXingYi_20` | 资质+30、阴性武学经验加成+30%、罡气上限+500。 -斗转星移20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DouZhuanXingYi_20.GE_Power_DouZhuanXingYi_20_C` |
| 30 | `Power_DouZhuanXingYi_30` | 每次攻击罡气+60，同时使敌方罡气-60。 -斗转星移30层；授予技能 Power_DouZhuanXingYi_30 | — |
| 40 | `Power_DouZhuanXingYi_40` | 罡气上限+500、躯干最大健康+800、闪避+50。 -斗转星移40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DouZhuanXingYi_40.GE_Power_DouZhuanXingYi_40_C` |
| 50 | `Power_DouZhuanXingYi_50` | 受到攻击时有20%概率回复700点罡气，冷却15秒。 -斗转星移50层；授予技能 Power_DouZhuanXingYi_50 | — |

### S_DuGuXinFa_Internal（金色-内功-阳性-独孤心法）

品质 橙 · 阳性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold` · 阅读境界 4

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_DuGuXinFa_01` | 使用刀剑时，闪避+25%、穿刺伤害+50%、挥砍伤害+50%。 -独孤心法1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_01.GE_Power_DuGuXinFa_01_C` |
| 5 | `Power_DuGuXinFa_05` | 罡气上限+800。 -独孤心法5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_02.GE_Power_DuGuXinFa_02_C` |
| 10 | `Power_DuGuXinFa_10` | 每有10挥砍抗性，挥砍暴击+1；每有10穿刺抗性，穿刺暴击+1。 -独孤心法10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_04.GE_Power_DuGuXinFa_04_C` |
| 20 | `Power_DuGuXinFa_20` | 罡气上限+800、最大攻击+50。 -独孤心法20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_06.GE_Power_DuGuXinFa_06_C` |
| 30 | `Power_DuGuXinFa_30` | 攻击时有15%概率召唤剑气，对敌人造成80%真气伤害。 -独孤心法30层；授予技能 Power_DuGuXinFa_08 | — |
| 40 | `Power_DuGuXinFa_40` | 罡气上限+800、躯干最大健康+500、移动速度+50。 -独孤心法40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_10.GE_Power_DuGuXinFa_10_C` |
| 50 | `Power_DuGuXinFa_50` | 受到攻击时有50%概率回复500点罡气，冷却15秒。 -独孤心法50层；授予技能 Power_DuGuXinFa_12 | — |

### S_HuanRiDaFa_Internal（橙色-内功-轻功-换日大法）

品质 橙 · 中正 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_HuanRi_01` | 罡气+600、资质+3、修炼经验+10%、闪避+180。 -换日大法1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuanRi_L1.GE_Book_HuanRi_L1_C` |
| 5 | `Power_HuanRi_05` | 罡气+550；闪避25%反击80%真气。 -换日大法5层；授予技能 Power_HuanRi_05_Counter | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuanRi_L5.GE_Book_HuanRi_L5_C` |
| 10 | `Power_HuanRi_10` | 罡气+550；放轻功招进换日窗(闪避+60)。 -换日大法10层；授予技能 Power_HuanRi_10_Window | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuanRi_L10.GE_Book_HuanRi_L10_C`<br>`/Game/Blueprints/AbilitySystem/GameplayEffect/Book/SkillGE/GE_Book_HuanRi_HRBuff.GE_Book_HuanRi_HRBuff_C` |
| 20 | `Power_HuanRi_20` | 罡气+550。 -换日大法20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuanRi_L20.GE_Book_HuanRi_L20_C` |
| 30 | `Power_HuanRi_30` | 罡气+550。 -换日大法30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuanRi_L30.GE_Book_HuanRi_L30_C` |
| 40 | `Power_HuanRi_40` | 罡气+550；换日窗内闪避回2%罡气。 -换日大法40层；授予技能 Power_HuanRi_40_Recover | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuanRi_L40.GE_Book_HuanRi_L40_C` |
| 50 | `Power_HuanRi_50` | 罡气+500、闪避+60(累计240,窗内300)。 -换日大法50层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_HuanRi_L50.GE_Book_HuanRi_L50_C` |

### S_KuiHuaBaoDian_Internal（金色-内功-阴性-葵花宝典）

品质 橙 · 阴性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold_TypeATT` · 阅读境界 4

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_KuiHuaBaoDian_01` | 罡气上限+400；每次攻击附加100真气伤害，并有20%概率附加3秒眩晕效果 -葵花宝典1层；授予技能 Power_KuiHuaBaoDian_01,Power_KuiHuaBaoDian_01_2 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_KuiHuaBaoDian_01.GE_Power_KuiHuaBaoDian_01_C` |
| 5 | `Power_KuiHuaBaoDian_05` | 罡气上限+400、远程伤害系数+5%。 -葵花宝典5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_KuiHuaBaoDian_05.GE_Power_KuiHuaBaoDian_05_C` |
| 10 | `Power_KuiHuaBaoDian_10` | 阴性武学经验加成+30%；每次攻击有25%概率额外造成100%真气伤害，冷却3秒。 -葵花宝典10层；授予技能 Power_KuiHuaBaoDian_10 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_KuiHuaBaoDian_10.GE_Power_KuiHuaBaoDian_10_C` |
| 20 | `Power_KuiHuaBaoDian_20` | 罡气上限+400、远程武学经验加成+50%。 -葵花宝典20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_KuiHuaBaoDian_20.GE_Power_KuiHuaBaoDian_20_C` |
| 30 | `Power_KuiHuaBaoDian_30` | 攻击额外造成5%罡气上限的伤害，冷却5秒。 -葵花宝典30层；授予技能 Power_KuiHuaBaoDian_30 | — |
| 40 | `Power_KuiHuaBaoDian_40` | 攻击时有30%概率在为敌人注入寒气，在20秒内，降低40%移动速度。 -葵花宝典40层；授予技能 Power_KuiHuaBaoDian_40 | — |
| 50 | `Power_KuiHuaBaoDian_50` | 攻击时有25%概率在对敌人内脏造成15真气伤害，冷却15秒。 -葵花宝典50层；授予技能 Power_KuiHuaBaoDian_50 | — |

### S_QiJueJing_Internal（金色-内功-阴性-七绝经）

品质 橙 · 阴性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold_TypeATT` · 阅读境界 3

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_QiJueJing_01` | 罡气上限+400；闪避后，在10秒内，攻击+20%。 -七绝经1层；授予技能 Power_QiJueJing_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_QiJueJing_01.GE_Power_QiJueJing_01_C` |
| 5 | `Power_QiJueJing_05` | 资质+50、罡气上限+400、远程伤害系数+2%。 -七绝经5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_QiJueJing_05.GE_Power_QiJueJing_05_C` |
| 10 | `Power_QiJueJing_10` | 资质+20、阴性武学经验加成+50%、罡气上限+400。 -七绝经10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_QiJueJing_10.GE_Power_QiJueJing_10_C` |
| 20 | `Power_QiJueJing_20` | 命中+100、远程伤害系数+2%。 -七绝经20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_QiJueJing_20.GE_Power_QiJueJing_20_C` |
| 30 | `Power_QiJueJing_30` | 远程武学经验加成+50%、闪避+50。 -七绝经30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_QiJueJing_30.GE_Power_QiJueJing_30_C` |
| 40 | `Power_QiJueJing_40` | 罡气上限+400、左腿最大健康+400、右腿最大健康+400。 -七绝经40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_QiJueJing_40.GE_Power_QiJueJing_40_C` |
| 50 | `Power_QiJueJing_50` | 攻击时有30%概率在10秒内，使敌人抗性-30%。 -七绝经50层；授予技能 Power_QiJueJing_50 | — |

### S_SanFenGuiYuan_Internal（金色-内功-阴性-三分归元）

品质 橙 · 中正 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold_TypeDEF` · 阅读境界 3

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_SanFenGuiYuan_01` | 罡气上限+800；每次攻击罡气+20，同时使敌方罡气-20。 -三分归元1层；授予技能 Power_SanFenGuiYuan_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_SanFenGuiYuan_01.GE_Power_SanFenGuiYuan_01_C` |
| 5 | `Power_SanFenGuiYuan_05` | 资质+30、罡气上限+800、钝击伤害+50。 -三分归元5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_SanFenGuiYuan_05.GE_Power_SanFenGuiYuan_05_C` |
| 10 | `Power_SanFenGuiYuan_10` | 罡气上限+800、中性武学经验加成+50%。 -三分归元10层；授予技能 Power_SanFenGuiYuan_10 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_SanFenGuiYuan_10.GE_Power_SanFenGuiYuan_10_C` |
| 20 | `Power_SanFenGuiYuan_20` | 资质+20、阴性武学经验加成+30%、罡气上限+800。 -三分归元20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_SanFenGuiYuan_20.GE_Power_SanFenGuiYuan_20_C` |
| 30 | `Power_SanFenGuiYuan_30` | 每次攻击罡气+30，同时使敌方罡气-30。 -三分归元30层；授予技能 Power_SanFenGuiYuan_30 | — |
| 40 | `Power_SanFenGuiYuan_40` | 最低温度耐受-15、最高温度耐受+15、罡气上限+800、躯干最大健康+800。 -三分归元40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_SanFenGuiYuan_40.GE_Power_SanFenGuiYuan_40_C` |
| 50 | `Power_SanFenGuiYuan_50` | 钝击伤害+50、暴击+80。 -三分归元50层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_SanFenGuiYuan_50.GE_Power_SanFenGuiYuan_50_C` |

### S_ShengLing_Internal（金色-内功-阳性-圣灵剑诀）

品质 橙 · 阳性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold_TypeATT` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_DuGuXinFa_01` | 使用刀剑时，闪避+25%、穿刺伤害+50%、挥砍伤害+50%。 -独孤心法1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_01.GE_Power_DuGuXinFa_01_C` |
| 5 | `Power_DuGuXinFa_05` | 罡气上限+800。 -独孤心法5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_02.GE_Power_DuGuXinFa_02_C` |
| 10 | `Power_DuGuXinFa_10` | 每有10挥砍抗性，挥砍暴击+1；每有10穿刺抗性，穿刺暴击+1。 -独孤心法10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_04.GE_Power_DuGuXinFa_04_C` |
| 20 | `Power_DuGuXinFa_20` | 罡气上限+800、最大攻击+50。 -独孤心法20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_06.GE_Power_DuGuXinFa_06_C` |
| 30 | `Power_DuGuXinFa_30` | 攻击时有15%概率召唤剑气，对敌人造成80%真气伤害。 -独孤心法30层；授予技能 Power_DuGuXinFa_08 | — |
| 40 | `Power_DuGuXinFa_40` | 罡气上限+800、躯干最大健康+500、移动速度+50。 -独孤心法40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_DuGuXinFa_10.GE_Power_DuGuXinFa_10_C` |
| 50 | `Power_DuGuXinFa_50` | 受到攻击时有50%概率回复100点罡气，冷却5秒。 -独孤心法50层；授予技能 Power_DuGuXinFa_12 | — |

### S_TaiJi_Internal（金色-内功-中正-太极神功）

品质 橙 · 中正 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_Taiji_01` | 罡气上限+800；受到伤害时，20%概率恢复2%罡气。 -太极神功1层 | — |
| 5 | `Power_Taiji_05` | 最小攻击+25、最大攻击+25、挥砍伤害+25。 -太极神功5层 | — |
| 10 | `Power_Taiji_10` | 罡气上限+800、拳掌武学经验加成+50%；受到伤害时触发暗劲，对前方小范围敌人，造成36%的真气伤害，冷却16秒。 -太极神功10层 | — |
| 20 | `Power_Taiji_20` | 受到攻击时有20%概率回复5%点罡气，冷却15秒。 -太极神功20层 | — |
| 30 | `Power_Taiji_30` | 最小攻击+30、最大攻击+30、真气附伤+36；受到伤害时触发化劲，受到伤害-36%，持续3秒，冷却16秒。 -太极神功30层 | — |
| 40 | `Power_Taiji_40` | 罡气上限+800、躯干最大健康+500。 -太极神功40层 | — |
| 50 | `Power_Taiji_50` | 罡气上限+800、资质+50；受到伤害时触发意劲，真气伤害+100%，持续15秒，冷却30秒。 -太极神功50层 | — |

### S_TaiQingShenYan_Internal（橙色-内功-刀剑-太清神焰）

品质 橙 · 阳性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_TaiQing_01` | 罡气+600、修炼经验+10%、真气伤害+15%。 -太清神焰1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TaiQing_L1.GE_Book_TaiQing_L1_C` |
| 5 | `Power_TaiQing_05` | 罡气+550；放攻击招使敌神焰焚烧。 -太清神焰5层；授予技能 Power_TaiQing_05_Burn | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TaiQing_L5.GE_Book_TaiQing_L5_C` |
| 10 | `Power_TaiQing_10` | 罡气+550、真气+12%。 -太清神焰10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TaiQing_L10.GE_Book_TaiQing_L10_C` |
| 20 | `Power_TaiQing_20` | 罡气+550；攻击招30%爆发80%真气。 -太清神焰20层；授予技能 Power_TaiQing_20_Burst | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TaiQing_L20.GE_Book_TaiQing_L20_C` |
| 30 | `Power_TaiQing_30` | 罡气+550、焚烧DoT+20%。 -太清神焰30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TaiQing_L30.GE_Book_TaiQing_L30_C` |
| 40 | `Power_TaiQing_40` | 罡气+550、真气+10%。 -太清神焰40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TaiQing_L40.GE_Book_TaiQing_L40_C` |
| 50 | `Power_TaiQing_50` | 罡气+500、真气+8%。 -太清神焰50层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Book_TaiQing_L50.GE_Book_TaiQing_L50_C` |

### S_TianMoGong_Internal（金色-内功-阴性-天魔功）

品质 橙 · 阴性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold_TypeATT` · 阅读境界 3

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_TianMoGong_01` | 罡气上限+400；攻击时有15%概率附加连击，额外造成50%的伤害。 -天魔功1层；授予技能 Power_TianMoGong_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_TianMoGong_01.GE_Power_TianMoGong_01_C` |
| 5 | `Power_TianMoGong_05` | 资质+50、罡气上限+400、远程伤害系数+3%。 -天魔功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_TianMoGong_05.GE_Power_TianMoGong_05_C` |
| 10 | `Power_TianMoGong_10` | 罡气上限+400、远程武学经验加成+50%、闪避+50。 -天魔功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_TianMoGong_10.GE_Power_TianMoGong_10_C` |
| 20 | `Power_TianMoGong_20` | 资质+30、阴性武学经验加成+30%、罡气上限+400。 -天魔功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_TianMoGong_20.GE_Power_TianMoGong_20_C` |
| 30 | `Power_TianMoGong_30` | 攻击时有20%概率为敌人注入毒素，每秒造成5%的毒素伤害，效果持续10秒，最多叠加10层。 -天魔功30层；授予技能 Power_TianMoGong_30 | — |
| 40 | `Power_TianMoGong_40` | 罡气上限+400、躯干最大健康+800、闪避+50。 -天魔功40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_TianMoGong_40.GE_Power_TianMoGong_40_C` |
| 50 | `Power_TianMoGong_50` | 受到攻击时有15%概率触发[天魔变]（天魔变：立即恢复4000点罡气，每次闪避成功会以自身为中心发射10枚飞刀，对敌人造成60%穿刺伤害，天魔变持续10秒，冷却50秒）。 -天魔功50层；授予技能 Power_TianMoGong_50,Power_TianMoGong_50_2 | — |

### S_XiangLongShiBaZhang_Internal（金色-内功-中正-降龙掌法）

品质 橙 · 中正 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold_TypeATT` · 阅读境界 4

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_XiangLongShiBaZhang_01` | 罡气上限+800、钝击增幅+12%、真气附伤+20、躯干最大健康+200。 -降龙掌法1层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_XiangLongShiBaZhang_01.GE_Power_XiangLongShiBaZhang_01_C` |
| 5 | `Power_XiangLongShiBaZhang_05` | 最小攻击+16、最大攻击+24、左臂最大健康+150、右臂最大健康+150。 -降龙掌法5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_XiangLongShiBaZhang_02.GE_Power_XiangLongShiBaZhang_02_C` |
| 10 | `Power_XiangLongShiBaZhang_10` | 最低温度耐受-10、罡气上限+800、真气附伤+24；受到伤害时，在3秒内钝击抗性+5、挥砍抗性+5，最多可叠加10层。 -降龙掌法10层；授予技能 Power_XiangLongShiBaZhang_04 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_XiangLongShiBaZhang_04.GE_Power_XiangLongShiBaZhang_04_C` |
| 20 | `Power_XiangLongShiBaZhang_20` | 最低温度耐受-15、最小攻击+16、最大攻击+24。 -降龙掌法20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_XiangLongShiBaZhang_06.GE_Power_XiangLongShiBaZhang_06_C` |
| 30 | `Power_XiangLongShiBaZhang_30` | 最高温度耐受+10、最小攻击+24、最大攻击+36、钝击增幅+8%；受到伤害时，在3秒内穿刺抗性+5，最多可叠加10层。 -降龙掌法30层；授予技能 Power_XiangLongShiBaZhang_08 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_XiangLongShiBaZhang_08.GE_Power_XiangLongShiBaZhang_08_C` |
| 40 | `Power_XiangLongShiBaZhang_40` | 最高温度耐受+15、罡气上限+800、躯干最大健康+600、左臂最大健康+150、右臂最大健康+150。 -降龙掌法40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_XiangLongShiBaZhang_10.GE_Power_XiangLongShiBaZhang_10_C` |
| 50 | `Power_XiangLongShiBaZhang_50` | 罡气上限+1500、钝击增幅+20%；受到伤害时，在3秒内真气抗性+5、真气附伤+5，最多可叠加10层。 -降龙掌法50层；授予技能 Power_XiangLongShiBaZhang_12 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_XiangLongShiBaZhang_12.GE_Power_XiangLongShiBaZhang_12_C` |

### S_YiJinJing_Internal（金色-内功-阳性-易筋经）

品质 橙 · 阳性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold_TypeDEF` · 阅读境界 3

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_YiJinJing_01` | 罡气上限+800；进入战斗后，每1秒，抗性+3%，最多叠加20层。 -易筋经1层；授予技能 Power_YiJinJing_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YiJinJing_01.GE_Power_YiJinJing_01_C` |
| 5 | `Power_YiJinJing_05` | 悟性+8、罡气上限+800、钝击伤害+50。 -易筋经5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YiJinJing_05.GE_Power_YiJinJing_05_C` |
| 10 | `Power_YiJinJing_10` | 罡气上限+800、拳掌武学经验加成+50%；受到伤害时触发暗劲，真气附伤+36，持续3秒。 -易筋经10层；授予技能 Power_YiJinJing_10 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YiJinJing_10.GE_Power_YiJinJing_10_C` |
| 20 | `Power_YiJinJing_20` | 资质+20、阳性武学经验加成+30%、罡气上限+800。 -易筋经20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YiJinJing_20.GE_Power_YiJinJing_20_C` |
| 30 | `Power_YiJinJing_30` | 进入战斗后，每1秒，抗性+6%，最多叠加20层。 -易筋经30层；授予技能 Power_YiJinJing_30 | — |
| 40 | `Power_YiJinJing_40` | 最低温度耐受-15、最高温度耐受+15、罡气上限+1500、躯干最大健康+800。 -易筋经40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YiJinJing_40.GE_Power_YiJinJing_40_C` |
| 50 | `Power_YiJinJing_50` | 防御增幅+30%、钝击伤害+50。 -易筋经50层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YiJinJing_50.GE_Power_YiJinJing_50_C` |

### S_YuNvXinJing_Internal（金色-内功-阴性-玉女心经）

品质 橙 · 阴性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold` · 阅读境界 3

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_YuNvXinJing_01` | 罡气上限+500；每次攻击附加100真气伤害。 -玉女心经1层；授予技能 Power_YuNvXinJing_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YuNvXinJing_01.GE_Power_YuNvXinJing_01_C` |
| 5 | `Power_YuNvXinJing_05` | 资质+50、罡气上限+500、挥砍伤害+50。 -玉女心经5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YuNvXinJing_05.GE_Power_YuNvXinJing_05_C` |
| 10 | `Power_YuNvXinJing_10` | 资质+30、阴性武学经验加成+30%、罡气上限+500。 -玉女心经10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YuNvXinJing_10.GE_Power_YuNvXinJing_10_C` |
| 20 | `Power_YuNvXinJing_20` | 攻击时有30%概率在为敌人注入寒气，在20秒内，降低40%移动速度。 -玉女心经20层；授予技能 Power_YuNvXinJing_20 | — |
| 30 | `Power_YuNvXinJing_30` | 罡气上限+500、刀剑武学经验加成+50%。 -玉女心经30层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YuNvXinJing_30.GE_Power_YuNvXinJing_30_C` |
| 40 | `Power_YuNvXinJing_40` | 罡气上限+500、躯干最大健康+800。 -玉女心经40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_YuNvXinJing_40.GE_Power_YuNvXinJing_40_C` |
| 50 | `Power_YuNvXinJing_50` | 攻击时有25%概率在对敌人头部造成15真气伤害，冷却15秒。 -玉女心经50层；授予技能 Power_YuNvXinJing_50 | — |

### S_ZiXiaGong_Internal（金色-内功-阳性-紫霞功）

品质 橙 · 阳性 · 等级表 `InternalOrangeMaxLv50` · 等级 GE `GE_BookBase_Gold_TypeDEF` · 阅读境界 2

| 层 | 词条 ID | 效果（官方描述） | 词条 GE 路径 |
|---|---|---|---|
| 1 | `Power_ZiXiaGong_01` | 罡气上限+800；每次受到伤害时吸收并反弹15%的伤害。 -紫霞功1层；授予技能 Power_ZiXiaGong_01 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiXiaGong_01.GE_Power_ZiXiaGong_01_C` |
| 5 | `Power_ZiXiaGong_05` | 资质+50、罡气上限+800、挥砍伤害+50。 -紫霞功5层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiXiaGong_05.GE_Power_ZiXiaGong_05_C` |
| 10 | `Power_ZiXiaGong_10` | 罡气上限+800、刀剑武学经验加成+50%、闪避+50。 -紫霞功10层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiXiaGong_10.GE_Power_ZiXiaGong_10_C` |
| 20 | `Power_ZiXiaGong_20` | 资质+30、阳性武学经验加成+30%、罡气上限+800。 -紫霞功20层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiXiaGong_20.GE_Power_ZiXiaGong_20_C` |
| 30 | `Power_ZiXiaGong_30` | 攻击额外造成5%罡气上限的伤害，冷却5秒。 -紫霞功30层；授予技能 Power_ZiXiaGong_30 | — |
| 40 | `Power_ZiXiaGong_40` | 罡气上限+800、躯干最大健康+800。 -紫霞功40层 | `/Game/Blueprints/AbilitySystem/GameplayEffect/Book/GE_Power_ZiXiaGong_40.GE_Power_ZiXiaGong_40_C` |
| 50 | `Power_ZiXiaGong_50` | 受到攻击时有50%概率触发[紫霞护体]（紫霞护体：每秒恢复5%罡气，紫霞护体持续20秒，冷却100秒）。 -紫霞功50层；授予技能 Power_ZiXiaGong_50 | — |

-- ============================================
-- Mod entry
-- ============================================

local Mod = {}

-- ============================================
-- 动物 / 召唤物 属性倍率配置(直接改下面的数字)
-- --------------------------------------------
--   1.0 = 不变; 实际值 = 配置表原始值 * 倍率(例: MaxAttack = 2.0 即攻击翻倍)
--   Common  : 同时作用于 动物 与 召唤物
--   Animal  : 仅动物   (AnimalConfig  / DT_AnimalData)
--   Summons : 仅召唤物 (SummonsConfig / DT_SummonsData)
--   同名属性 Animal/Summons 覆盖 Common; 属性名大小写不敏感; 表里没有的属性名会被忽略
--   (本沙箱禁用了 io/loadfile, 无法读外部文件, 故倍率内联在此处)
-- ============================================
local ATTRIBUTE_SCALE = {

    -- 两者通用(可留空), 例如: MaxAttack = 1.0,
    Common = {
    },

    -- ===== 动物 AnimalConfig =====
    Animal = {
        MaxNutritionValue = 1.0,
        MaxTiredValue = 1.0,
        MaxHappyValue = 1.0,
        MoveSpeed = 1.0,
        FreeWeight = 1.0,
        NutritionValue = 1.0,
        TiredValue = 1.0,
        HappyValue = 1.0,
        IntelligenceLevel = 1.0,
        SocialContactLevel = 1.0,
        CureLevel = 1.0,
        MoodValue = 1.0,
        ArtLevel = 1.0,
        FarmingLevel = 1.0,
        ConstructionLevel = 1.0,
        MiningLevel = 1.0,
        CookingLevel = 1.0,
        AnimalLevel = 1.0,
        MakeLevel = 1.0,
        MinPre = 1.0,
        MaxPre = 1.0,
        Comprehension = 1.0,
        Aptitude = 1.0,
        BaseHealingRate = 1.0,
        DanTianExperienceBonus = 1.0,
        YinExperienceBonus = 1.0,
        NeutralExperienceBonus = 1.0,
        PositiveExperienceBonus = 1.0,
        LightSkillExperienceBonus = 1.0,
        HardSkillExperienceBonus = 1.0,
        InternalStrengthExperienceBonus = 1.0,
        BladeStabsExperienceBonus = 1.0,
        SpearAndHalberdExperienceBonus = 1.0,
        SwordsExperienceBonus = 1.0,
        AxeClubsExperienceBonus = 1.0,
        FistsAndPalmsExperienceBonus = 1.0,
        HammersAndMacesExperienceBonus = 1.0,
        HiddenWeaponsExperienceBonus = 1.0,
        LongRangeExperienceBonus = 1.0,
        MaxRotValue = 1.0,
        RotValue = 1.0,
        Healing = 1.0,
        RunSpeed = 1.0,
        MaxInspiration = 1.0,
        Inspiration = 1.0,
        NutritionValueReduceSpeed = 1.0,
        NutritionValueReduceSpeedPercent = 1.0,
        TiredValueReduceSpeed = 1.0,
        TiredValueReduceSpeedPercent = 1.0,
        TiredValueIncreaseSpeed = 1.0,
        TiredValueincreaseSpeedPercent = 1.0,
        NutritionValueincreaseSpeed = 1.0,
        NutritionValueincreaseSpeedPercent1 = 1.0,
        HappyValueReduceSpeed = 1.0,
        HappyValueReduceSpeedPercent = 1.0,
        HappyValueincreaseSpeed = 1.0,
        HappyValueincreaseSpeedPercent = 1.0,
        KnockDownValue = 1.0,
        MaxKnockDownValue = 1.0,
        MinAttack = 1.0,
        MaxAttack = 1.0,
        CurrentShield = 1.0,
        MaxShield = 1.0,
        ShieldRecoverSpeed = 1.0,
        ShieldRecoverSpeedPercentage = 1.0,
        Defence = 1.0,
        PierceResistance = 1.0,
        SlashResistance = 1.0,
        BluntResistance = 1.0,
        Crit = 1.0,
        PierceCritical = 1.0,
        SlashCritical = 1.0,
        BluntCritical = 1.0,
        CharacterAttackAccuracy = 1.0,
        Dodge = 1.0,
        MaxHead = 1.0,
        MaxLeftEye = 1.0,
        MaxRightEye = 1.0,
        MaxLeftEar = 1.0,
        MaxRightEar = 1.0,
        MaxMouth = 1.0,
        MaxBody = 100.0,
        MaxViscera = 1.0,
        MaxDantian = 1.0,
        MaxXiaYin = 1.0,
        MaxLeftArm = 1.0,
        MaxRightArm = 1.0,
        MaxLeftLeg = 1.0,
        MaxRightLeg = 1.0,
        Head = 1.0,
        LeftEye = 1.0,
        RightEye = 1.0,
        LeftEar = 1.0,
        RightEar = 1.0,
        Mouth = 1.0,
        Body = 100.0,
        Viscera = 1.0,
        Dantian = 1.0,
        XiaYin = 1.0,
        LeftArm = 1.0,
        RightArm = 1.0,
        LeftLeg = 1.0,
        RightLeg = 1.0,
        CurMaxHead = 1.0,
        CurMaxLeftEye = 1.0,
        CurMaxRightEye = 1.0,
        CurMaxLeftEar = 1.0,
        CurMaxRightEar = 1.0,
        CurMaxMouth = 1.0,
        CurBody = 100.0,
        CurMaxViscera = 1.0,
        CurMaxDantian = 1.0,
        CurMaxXiaYin = 1.0,
        CurMaxLeftArm = 1.0,
        CurMaxRightArm = 1.0,
        CurMaxLeftLeg = 1.0,
        CurMaxRightLeg = 1.0,
        RobotEnergyMaxValue = 1.0,
        RobotEnergyCurValue = 1.0,
        RobotEnergyIntervalStanbyRecoveryValue = 1.0,
        RobotEnergyIntervalInBuildingRecoveryValue = 1.0,
        RobotEnergyIntervalExpendValue = 1.0,
        RobotEnergyIntervalStanbyRecoverySpeed = 1.0,
        RobotEnergyIntervalInBuildingRecoverySpeed = 1.0,
        RobotEnergyIntervalExpendSpeed = 1.0,
    },

    -- ===== 召唤物 SummonsConfig =====
    Summons = {
        MaxNutritionValue = 1.0,
        MaxTiredValue = 1.0,
        MaxHappyValue = 1.0,
        MoveSpeed = 1.0,
        FreeWeight = 1.0,
        NutritionValue = 1.0,
        TiredValue = 1.0,
        HappyValue = 1.0,
        IntelligenceLevel = 1.0,
        SocialContactLevel = 1.0,
        CureLevel = 1.0,
        MoodValue = 1.0,
        ArtLevel = 1.0,
        FarmingLevel = 1.0,
        ConstructionLevel = 1.0,
        MiningLevel = 1.0,
        CookingLevel = 1.0,
        AnimalLevel = 1.0,
        MakeLevel = 1.0,
        MinPre = 1.0,
        MaxPre = 1.0,
        Comprehension = 1.0,
        Aptitude = 1.0,
        BaseHealingRate = 1.0,
        DanTianExperienceBonus = 1.0,
        YinExperienceBonus = 1.0,
        NeutralExperienceBonus = 1.0,
        PositiveExperienceBonus = 1.0,
        LightSkillExperienceBonus = 1.0,
        HardSkillExperienceBonus = 1.0,
        InternalStrengthExperienceBonus = 1.0,
        BladeStabsExperienceBonus = 1.0,
        SpearAndHalberdExperienceBonus = 1.0,
        SwordsExperienceBonus = 1.0,
        AxeClubsExperienceBonus = 1.0,
        FistsAndPalmsExperienceBonus = 1.0,
        HammersAndMacesExperienceBonus = 1.0,
        HiddenWeaponsExperienceBonus = 1.0,
        LongRangeExperienceBonus = 1.0,
        MaxRotValue = 1.0,
        RotValue = 1.0,
        Healing = 1.0,
        RunSpeed = 1.0,
        MaxInspiration = 1.0,
        Inspiration = 1.0,
        NutritionValueReduceSpeed = 1.0,
        NutritionValueReduceSpeedPercent = 1.0,
        TiredValueReduceSpeed = 1.0,
        TiredValueReduceSpeedPercent = 1.0,
        TiredValueIncreaseSpeed = 1.0,
        TiredValueincreaseSpeedPercent = 1.0,
        NutritionValueincreaseSpeed = 1.0,
        NutritionValueincreaseSpeedPercent1 = 1.0,
        HappyValueReduceSpeed = 1.0,
        HappyValueReduceSpeedPercent = 1.0,
        HappyValueincreaseSpeed = 1.0,
        HappyValueincreaseSpeedPercent = 1.0,
        KnockDownValue = 1.0,
        MaxKnockDownValue = 1.0,
        MinAttack = 1.0,
        MaxAttack = 1.0,
        CurrentShield = 1.0,
        MaxShield = 1.0,
        ShieldRecoverSpeed = 1.0,
        ShieldRecoverSpeedPercentage = 1.0,
        Defence = 1.0,
        PierceResistance = 1.0,
        SlashResistance = 1.0,
        BluntResistance = 1.0,
        Crit = 1.0,
        PierceCritical = 1.0,
        SlashCritical = 1.0,
        BluntCritical = 1.0,
        CharacterAttackAccuracy = 1.0,
        Dodge = 1.0,
        MaxHead = 1.0,
        MaxLeftEye = 1.0,
        MaxRightEye = 1.0,
        MaxLeftEar = 1.0,
        MaxRightEar = 1.0,
        MaxMouth = 1.0,
        MaxBody = 100.0,
        MaxViscera = 1.0,
        MaxDantian = 1.0,
        MaxXiaYin = 1.0,
        MaxLeftArm = 1.0,
        MaxRightArm = 1.0,
        MaxLeftLeg = 1.0,
        MaxRightLeg = 1.0,
        Head = 1.0,
        LeftEye = 1.0,
        RightEye = 1.0,
        LeftEar = 1.0,
        RightEar = 1.0,
        Mouth = 1.0,
        Body = 100.0,
        Viscera = 1.0,
        Dantian = 1.0,
        XiaYin = 1.0,
        LeftArm = 1.0,
        RightArm = 1.0,
        LeftLeg = 1.0,
        RightLeg = 1.0,
        CurMaxHead = 1.0,
        CurMaxLeftEye = 1.0,
        CurMaxRightEye = 1.0,
        CurMaxLeftEar = 1.0,
        CurMaxRightEar = 1.0,
        CurMaxMouth = 1.0,
        CurBody = 100.0,
        CurMaxViscera = 1.0,
        CurMaxDantian = 1.0,
        CurMaxXiaYin = 1.0,
        CurMaxLeftArm = 1.0,
        CurMaxRightArm = 1.0,
        CurMaxLeftLeg = 1.0,
        CurMaxRightLeg = 1.0,
        RobotEnergyMaxValue = 1.0,
        RobotEnergyCurValue = 1.0,
        RobotEnergyIntervalStanbyRecoveryValue = 1.0,
        RobotEnergyIntervalInBuildingRecoveryValue = 1.0,
        RobotEnergyIntervalExpendValue = 1.0,
        RobotEnergyIntervalStanbyRecoverySpeed = 1.0,
        RobotEnergyIntervalInBuildingRecoverySpeed = 1.0,
        RobotEnergyIntervalExpendSpeed = 1.0,
    },
}

-- ============================================
-- Helpers
-- ============================================

function Mod:Log(Message, LogLevel)
    LogLevel = LogLevel or "Log"
    UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId, Message, LogLevel)
end

function Mod:Debug(Message)
    self:Log(Message, "Debug")
end

function Mod:Warn(Message)
    self:Log(Message, "Warning")
end

function Mod:Error(Message)
    self:Log(Message, "Error")
end

-- World via UObject context chain (ModInfo outer -> ModSubsystem -> GameInstance).
function Mod:GetWorldFromSubsystem()
    local ctx = self.ModInfo
    if not ctx then
        return nil
    end
    local GI = UE.UGameplayStatics.GetGameInstance(ctx)
    if not GI then
        return nil
    end
    return GI:GetWorld()
end

-- ============================================
-- 动物 / 召唤物 属性倍率
-- ============================================

-- 把 { 属性名 = 倍率 } 规整为 { [小写属性名] = 倍率 }(过滤非法项)
local function ToLowerScaleMap(t)
    local m = {}
    if type(t) == "table" then
        for k, v in pairs(t) do
            if type(k) == "string" and type(v) == "number" then
                m[string.lower(k)] = v
            end
        end
    end
    return m
end

-- 由内联的 ATTRIBUTE_SCALE 生成 { animal = {...}, summons = {...} }(各段以 Common 为基础)
function Mod:GetAttributeScaleConfig()
    local common  = ToLowerScaleMap(ATTRIBUTE_SCALE.Common)
    local animal  = ToLowerScaleMap(ATTRIBUTE_SCALE.Animal)
    local summons = ToLowerScaleMap(ATTRIBUTE_SCALE.Summons)

    local function MergeWithCommon(section)
        local result = {}
        for k, v in pairs(common) do result[k] = v end
        for k, v in pairs(section) do result[k] = v end
        return result
    end

    return { animal = MergeWithCommon(animal), summons = MergeWithCommon(summons) }
end

-- 对单张配置表按倍率缩放属性(实际值 = 原始值 * 倍率)
-- RowMaker: 返回对应行结构体实例的函数; ScaleMap: { [小写属性名] = 倍率 }
function Mod:ScaleConfigAttributes(DataTable, RowMaker, ScaleMap, Label)
    if not DataTable then
        self:Warn(string.format("ScaleConfigAttributes(%s): DataTable 为空, 跳过", Label))
        return false
    end
    if not ScaleMap or next(ScaleMap) == nil then
        return false
    end

    local RowNames = UE.UDataTableFunctionLibrary.GetDataTableRowNames(DataTable)
    local rowCount, changeCount = 0, 0
    for i = 1, RowNames:Num() do
        local RowName = RowNames[i]
        local Row = RowMaker()
        if UE.UDataTableFunctionLibrary.GetDataTableRowFromName(DataTable, RowName, Row) then
            local Attrs = Row.Attributes
            local rowChanged = false
            if Attrs then
                -- 先快照所有 key, 再逐个改值(只改已有 key 的 value, 不增删 key)
                local Keys = Attrs:Keys()
                for k = 1, Keys:Num() do
                    local AttrKey = Keys[k]
                    local AttrKeyStr = (type(AttrKey) == "string") and AttrKey
                        or UE.UKismetStringLibrary.Conv_NameToString(AttrKey)
                    local mult = ScaleMap[string.lower(AttrKeyStr)]
                    if mult and mult ~= 1.0 then
                        local cur = Attrs:Find(AttrKey)
                        if cur ~= nil then
                            Attrs:Add(AttrKey, cur * mult)
                            changeCount = changeCount + 1
                            rowChanged = true
                        end
                    end
                end
            end
            if rowChanged then
                local RowNameStr = UE.UKismetStringLibrary.Conv_NameToString(RowName)
                if not UE.UModLuaLibrary.ReplaceDataTableRow(DataTable, RowNameStr, Row) then
                    self:Warn(string.format("ScaleConfigAttributes(%s): 写回行 %s 失败", Label, RowNameStr))
                else
                    rowCount = rowCount + 1
                end
            end
        end
    end
    self:Log(string.format("ScaleConfigAttributes(%s): 已修改 %d 行, 共 %d 个属性", Label, rowCount, changeCount))
    return true
end

-- 把倍率分别应用到 动物(AnimalConfig) / 召唤物(SummonsConfig) 配置表
function Mod:ApplyAttributeScale()
    if self._AttributeScaleApplied then
        self:Log("ApplyAttributeScale: 本次已应用过, 跳过(避免倍率叠乘)")
        return false
    end

    local World = self:GetWorldFromSubsystem()
    if not World then
        self:Warn("ApplyAttributeScale: 无 World(尚未进入对局?), 跳过")
        return false
    end
    local GameMode = UE.UGameplayStatics.GetGameMode(World)
    if not GameMode then
        self:Warn("ApplyAttributeScale: 无 GameMode, 跳过")
        return false
    end
    local ConfigComp = GameMode.GameConfigComponent
    if not ConfigComp then
        self:Warn("ApplyAttributeScale: GameMode 无 GameConfigComponent, 跳过")
        return false
    end

    local Config = self:GetAttributeScaleConfig()

    -- 动物
    local AnimalTable = ConfigComp:GetGameConfigByType(UE.EGameConfigType.AnimalConfig)
    self:ScaleConfigAttributes(AnimalTable, function() return UE.FEastRimWorldAnimalData() end, Config.animal, "Animal")

    -- 召唤物
    local SummonsTable = ConfigComp:GetGameConfigByType(UE.EGameConfigType.SummonsConfig)
    self:ScaleConfigAttributes(SummonsTable, function() return UE.FEastRimWorldSummonsData() end, Config.summons, "Summons")

    self._AttributeScaleApplied = true
    return true
end

-- ============================================
-- Lifecycle
-- ============================================

function Mod:OnModLoaded()
    self:Log("Mod loaded!")
    -- 用 pcall 包住, 防止异常静默中断且不进 ModLog
    local ok, err = pcall(function() self:ApplyAttributeScale() end)
    if not ok then
        self:Error(string.format("ApplyAttributeScale 抛出异常: %s", tostring(err)))
    end
    self:CommandShowInfo()
end

function Mod:OnModUnloaded()
    self:Log("Mod unloaded!")
end

function Mod:CommandShowInfo()
    self:Log("=== Mod Information ===")
    self:Log(string.format("Mod ID: %s", self.ModInfo.Metadata.ModId))
    self:Log(string.format("Mod Name: %s", self.ModInfo.Metadata.ModName))
end

return Mod

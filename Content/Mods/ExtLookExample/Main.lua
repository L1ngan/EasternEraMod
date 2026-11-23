-- ============================================================
-- ExtLookExample：扩展外观接口示例（妆容、花钿 / 面靥、眉睫、虹膜）
-- 控制台：
--   ExtLookExample apply  给当前场景里在场的本门角色上妆、贴花钿、换睫毛和虹膜（头不支持的项自动跳过）
--   ExtLookExample reset  删掉这些角色的全部 Mod 扩展外观（不论是哪个 Mod 写的）
-- 说明见 BlueprintAPI_ModAuthors/Examples/ExtLookExample/README.md 和《Mod 开发指南》4.10"扩展外观"
-- ============================================================
local Mod = {}

local LIP_COLOR = UE.FLinearColor(0.55, 0.05, 0.08, 1)   -- 线性色
local LIP_OPACITY = 0.8
local IRIS_TINT = UE.FLinearColor(0.75, 0.55, 0.35, 1)

-- 数组里有没有这个名字（FName 数组按字符串比）
local function Has(arr, name)
    for i = 1, arr:Num() do
        if tostring(arr[i]) == tostring(name) then return true end
    end
    return false
end

function Mod:Log(msg)
    UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId, msg, "Log")
end

-- 本门的人族角色（掌门和弟子）
function Mod:SectHumans()
    local result = {}
    local GI = UE.UGameplayStatics.GetGameInstance(self.ModInfo)
    local world = GI and GI:GetWorld() or nil
    if not world then return result end
    local actors = UE.TArray(UE.AActor)
    local ret = UE.UGameplayStatics.GetAllActorsOfClass(world, UE.AEastRimWorldCharacter_Human, actors)
    if ret then actors = ret end
    for i = 1, actors:Num() do
        local ch = actors[i]
        if ch:IsPlayerTeam() then result[#result + 1] = ch end
    end
    return result
end

-- 第一款官方花钿（Mod 加的图案 bFromMod 为 true，这里只用官方的）
function Mod:FirstOfficialPattern(WorldContext, Slot)
    local pats = UE.UModLuaLibrary.GetDecalPatterns(WorldContext, Slot)
    for i = 1, pats:Num() do
        if not pats[i].bFromMod then return pats[i] end
    end
    return nil
end

function Mod:Apply(ch)
    local L = UE.UModLuaLibrary
    -- 妆容：只对能上妆的头（捏人头）设
    if Has(L.GetCharacterMakeupLayers(ch), "Lips") then
        L.SetCharacterMakeupLayer(ch, "Lips", LIP_COLOR, LIP_OPACITY)
    end
    -- 花钿：用图案默认锚点和默认颜色；浓度、角度不会自动取默认值，要自己给
    local p = self:FirstOfficialPattern(ch, "Huadian")
    if p and Has(L.GetCharacterFaceAnchors(ch), p.DefaultAnchorId) then
        local s = UE.FModDecalState()
        s.PatternId = p.PatternId
        s.bUseDefaultColor = true
        s.Opacity = p.DefaultOpacity
        s.AngleDegrees = p.DefaultRotationDegrees
        L.SetCharacterDecal(ch, "Huadian", s)
    end
    -- 睫毛：只能用款式默认颜色（ColorMode 0）
    local lashes = L.GetBrowLashStyles(ch, "Lash")
    if lashes:Num() > 0 then
        local s = UE.FModBrowLashState()
        s.StyleId = lashes[1]
        s.ColorMode = 0
        L.SetCharacterBrowLash(ch, "Lash", s)
    end
    -- 虹膜：两眼同一款，加一点琥珀色增益
    local irises = L.GetIrisPresets(ch)
    if irises:Num() > 0 then
        local s = UE.FModEyesState()
        s.bIndependent = false
        s.LeftPresetId = irises[1]
        s.bLeftTint = true
        s.LeftTint = IRIS_TINT
        L.SetCharacterEyes(ch, s)
    end
end

function Mod:Run(args)
    local action = args[1]
    if action ~= "apply" and action ~= "reset" then
        self:Log("usage: ExtLookExample apply | reset")
        return
    end
    local count = 0
    for _, ch in ipairs(self:SectHumans()) do
        if action == "apply" then
            self:Apply(ch)
        else
            UE.UModLuaLibrary.ResetCharacterExtAppearance(ch)
        end
        count = count + 1
    end
    self:Log(string.format("ExtLookExample %s: %d characters", tostring(action), count))
end

function Mod:OnModLoaded()
    local mod = self
    UE.UModLuaLibrary.RegisterModConsoleCommand("ExtLookExample", "ExtLookExample apply | reset", function(args)
        local ok, err = pcall(function() mod:Run(args) end)
        if not ok then mod:Log("ExtLookExample error: " .. tostring(err)) end
    end)
end

return Mod

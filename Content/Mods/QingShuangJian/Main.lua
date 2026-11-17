-- 青霜剑 示例 Mod
-- 正常玩法不需要 Lua：装备、配方都由 Config/*.json 配置。
-- 这里只放两条测试命令和一条打造日志，方便验证；发布前可以整段删掉（同时删掉 ModInfo.json 的 MainLuaFile）。
local Mod = {}

local FORMULA_ID = "QSJ_Formula"

function Mod:Log(Message, Level)
    UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId, Message, Level or "Log")
end

-- 找到第一个本门弟子
function Mod:FindDisciple()
    local HumanClass = UE.UClass.Load("/Script/EastRimWorld.EastRimWorldCharacter_Human")
    local Actors = UE.UGameplayStatics.GetAllActorsOfClass(self.ModInfo, HumanClass)
    for i = 1, Actors:Num() do
        local Character = Actors[i]
        if Character:IsPlayerTeam() then
            return Character
        end
    end
    return nil
end

function Mod:OnModLoaded()
    -- 用法：qsj.give Orange
    -- 给第一个本门弟子直接装上对应品质的青霜剑（固定装备，只有主属性，没有随机副属性）。
    -- 弟子原来手上的武器会被换下。请在备份存档上用。
    UE.UModLuaLibrary.RegisterModConsoleCommand("qsj.give", "QingShuangJian: equip a disciple", function(Args)
        local Tier = Args[1] or "Green"
        local Character = self:FindDisciple()
        if not Character then
            self:Log("no disciple found", "Warning")
            return
        end
        local Controller = Character:GetController()
        local Ok = Controller and Controller:GiveEquipmentByWeaponID("QSJ_Sword_" .. Tier)
        self:Log(string.format("give QSJ_Sword_%s to %s: %s", Tier, Character:GetName(), tostring(Ok)))
    end)

    -- 用法：qsj.post Purple 2
    -- 往驿站发 N 把指定品质档的青霜剑，按品质区间表随机抽副属性（和打造出来的一样）。
    UE.UModLuaLibrary.RegisterModConsoleCommand("qsj.post", "QingShuangJian: send random swords to the post station", function(Args)
        local Tier = Args[1] or "Green"
        local Count = tonumber(Args[2]) or 1
        local RangeId = "QSJ_Q_" .. Tier
        local Item = UE.FItemSimpleData()
        Item.Id = RangeId
        Item.Type = UE.EGroundInventoryType.Equipment
        Item.Num = Count                -- 结构默认值是 0，必须显式写
        Item.bRandomAttribute = true    -- true：Id 填品质区间行名；false：Id 填武器表行名
        local Items = UE.TMap(UE.FName, UE.FItemSimpleData)
        Items:Add(RangeId, Item)
        local Director = UE.AWorldDirector.GetWorldDirector()
        if not Director then
            self:Log("world director not ready", "Warning")
            return
        end
        Director:AddItemToPostStation(Items, true)
        self:Log(string.format("post %d x %s", Count, RangeId))
    end)

    -- 铁匠铺每打造出一把青霜剑，记一条日志：物品 ID 和品质
    UE.UModEventBus.RegisterModEvent("OnItemCrafted", function(EventName, Payload, Params)
        if Params.FormulaId == FORMULA_ID then
            self:Log(string.format("crafted %s quality=%s", tostring(Params.ItemId), tostring(Params.Quality)))
        end
    end)
end

return Mod

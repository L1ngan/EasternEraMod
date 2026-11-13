local Mod = {}

local BOOK_ID = "QingXinJue_Internal"

function Mod:Log(Message, Level)
    UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId, Message, Level or "Log")
end

function Mod:OnModLoaded()
    -- 用法：qxj.grant 10   给找到的第一个本门弟子装上清心诀并设为 10 级
    UE.UModLuaLibrary.RegisterModConsoleCommand("qxj.grant", "QingXinJue test", function(Args)
        local Level = tonumber(Args[1]) or 1
        local HumanClass = UE.UClass.Load("/Script/EastRimWorld.EastRimWorldCharacter_Human")
        local Actors = UE.UGameplayStatics.GetAllActorsOfClass(self.ModInfo, HumanClass)
        for i = 1, Actors:Num() do
            local Character = Actors[i]
            if Character:IsPlayerTeam() and Character.GrowUpComponent then
                local Ok = Character.GrowUpComponent:GrantMartialArtsAtLevel(BOOK_ID, Level)
                self:Log(string.format("grant %s Lv%d: %s", BOOK_ID, Level, tostring(Ok)))
                return
            end
        end
        self:Log("no disciple found", "Warning")
    end)
end

return Mod

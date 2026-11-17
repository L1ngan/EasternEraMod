-- 青云宗门服 示例 Mod
-- 宗门时装界面的可选清单（GamePlayConfiguration 的 ForceApparels）还没有 JSON 入口，
-- 所以要在每次进入游戏世界时用 Lua 把服饰 ID 加进清单。清单是当前世界的运行时副本，
-- 离开世界就丢弃，下次进入世界 Main.lua 会再执行一次，不会重复也不用清理。
local Mod = {}

-- 要加进宗门时装界面的服饰：装备表（EquipmentConfig）行名 + 槽位
-- 槽位只能是 Armor（上衣）、Pants（裤）、Shoes（鞋），宗门时装界面只有这三页
local APPARELS = {
    { Id = "QYZ_Armor", Slot = "Armor" },
    { Id = "QYZ_Pants", Slot = "Pants" },
    { Id = "QYZ_Shoes", Slot = "Shoes" },
}

function Mod:Log(Message, Level)
    UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId, Message, Level or "Log")
end

function Mod:AddToSectApparelList()
    local GameMode = UE.UGameplayStatics.GetGameMode(self.ModInfo)
    local Config = GameMode and GameMode:GetGamePlayConfigurationAsset()
    if not Config then
        self:Log("GamePlayConfiguration not ready", "Warning")
        return false
    end
    local Lists = Config.ForceApparels
    for _, A in ipairs(APPARELS) do
        local Slot = UE.EArmorType[A.Slot]
        local Entry = Lists:Find(Slot) or UE.FNameIDArray()
        Entry.IDs:AddUnique(A.Id)
        Lists:Add(Slot, Entry)
    end
    Config.ForceApparels = Lists
    self:Log("added to sect apparel list")
    return true
end

function Mod:OnModLoaded()
    self:AddToSectApparelList()

    -- 用法：qyz.status
    -- 打印外门（1）和内门（2）各自能选到哪几件本 Mod 的服饰，以及是否已解锁。只读，不改存档。
    UE.UModLuaLibrary.RegisterModConsoleCommand("qyz.status", "QingYunZongFu: print list/unlock state", function(Args)
        local Director = UE.AWorldDirector.GetWorldDirector()
        local Force = Director and Director:GetPlayerWorldForce()
        if not Force then
            self:Log("player force not ready", "Warning")
            return
        end
        for _, SubClass in ipairs({ 1, 2 }) do
            local Lists = Force:GetForceSubClassApparelConfig(SubClass)
            local Found = {}
            for _, A in ipairs(APPARELS) do
                local Entry = Lists:Find(UE.EArmorType[A.Slot])
                if Entry and Entry.IDs:Contains(A.Id) then
                    table.insert(Found, A.Id)
                end
            end
            self:Log(string.format("subclass %d lists: %s", SubClass, table.concat(Found, ",")))
        end
        local Unlocked = {}
        for _, A in ipairs(APPARELS) do
            if Force.UnlockForceApparel:Contains(A.Id) then
                table.insert(Unlocked, A.Id)
            end
        end
        self:Log("unlocked: " .. table.concat(Unlocked, ","))
    end)
end

return Mod

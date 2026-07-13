-- ParagonSunWukong 文档示例。
-- 实际资源位于 Content/Mods/ParagonSunWukong。
-- 事件源：H:/Project/Source/EastRimWorld/Mod/ModEventBus.h。
-- 所有事件回调签名均为 fn(EventName, Payload, Params)：
--   EventName: 事件名字符串
--   Payload: 相关 UObject，可能为 nil
--   Params: 字符串键值表，数值需要 tonumber 后计算

local Mod = {}
local ListenerIds = {}

local function SafeString(Value)
    if Value == nil then
        return "nil"
    end
    return tostring(Value)
end

function Mod:Log(Message, Level)
    local ModId = "WK_100"
    if self.ModInfo ~= nil and self.ModInfo.Metadata ~= nil then
        ModId = SafeString(self.ModInfo.Metadata.ModId)
    end
    UE.UModLuaLibrary.ModLog(ModId, Message, Level or "Log")
end

function Mod:RegisterEvent(EventName, Callback)
    local ListenerId = UE.UModEventBus.RegisterModEvent(EventName, Callback)
    if ListenerId ~= nil and ListenerId ~= 0 then
        ListenerIds[#ListenerIds + 1] = ListenerId
    else
        self:Log("事件注册失败: " .. EventName, "Error")
    end
end

function Mod:RegisterAllGameEvents()
    -- 1. 新游戏世界初始化完成。Payload: ASaveGameDataActor；Params: 无。
    self:RegisterEvent("OnNewGameStarted", function(EventName, Payload, Params)
        self:Log(EventName .. " SaveGameDataActor=" .. SafeString(Payload))
    end)

    -- 2. 读档世界初始化完成。Payload: ASaveGameDataActor；Params: 无。
    self:RegisterEvent("OnLoadGameComplete", function(EventName, Payload, Params)
        self:Log(EventName .. " SaveGameDataActor=" .. SafeString(Payload))
    end)

    -- 3. 游戏日变更。Payload: AWorldDirector；Params: GameDay, GameYear。
    self:RegisterEvent("OnDayChanged", function(EventName, Payload, Params)
        self:Log(EventName .. " Day=" .. SafeString(Params.GameDay)
            .. " Year=" .. SafeString(Params.GameYear))
    end)

    -- 4. 季节变更。Payload: AWorldDirector；Params: Season(int), GameYear。
    self:RegisterEvent("OnSeasonChanged", function(EventName, Payload, Params)
        self:Log(EventName .. " Season=" .. SafeString(Params.Season)
            .. " Year=" .. SafeString(Params.GameYear))
    end)

    -- 5. 天气效果生效。Payload: AWorldDirector；Params: Weather(int)。
    self:RegisterEvent("OnWeatherChanged", function(EventName, Payload, Params)
        self:Log(EventName .. " Weather=" .. SafeString(Params.Weather))
    end)

    -- 6. 进入地点，子关卡加载成功。Payload: AWorldPlace；Params: PlaceID, LevelName。
    self:RegisterEvent("OnEnterPlace", function(EventName, Payload, Params)
        self:Log(EventName .. " PlaceID=" .. SafeString(Params.PlaceID)
            .. " LevelName=" .. SafeString(Params.LevelName))
    end)

    -- 7. 离开地点。Payload: AWorldPlace；Params: PlaceID, LevelName。
    self:RegisterEvent("OnExitPlace", function(EventName, Payload, Params)
        self:Log(EventName .. " PlaceID=" .. SafeString(Params.PlaceID)
            .. " LevelName=" .. SafeString(Params.LevelName))
    end)

    -- 8. 进入地点后所有初始化完成。Payload: AWorldPlace；Params: PlaceID。
    self:RegisterEvent("OnEnterPlaceComplete", function(EventName, Payload, Params)
        self:Log(EventName .. " PlaceID=" .. SafeString(Params.PlaceID))
    end)

    -- 9. 建筑建造完成。Payload: nil；Params: ConfigId, BuildGuid。
    self:RegisterEvent("OnBuildingComplete", function(EventName, Payload, Params)
        self:Log(EventName .. " ConfigId=" .. SafeString(Params.ConfigId)
            .. " BuildGuid=" .. SafeString(Params.BuildGuid))
    end)

    -- 10. 角色死亡。Payload: AEastRimWorldCharacter；Params: DeathOrgan。
    self:RegisterEvent("OnCharacterDeath", function(EventName, Payload, Params)
        self:Log(EventName .. " Character=" .. SafeString(Payload)
            .. " DeathOrgan=" .. SafeString(Params.DeathOrgan))
    end)

    -- 11. 角色突破境界成功。Payload: 角色 Actor；Params: CharacterGuid, RealmLevel。
    self:RegisterEvent("OnBreakThroughCompleted", function(EventName, Payload, Params)
        self:Log(EventName .. " CharacterGuid=" .. SafeString(Params.CharacterGuid)
            .. " RealmLevel=" .. SafeString(Params.RealmLevel))
    end)

    -- 12. 涌现事件生成并落地。Payload: UEmergenceDirectorSubsystem；Params: EventID, InstanceGuid。
    self:RegisterEvent("OnEmergentEventSpawned", function(EventName, Payload, Params)
        self:Log(EventName .. " EventID=" .. SafeString(Params.EventID)
            .. " InstanceGuid=" .. SafeString(Params.InstanceGuid))
    end)
end

function Mod:OnModLoaded()
    self:Log("齐天大圣 Mod 已加载，开始注册 12 个游戏事件。")
    self:RegisterAllGameEvents()

    UE.UModLuaLibrary.RegisterModConsoleCommand(
        "wukong.info",
        "输出齐天大圣 Mod 信息",
        function(Args)
            self:Log("角色=齐天大圣, 配置行=WuKong_GreatSage, 参数数量=" .. SafeString(#Args))
        end
    )
end

function Mod:OnModUnloaded()
    -- 引擎会按 ModId 自动清理；这里显式反注册，便于演示完整 API。
    for _, ListenerId in ipairs(ListenerIds) do
        UE.UModEventBus.UnregisterModEvent(ListenerId)
    end
    ListenerIds = {}
    UE.UModLuaLibrary.UnregisterModConsoleCommand("wukong.info")
    self:Log("齐天大圣 Mod 已卸载。")
end

return Mod

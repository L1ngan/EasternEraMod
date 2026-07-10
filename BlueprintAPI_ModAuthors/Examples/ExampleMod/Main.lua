-- ============================================================================
-- ExampleMod / 官方示例 Mod
-- 演示所有常用修改方式：事件订阅、定时器、控制台命令、日志、配置表覆盖。
-- Demonstrates all common modding patterns: event subscription, timers,
-- console commands, logging, and DataTable overrides.
--
-- 【沙箱须知 / Sandbox notes】
--   * 只有本文件（ModInfo.json 的 MainLuaFile）会被加载；io / os / require /
--     loadfile / dofile / debug 均不可用。
--   * Only this file is loaded. io / os / require / loadfile / dofile / debug
--     are unavailable inside the mod sandbox.
--   * 所有注册（事件/定时器/命令）都会在 Mod 卸载时被引擎自动清理，
--     无需手动反注册；OnModUnloaded 里也可以提前手动清理。
--   * Every registration below is automatically cleaned up when the mod
--     unloads; manual unregistration in OnModUnloaded is optional.
-- ============================================================================

local Mod = {
    ModId = "ExampleMod",
    ModName = "Example Mod",
    Version = "1.0.0",
}

-- 运行期句柄（便于 OnModUnloaded 手动清理演示）
-- Runtime handles (for the optional manual-cleanup demo in OnModUnloaded)
local DayTimerId = 0
local DayListenerId = 0
local PlaceListenerId = 0
local DeathListenerId = 0

-- ----------------------------------------------------------------------------
-- 工具：带 ModId 的日志。级别："Log" / "Warning" / "Error"
-- Helper: logging with ModId. Levels: "Log" / "Warning" / "Error"
-- ----------------------------------------------------------------------------
local function Log(msg)
    UE.UModLuaLibrary.ModLog("ExampleMod", msg, "Log")
end

function Mod:OnModLoaded()
    Log("ExampleMod loaded! 配置表覆盖已由 ModInfo.json 的 DataTableConfigs 自动应用。")
    -- 注：DataTableConfigs 里声明的 JSON 会在 Mod 加载时自动应用到运行时配置表，
    --     不需要在 Lua 里手动调用。如需手动重新应用，可用：
    -- Note: JSON files declared in DataTableConfigs are applied automatically
    --       during mod load. To re-apply manually:
    --   UE.UModLuaLibrary.LoadAndApplyModConfigFromJson(nil, "ExampleMod", false)

    -- ------------------------------------------------------------------------
    -- 1) 订阅游戏事件 / Subscribe to game events
    --    回调签名 fn(EventName, Payload, Params)：
    --    Payload 为相关 UObject（可能为 nil），Params 为字符串键值表。
    --    可用事件（Params 内容见《Mod开发指南》）：
    --      OnNewGameStarted / OnLoadGameComplete
    --      OnDayChanged / OnSeasonChanged / OnWeatherChanged
    --      OnEnterPlace / OnExitPlace / OnEnterPlaceComplete
    --      OnBuildingComplete / OnCharacterDeath
    --      OnBreakThroughCompleted / OnEmergentEventSpawned
    -- ------------------------------------------------------------------------

    -- 每个游戏日触发 / Fires once per in-game day
    DayListenerId = UE.UModEventBus.RegisterModEvent("OnDayChanged", function(EventName, Payload, Params)
        Log("新的一天 Day=" .. tostring(Params.GameDay) .. " Year=" .. tostring(Params.GameYear))
    end)

    -- 进入地点且所有初始化完成（含视频/关卡序列）后触发
    -- Fires after entering a place and ALL initialization is complete
    PlaceListenerId = UE.UModEventBus.RegisterModEvent("OnEnterPlaceComplete", function(EventName, Payload, Params)
        -- Payload 是 AWorldPlace 对象，可直接访问其蓝图可见成员
        -- Payload is the AWorldPlace actor; Blueprint-visible members are accessible
        Log("进入地点完成 PlaceID=" .. tostring(Params.PlaceID))
    end)

    -- 角色死亡（Payload 为角色 Actor）/ Character death (Payload is the character actor)
    DeathListenerId = UE.UModEventBus.RegisterModEvent("OnCharacterDeath", function(EventName, Payload, Params)
        Log("有角色死亡，致死部位: " .. tostring(Params.DeathOrgan))
    end)

    -- ------------------------------------------------------------------------
    -- 2) 定时器 / Timers
    --    RegisterModRepeatingTimer(WorldContext, IntervalSeconds, bLooping, fn) -> TimerId
    --    RegisterModNextTick(WorldContext, fn) -> boolean（短延迟单次，常用于等待世界就绪）
    --    连续失败 3 次的回调会被引擎自动摘除并记录错误日志。
    --    A callback failing 3 times in a row is auto-removed with an error log.
    -- ------------------------------------------------------------------------
    DayTimerId = UE.UModLuaLibrary.RegisterModRepeatingTimer(nil, 30.0, true, function()
        Log("30 秒循环定时器触发 / repeating timer tick")
    end)

    UE.UModLuaLibrary.RegisterModNextTick(nil, function()
        Log("下一帧回调（适合做世界未就绪时的重试）/ next-tick callback")
    end)

    -- ------------------------------------------------------------------------
    -- 3) 控制台命令 / Console commands
    --    RegisterModConsoleCommand(CommandName, Description, fn) -> boolean
    --    回调收到参数表（按空格切分）。游戏内 ~ 控制台输入：examplemod.hello a b
    --    另有内置命令 Mod.Status 可查看所有 Mod 的状态与运行期对象计数。
    --    Built-in command Mod.Status prints every mod's state and object counts.
    -- ------------------------------------------------------------------------
    UE.UModLuaLibrary.RegisterModConsoleCommand("examplemod.hello", "示例命令：打印参数 / prints its arguments", function(Args)
        local joined = ""
        for i = 1, #Args do
            joined = joined .. " " .. Args[i]
        end
        Log("examplemod.hello 收到参数:" .. joined)
    end)

    -- ------------------------------------------------------------------------
    -- 4) 运行时直接替换数据表行（进阶）/ Replace a DataTable row at runtime (advanced)
    --    UE.UModLuaLibrary.ReplaceDataTableRow(DataTable, "RowName", RowStruct)
    --    RowStruct 必须与表的 RowStruct 类型一致；日常改配置请优先用
    --    DataTableConfigs 的 JSON 方式（可随 Mod 启停、可被校验）。
    -- ------------------------------------------------------------------------
end

function Mod:OnModUnloaded()
    -- 以下手动清理是可选的：引擎会按 ModId 自动清理全部注册
    -- Manual cleanup below is optional: the engine auto-cleans all
    -- registrations owned by this mod.
    if DayTimerId ~= 0 then
        UE.UModLuaLibrary.UnregisterModRepeatingTimer(DayTimerId)
    end
    if DayListenerId ~= 0 then
        UE.UModEventBus.UnregisterModEvent(DayListenerId)
    end
    if PlaceListenerId ~= 0 then
        UE.UModEventBus.UnregisterModEvent(PlaceListenerId)
    end
    if DeathListenerId ~= 0 then
        UE.UModEventBus.UnregisterModEvent(DeathListenerId)
    end
    UE.UModLuaLibrary.UnregisterModConsoleCommand("examplemod.hello")
    UE.UModLuaLibrary.ModLog("ExampleMod", "ExampleMod unloaded.", "Log")
end

return Mod

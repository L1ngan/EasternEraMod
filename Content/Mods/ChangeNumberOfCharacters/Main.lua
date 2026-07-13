-- ============================================
-- Mod entry
-- ============================================

local Mod = {}

-- Add this amount to ForceMaxCharacterNum for every ForceLevelInfo row (runtime copy).
local FORCE_MAX_CHARACTER_DELTA = 100

-- Max机关人数量：通过 AERW_GameModeBase:GetGamePlayConfigurationAsset() 写入运行时配置实例
local MAX_ROBOT_NUM = 100

function Mod:BindWorldDirectorOnAllInitializationComplete()
    self:UnbindWorldDirectorOnAllInitializationComplete()
    local WD = UE.AWorldDirector.GetWorldDirector()
    if not WD then
        self:Warn("BindWorldDirectorOnAllInitializationComplete: WorldDirector 不可用（可能尚未生成）")
        return
    end
    self._WorldDirectorForInitDelegate = WD
    self._WorldDirectorInitCompleteCallback = function()
        self:OnWorldAllInitializationComplete()
    end
    WD.OnAllInitializationCompleteDelegate:Add(WD, self._WorldDirectorInitCompleteCallback)
    self:Log("已监听 WorldDirector.OnAllInitializationCompleteDelegate")
end


function Mod:UnbindWorldDirectorOnAllInitializationComplete()
    local WD, Callback = self._WorldDirectorForInitDelegate, self._WorldDirectorInitCompleteCallback
    if WD and Callback then
        pcall(function()
            local KSL = UE.UKismetSystemLibrary
            if KSL and KSL.IsValid then
                local okV, alive = pcall(function()
                    return KSL.IsValid(WD)
                end)
                if okV and not alive then
                    return
                end
            end
            local Del = WD.OnAllInitializationCompleteDelegate
            if Del then
                Del:Remove(WD, Callback)
            end
        end)
    end
    self._WorldDirectorForInitDelegate = nil
    self._WorldDirectorInitCompleteCallback = nil
end

function Mod:BindOnLoadSubLevelSucceed()

    local ctx = self:GetWorldContextObject()
    if not ctx then
        self:Warn("BindOnLoadSubLevelSucceed: WorldContextObject 不可用（无 ModInfo 且无 WorldDirector）")
        return
    end
    local GI = UE.UGameplayStatics.GetGameInstance(ctx)
    if not GI then
        self:Warn("BindOnLoadSubLevelSucceed: GameInstance 不可用")
        return
    end
    self._OnLoadSubLevelGameInstance = GI

    if self._OnLoadSubLevelCallback then
        GI.OnLoadSubLevelSucceed:Remove(GI, self._OnLoadSubLevelCallback)
        self._OnLoadSubLevelCallback = nil
    end

    self._OnLoadSubLevelCallback = function(LevelName)
        self:OnSubLevelLoaded(LevelName)
    end
    GI.OnLoadSubLevelSucceed:Add(GI, self._OnLoadSubLevelCallback)
    self:Log("已监听 OnLoadSubLevelSucceed")
end

function Mod:OnWorldAllInitializationComplete()
    self:Log("OnAllInitializationCompleteDelegate: 当前世界初始化已全部完成")
    local WD = UE.AWorldDirector.GetWorldDirector()
    local World = WD and WD:GetWorld()
    if not World then
        self:Warn("OnWorldAllInitializationComplete: 无法取得 World")
        return
    end
    local CurWorldPlace = WD.CurWorldPlace
    if not CurWorldPlace then
        self:Warn("OnWorldAllInitializationComplete: 无法取得 CurWorldPlace")
        return
    end
    if CurWorldPlace.InitWorldPlaceType == 1 and CurWorldPlace.bPlayerPlace then
        CurWorldPlace:CalcuMaxStationedCharacterNum();
    end
end

function Mod:OnSubLevelLoaded(LevelName)
    self:BindWorldDirectorOnAllInitializationComplete()
end

function Mod:UnbindOnLoadSubLevelSucceed()
    local GI, Callback = self._OnLoadSubLevelGameInstance, self._OnLoadSubLevelCallback
    if GI and Callback and GI.OnLoadSubLevelSucceed then
        GI.OnLoadSubLevelSucceed:Remove(GI, Callback)
    end
    self._OnLoadSubLevelCallback = nil
end
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
-- Do not pass nil into ModLuaLibrary / GameplayStatics world-context APIs (engine Script Warning).
function Mod:GetWorldContextObject()
    return self.ModInfo
end

function Mod:GetWorldFromSubsystem()
    local ctx = self:GetWorldContextObject()
    if not ctx then
        return nil
    end
    local GI = UE.UGameplayStatics.GetGameInstance(ctx)
    if not GI then
        return nil
    end
    return GI:GetWorld()
end

-- GameConfigComponent:GetGameConfigByType(ForceLevelInfo), bump ForceMaxCharacterNum per row.
function Mod:ApplyForceMaxCharacterBoost()
    local World = self:GetWorldFromSubsystem()
    if not World then
        self:Warn("No World (not in game yet?). Skip.")
        return false
    end
    local GameMode = UE.UGameplayStatics.GetGameMode(World)
    if not GameMode then
        self:Warn("No GameMode. Skip.")
        return false
    end
    local ConfigComp = GameMode.GameConfigComponent
    if not ConfigComp then
        self:Warn("GameMode has no GameConfigComponent. Skip.")
        return false
    end

    local DataTable = ConfigComp:GetGameConfigByType(UE.EGameConfigType.ForceLevelInfo)
    if not DataTable then
        self:Warn("GetGameConfigByType(ForceLevelInfo) returned nil. Skip.")
        return false
    end
    local RowNames = UE.UDataTableFunctionLibrary.GetDataTableRowNames(DataTable)
    local Row = UE.FForceLevelInfo()
    for i = 1, RowNames:Num() do
        local RowName = RowNames[i]
        if UE.UDataTableFunctionLibrary.GetDataTableRowFromName(DataTable, RowName, Row) then
            Row.ForceMaxCharacterNum = Row.ForceMaxCharacterNum + FORCE_MAX_CHARACTER_DELTA
            Row.AddMainPlaceStationedNum = Row.AddMainPlaceStationedNum + FORCE_MAX_CHARACTER_DELTA
            local RowNameStr = UE.UKismetStringLibrary.Conv_NameToString(RowName)
            if UE.UModLuaLibrary.ReplaceDataTableRow(DataTable, RowNameStr, Row) then
                self:Log(string.format("ReplaceDataTableRow %s，ForceMaxCharacterNum=%s", tostring(RowName), tostring(Row.ForceMaxCharacterNum)))
            else
                self:Warn(string.format("ReplaceDataTableRow failed for row %s", tostring(RowName)))
            end
        end
    end
    return true
end

-- AERW_GameModeBase:GetGamePlayConfigurationAsset() -> UGamePlayConfigurationAsset.MaxRobotNum
function Mod:ApplyMaxRobotNumOverride()
    local World = self:GetWorldFromSubsystem()
    if not World then
        self:Warn("ApplyMaxRobotNumOverride: 无 World，跳过")
        return false
    end
    local GameMode = UE.UGameplayStatics.GetGameMode(World)
    if not GameMode then
        self:Warn("ApplyMaxRobotNumOverride: 无 GameMode，跳过")
        return false
    end
    local okGet, Asset = pcall(function()
        return GameMode:GetGamePlayConfigurationAsset()
    end)
    if not okGet or not Asset then
        self:Warn("ApplyMaxRobotNumOverride: 无法调用 GetGamePlayConfigurationAsset（可能尚未进入 ERW 对局或 GameMode 类型不符）")
        return false
    end
    local okSet, err = pcall(function()
        Asset.MaxRobotNum = MAX_ROBOT_NUM
    end)
    if not okSet then
        self:Warn(string.format("ApplyMaxRobotNumOverride: 写入 MaxRobotNum 失败: %s（若属性为 BlueprintReadOnly，需在工程 C++ 中改为可写或增加 Setter）", tostring(err)))
        return false
    end
    self:Log(string.format("ApplyMaxRobotNumOverride: MaxRobotNum=%d", MAX_ROBOT_NUM))
    return true
end

-- ============================================
-- Lifecycle
-- ============================================

function Mod:OnModLoaded()
    self:Log("Mod loaded!")
    self:ApplyMaxRobotNumOverride()
    self:ApplyForceMaxCharacterBoost()
    self:BindOnLoadSubLevelSucceed()
    self:CommandShowInfo()
end

function Mod:OnModUnloaded()
    self:UnbindOnLoadSubLevelSucceed()
    self:UnbindWorldDirectorOnAllInitializationComplete()
    self:Log("Mod unloaded!")
end

function Mod:CommandShowInfo()
    self:Log("=== Mod Information ===")
    self:Log(string.format("Mod ID: %s", self.ModInfo.Metadata.ModId))
    self:Log(string.format("Mod Name: %s", self.ModInfo.Metadata.ModName))
end

return Mod

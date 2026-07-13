-- ============================================
-- Mod - 主入口文件
-- ============================================

local Mod = {}

-- ============================================
-- 工具函数
-- ============================================

function Mod:Log(Message, LogLevel)
    LogLevel = LogLevel or "Log"
    UE.UModLuaLibrary.ModLog(self.ModInfo.Metadata.ModId,Message,LogLevel)
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

-- ============================================
-- Mod生命周期
-- ============================================

-- Mod加载时调用
function Mod:OnModLoaded()
    self:Log("Mod loaded!")
    self:CommandShowInfo()
end

-- Mod卸载时调用
function Mod:OnModUnloaded()
    
    self:Log("Mod unloaded!")
end


-- 显示Mod信息
function Mod:CommandShowInfo()
    self:Log("=== Config Table Mod Information ===")
    self:Log(string.format("Mod ID: %s", self.ModInfo.Metadata.ModId))
    self:Log(string.format("Mod Name: %s", self.ModInfo.Metadata.ModName))
end


return Mod


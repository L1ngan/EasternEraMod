---@class ULevelSequenceBurnInOptions : UObject
---@field public bUseBurnIn boolean
---@field public BurnInClass FSoftClassPath
---@field public Settings ULevelSequenceBurnInInitSettings
local ULevelSequenceBurnInOptions = {}

---Loads the specified class path and initializes an instance, then stores it in Settings.
---@param InBurnInClass FSoftClassPath
function ULevelSequenceBurnInOptions:SetBurnIn(InBurnInClass) end


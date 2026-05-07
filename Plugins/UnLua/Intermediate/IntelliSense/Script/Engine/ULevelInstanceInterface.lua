---@class ULevelInstanceInterface : UInterface
local ULevelInstanceInterface = {}

function ULevelInstanceInterface:UnloadLevelInstance() end

---Sets the UWorld asset reference when loading a LevelInstance
---@param WorldAsset TSoftObjectPtr_UWorld_
---@return boolean
function ULevelInstanceInterface:SetWorldAsset(WorldAsset) end

function ULevelInstanceInterface:LoadLevelInstance() end

---@return boolean
function ULevelInstanceInterface:IsLoaded() end

---@return TSoftObjectPtr_UWorld_
function ULevelInstanceInterface:GetWorldAsset() end

---@return ULevel
function ULevelInstanceInterface:GetLoadedLevel() end


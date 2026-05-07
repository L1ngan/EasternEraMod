---@class AWorldPartitionStandaloneHLOD : AActor
---@field protected WorldAsset TSoftObjectPtr<UWorld>
---@field protected LevelInstanceSpawnGuid FGuid
local AWorldPartitionStandaloneHLOD = {}

function AWorldPartitionStandaloneHLOD:UnloadLevelInstance() end

---Sets the UWorld asset reference when loading a LevelInstance
---@param WorldAsset TSoftObjectPtr_UWorld_
---@return boolean
function AWorldPartitionStandaloneHLOD:SetWorldAsset(WorldAsset) end

function AWorldPartitionStandaloneHLOD:LoadLevelInstance() end

---@return boolean
function AWorldPartitionStandaloneHLOD:IsLoaded() end

---@return TSoftObjectPtr_UWorld_
function AWorldPartitionStandaloneHLOD:GetWorldAsset() end

---@return ULevel
function AWorldPartitionStandaloneHLOD:GetLoadedLevel() end


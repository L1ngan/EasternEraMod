---@class ALevelInstance : AActor
---@field protected WorldAsset TSoftObjectPtr<UWorld> @Level LevelInstance
---@field protected PropertyOverrides ULevelInstancePropertyOverrideAsset
---@field protected LevelInstanceComponent ULevelInstanceComponent
---@field protected CookedWorldAsset TSoftObjectPtr<UWorld>
---@field protected LevelInstanceSpawnGuid FGuid
---@field public DesiredRuntimeBehavior ELevelInstanceRuntimeBehavior
local ALevelInstance = {}

function ALevelInstance:UnloadLevelInstance() end

---Sets the UWorld asset reference when loading a LevelInstance
---@param WorldAsset TSoftObjectPtr_UWorld_
---@return boolean
function ALevelInstance:SetWorldAsset(WorldAsset) end

function ALevelInstance:LoadLevelInstance() end

---@return boolean
function ALevelInstance:IsLoaded() end

---@return TSoftObjectPtr_UWorld_
function ALevelInstance:GetWorldAsset() end

---@return ULevel
function ALevelInstance:GetLoadedLevel() end


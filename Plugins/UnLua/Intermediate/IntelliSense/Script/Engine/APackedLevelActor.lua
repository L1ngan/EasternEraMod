---APackedLevelActor is the result of packing the source level (WorldAsset base class property) into a single actor. See FPackedLevelActorBuilder.
---Other components are unsupported and will result in an incomplete APackedLevelActor. In this case using a regular ALevelInstance is recommended.
---@class APackedLevelActor : ALevelInstance
---@field private PackedVersion FGuid
---@field private PackedHash integer
local APackedLevelActor = {}

function APackedLevelActor:UnloadLevelInstance() end

---Sets the UWorld asset reference when loading a LevelInstance
---@param WorldAsset TSoftObjectPtr_UWorld_
---@return boolean
function APackedLevelActor:SetWorldAsset(WorldAsset) end

function APackedLevelActor:LoadLevelInstance() end

---@return boolean
function APackedLevelActor:IsLoaded() end

---@return TSoftObjectPtr_UWorld_
function APackedLevelActor:GetWorldAsset() end

---@return ULevel
function APackedLevelActor:GetLoadedLevel() end


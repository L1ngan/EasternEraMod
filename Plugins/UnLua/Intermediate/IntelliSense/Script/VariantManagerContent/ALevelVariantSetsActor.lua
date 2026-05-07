---@class ALevelVariantSetsActor : AActor
---@field public LevelVariantSets FSoftObjectPath
---@field private DirectorInstances TMap<TSubclassOf<UObject>, ULevelVariantSetsFunctionDirector>
local ALevelVariantSetsActor = {}

---@param VariantSetName string
---@param VariantName string
---@return boolean
function ALevelVariantSetsActor:SwitchOnVariantByName(VariantSetName, VariantName) end

---@param VariantSetIndex integer
---@param VariantIndex integer
---@return boolean
function ALevelVariantSetsActor:SwitchOnVariantByIndex(VariantSetIndex, VariantIndex) end

---@param InVariantSets ULevelVariantSets
function ALevelVariantSetsActor:SetLevelVariantSets(InVariantSets) end

---Returns the LevelVariantSets asset, optionally loading it if necessary
---@param bLoad boolean @[opt] 
---@return ULevelVariantSets
function ALevelVariantSetsActor:GetLevelVariantSets(bLoad) end


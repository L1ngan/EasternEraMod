---@class ULevelVariantSets : UObject
---@field private DirectorBlueprint UObject @A pointer to the director blueprint that generates this levelvariantsets' DirectorClass
---@field private DirectorClass TSubclassOf<UObject> @The class that is used to spawn this levelvariantsets' director instance. Director instances are allocated one per instance
---@field private VariantSets TArray<UVariantSet>
local ULevelVariantSets = {}

---@param VariantSetName string
---@return UVariantSet
function ULevelVariantSets:GetVariantSetByName(VariantSetName) end

---@param VariantSetIndex integer
---@return UVariantSet
function ULevelVariantSets:GetVariantSet(VariantSetIndex) end

---@return integer
function ULevelVariantSets:GetNumVariantSets() end


---UPlayerMappableInputConfig
---This represents one set of Player Mappable controller/keymappings. You can use this input config to create
---the default mappings for your player to start with in your game. It provides an easy way to get only the player
---mappable key actions, and it can be used to add multiple UInputMappingContext's at once to the player.
---Populate this data asset with Input Mapping Contexts that have player mappable actions in them.
---@class UPlayerMappableInputConfig : UPrimaryDataAsset
---@field protected ConfigName string @The unique name of this config that can be used when saving it
---@field protected ConfigDisplayName string @The display name that can be used
---@field protected bIsDeprecated boolean @A flag that can be used to mark this Input Config as deprecated to your player/designers.
---@field protected Metadata UObject @Metadata that can used to store any other related items to your key mapping such as icons, ability assets, etc.
---@field protected Contexts TMap<UInputMappingContext, integer> @Mapping contexts that make up this Input Config with their associated priority.
local UPlayerMappableInputConfig = {}

---Resets this mappable config to use the keys
function UPlayerMappableInputConfig:ResetToDefault() end

---@return boolean
function UPlayerMappableInputConfig:IsDeprecated() end

---Get all the player mappable keys in this config.
---@return TArray_FEnhancedActionKeyMapping_
function UPlayerMappableInputConfig:GetPlayerMappableKeys() end

---Get all the player mappable keys in this config.
---@return UObject
function UPlayerMappableInputConfig:GetMetadata() end

---Return all the Input Mapping contexts that
---@return TMap_UInputMappingContext__integer_
function UPlayerMappableInputConfig:GetMappingContexts() end

---Returns the action key mapping for the mapping that matches the given name
---@param MappingName string
---@return FEnhancedActionKeyMapping
function UPlayerMappableInputConfig:GetMappingByName(MappingName) end

---Returns all the keys mapped to a specific Input Action in this mapping config.
---@param InAction UInputAction
---@return TArray_FEnhancedActionKeyMapping_
function UPlayerMappableInputConfig:GetKeysBoundToAction(InAction) end

---@return string
function UPlayerMappableInputConfig:GetDisplayName() end

---@return string
function UPlayerMappableInputConfig:GetConfigName() end


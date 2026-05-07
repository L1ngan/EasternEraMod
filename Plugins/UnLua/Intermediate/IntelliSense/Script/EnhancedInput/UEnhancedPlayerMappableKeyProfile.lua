---Represents one "Profile" that a user can have for their player mappable keys
---@class UEnhancedPlayerMappableKeyProfile : UObject
---@field protected ProfileIdentifier FGameplayTag
---@field protected ProfileIdentifierString string @The ID of this profile. This can be used by each Key Mapping to filter down which profile is required for it be equipped.
---@field protected OwningUserId FPlatformUserId @The platform user id of the owning Local Player of this profile.
---@field protected DisplayName string @The localized display name of this profile
---@field protected PlayerMappedKeys TMap<string, FKeyMappingRow> @A map of "Mapping Row Name" to all key mappings associated with it. Note: Dirty mappings will be serialized from UEnhancedInputUserSettings::Serialize
local UEnhancedPlayerMappableKeyProfile = {}

---Returns a string that can be used to debug the current key mappings.
---@return string
function UEnhancedPlayerMappableKeyProfile:ToString() end

---@param NewDisplayName string
function UEnhancedPlayerMappableKeyProfile:SetDisplayName(NewDisplayName) end

---Resets all the key mappings in this profile to their default value from their Input Mapping Context.
function UEnhancedPlayerMappableKeyProfile:ResetToDefault() end

---Resets every player key mapping to this mapping back to it's default value
---@param InMappingName string
function UEnhancedPlayerMappableKeyProfile:ResetMappingToDefault(InMappingName) end

---OUT
---@param Options FPlayerMappableKeyQueryOptions
---@param OutKeys TArray_FKey_ @[out] 
---@return integer
function UEnhancedPlayerMappableKeyProfile:QueryPlayerMappedKeys(Options, OutKeys) end

---@param OutKeyMapping FPlayerKeyMapping @[out] 
---@param InArgs FMapPlayerKeyArgs
function UEnhancedPlayerMappableKeyProfile:K2_FindKeyMapping(OutKeyMapping, InArgs) end

---@return string
function UEnhancedPlayerMappableKeyProfile:GetProfileIdString() end

---Get the localized display name for this profile
---@return string
function UEnhancedPlayerMappableKeyProfile:GetProfileDisplayName() end

---Get all known key mappings for this profile.
---This returns a map of "Mapping Name" -> Player Mappings to that name
---@return TMap_string__FKeyMappingRow_
function UEnhancedPlayerMappableKeyProfile:GetPlayerMappingRows() end

---OUT
---@param InKey FKey
---@param OutMappingNames TArray_string_ @[out] 
---@return integer
function UEnhancedPlayerMappableKeyProfile:GetMappingNamesForKey(InKey, OutMappingNames) end

---OUT
---@param MappingName string
---@param OutKeys TArray_FKey_ @[out] 
---@return integer
function UEnhancedPlayerMappableKeyProfile:GetMappedKeysInRow(MappingName, OutKeys) end

---A helper function to print out all the current profile settings to the log.
function UEnhancedPlayerMappableKeyProfile:DumpProfileToLog() end

---Returns true if the given player key mapping passes the query filter provided.
---@param PlayerMapping FPlayerKeyMapping
---@param Options FPlayerMappableKeyQueryOptions
---@return boolean
function UEnhancedPlayerMappableKeyProfile:DoesMappingPassQueryOptions(PlayerMapping, Options) end


---@class UGameplayTagAssetInterface : UInterface
local UGameplayTagAssetInterface = {}

---Check if the asset has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)
---@param TagToCheck FGameplayTag
---@return boolean
function UGameplayTagAssetInterface:HasMatchingGameplayTag(TagToCheck) end

---Check if the asset has gameplay tags that matches against any of the specified tags (expands to include parents of asset tags)
---@param TagContainer FGameplayTagContainer
---@return boolean
function UGameplayTagAssetInterface:HasAnyMatchingGameplayTags(TagContainer) end

---Check if the asset has gameplay tags that matches against all of the specified tags (expands to include parents of asset tags)
---@param TagContainer FGameplayTagContainer
---@return boolean
function UGameplayTagAssetInterface:HasAllMatchingGameplayTags(TagContainer) end

---Gets the owned gameplay tags for the asset.  Exposed to allow redirects of existing GetOwnedGameplayTags calls.  In Blueprints, new nodes will use BlueprintGameplayTagLibrary's version.
---@return FGameplayTagContainer
function UGameplayTagAssetInterface:BP_GetOwnedGameplayTags() end


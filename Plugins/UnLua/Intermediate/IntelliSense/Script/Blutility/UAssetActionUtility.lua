---Base class for all asset action-related utilities
---Any functions/events that are exposed on derived classes that have the correct signature will be
---included as menu options when right-clicking on a group of assets in the content browser.
---@class UAssetActionUtility : UEditorUtilityObject
---@field protected bIsActionForBlueprints boolean @Is this action designed to work specifically on Blueprints (true) or on all assets (false). If true, SupportedClasses is treated as a filter against the Parent Class of selected Blueprint assets.
---@field protected SupportedClasses TArray<TSoftClassPtr<UObject>> @The supported classes controls the list of classes that may be operated on by all of the asset functions in this utility class.
---@field protected SupportedConditions TArray<FAssetActionSupportCondition> @The supported conditions for any asset to use these utility functions.  Note: all of these conditions must pass in sequence.  So if you have earlier failure conditions you want to be run first, put them first in the list, if those fail, their failure reason will be handled first.
local UAssetActionUtility = {}

---Returns whether or not this action is designed to work specifically on Blueprints (true) or on all assets (false).
---If true, GetSupportedClass() is treated as a filter against the Parent Class of selected Blueprint assets.
---@return boolean
function UAssetActionUtility:IsActionForBlueprints() end

---Gets the statically determined supported classes, these classes are used as a first pass filter when determining
---if we can utilize this asset utility action on the asset.
---@return TArray_TSoftClassPtr_UObject__
function UAssetActionUtility:GetSupportedClasses() end

---@return TSubclassOf_UObject_
function UAssetActionUtility:GetSupportedClass() end


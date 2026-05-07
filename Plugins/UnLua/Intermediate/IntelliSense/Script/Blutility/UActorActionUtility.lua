---Base class for all actor action-related utilities
---Any functions/events that are exposed on derived classes that have the correct signature will be
---included as menu options when right-clicking on a group of actors in the level editor.
---@class UActorActionUtility : UEditorUtilityObject
---@field private SupportedClasses TArray<TSoftClassPtr<UObject>> @For simple Asset Action's you should fill out the supported class here.
local UActorActionUtility = {}

---Gets the statically determined supported classes, these classes are used as a first pass filter when determining
---if we can utilize this asset utility action on the asset.
---@return TArray_TSoftClassPtr_UObject__
function UActorActionUtility:GetSupportedClasses() end

---@return TSubclassOf_UObject_
function UActorActionUtility:GetSupportedClass() end


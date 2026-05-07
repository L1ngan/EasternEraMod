---A UInteractiveTool contains a set of UObjects that contain "properties" of the Tool, ie
---the configuration flags, parameters, etc that control the Tool. Currently any UObject
---can be added as a property set, however there is no automatic mechanism for those child
---UObjects to notify the Tool when a property changes.
---If you make your property set UObjects subclasses of UInteractiveToolPropertySet, then
---when the Tool Properties are changed *in the Editor*, the parent Tool will be automatically notified.
---You can override UInteractiveTool::OnPropertyModified() to act on these notifications
---@class UInteractiveToolPropertySet : UObject
---@field protected CachedPropertiesMap TMap<string, UInteractiveToolPropertySet>
---@field protected bIsPropertySetEnabled boolean @Controls whether a property set is shown in the UI.  Transient so that disabling a PropertySet in one tool doesn't disable it in others.
local UInteractiveToolPropertySet = {}


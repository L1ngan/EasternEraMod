---A library of commonly used functionality for Notifies related to mirroring, exposed to blueprint.
---@class UAnimNotifyMirrorInspectionLibrary : UBlueprintFunctionLibrary
local UAnimNotifyMirrorInspectionLibrary = {}

---Get whether the animation which triggered this notify was mirrored.
---@param EventReference FAnimNotifyEventReference
---@return boolean
function UAnimNotifyMirrorInspectionLibrary.IsTriggeredByMirroredAnimation(EventReference) end

---If the notify is mirrored, return the mirror data table that was active.
---@param EventReference FAnimNotifyEventReference
---@return UMirrorDataTable
function UAnimNotifyMirrorInspectionLibrary.GetMirrorDataTable(EventReference) end


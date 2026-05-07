---@class USequencerOutlinerScriptingObject : UObject
---@field public OnSelectionChanged MulticastDelegate
local USequencerOutlinerScriptingObject = {}

---@param InSelection TArray_FSequencerViewModelScriptingStruct_
function USequencerOutlinerScriptingObject:SetSelection(InSelection) end

---@return TArray_FSequencerViewModelScriptingStruct_
function USequencerOutlinerScriptingObject:GetSelection() end

---@return FSequencerViewModelScriptingStruct
function USequencerOutlinerScriptingObject:GetRootNode() end

---@param Node FSequencerViewModelScriptingStruct
---@param TypeName string @[opt] 
---@return TArray_FSequencerViewModelScriptingStruct_
function USequencerOutlinerScriptingObject:GetChildren(Node, TypeName) end


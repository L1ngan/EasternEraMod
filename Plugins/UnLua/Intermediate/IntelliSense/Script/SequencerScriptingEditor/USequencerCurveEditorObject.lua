---* Class to hold sequencer curve editor functions
---@class USequencerCurveEditorObject : UObject
local USequencerCurveEditorObject = {}

---Show curve
---@param Channel FSequencerChannelProxy
---@param bShowCurve boolean
function USequencerCurveEditorObject:ShowCurve(Channel, bShowCurve) end

---Set Random Colors for specified channels idendified by it's class and identifiers. This will be stored in editor user preferences.
---@param Class TSubclassOf_UObject_
---@param Identifiers TArray_string_
function USequencerCurveEditorObject:SetRandomColorForChannels(Class, Identifiers) end

---Set Custom Color for specified channels idendified by it's class and identifiers. This will be stored in editor user preferences.
---@param Class TSubclassOf_UObject_
---@param Identifiers TArray_string_
---@param NewColors TArray_FLinearColor_
function USequencerCurveEditorObject:SetCustomColorForChannels(Class, Identifiers, NewColors) end

---Set Custom Color for specified channel idendified by it's class and identifier. This will be stored in editor user preferences.
---@param Class TSubclassOf_UObject_
---@param Identifier string
---@param NewColor FLinearColor
function USequencerCurveEditorObject:SetCustomColorForChannel(Class, Identifier, NewColor) end

---Select keys
---@param Channel FSequencerChannelProxy
---@param Indices TArray_integer_
function USequencerCurveEditorObject:SelectKeys(Channel, Indices) end

---Open curve editor
function USequencerCurveEditorObject:OpenCurveEditor() end

---Is the curve displayed
---@param Channel FSequencerChannelProxy
---@return boolean
function USequencerCurveEditorObject:IsCurveShown(Channel) end

---Is curve editor open
---@return boolean
function USequencerCurveEditorObject:IsCurveEditorOpen() end

---Get if a custom color for specified channel idendified by it's class and identifier exists
---@param Class TSubclassOf_UObject_
---@param Identifier string
---@return boolean
function USequencerCurveEditorObject:HasCustomColorForChannel(Class, Identifier) end

---Gets the selected keys with this channel
---@param ChannelProxy FSequencerChannelProxy
---@return TArray_integer_
function USequencerCurveEditorObject:GetSelectedKeys(ChannelProxy) end

---Get custom color for specified channel idendified by it's class and identifier,if none exists will return white
---@param Class TSubclassOf_UObject_
---@param Identifier string
---@return FLinearColor
function USequencerCurveEditorObject:GetCustomColorForChannel(Class, Identifier) end

---Gets the channel with selected keys
---@return TArray_FSequencerChannelProxy_
function USequencerCurveEditorObject:GetChannelsWithSelectedKeys() end

---Empties the current selection.
function USequencerCurveEditorObject:EmptySelection() end

---Delete for specified channel idendified by it's class and identifier.
---@param Class TSubclassOf_UObject_
---@param Identifier string @[out] 
function USequencerCurveEditorObject:DeleteColorForChannels(Class, Identifier) end

---Close curve editor
function USequencerCurveEditorObject:CloseCurveEditor() end

---@param Filter UCurveEditorFilterBase
function USequencerCurveEditorObject:ApplyFilter(Filter) end


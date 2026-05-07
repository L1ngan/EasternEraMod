---@class AEditorUtilityActor : AActor
---@field private EditorOnlyInputComponent UInputComponent
---@field private bReceivesEditorInput boolean @If set to true, then this actor will be able to recieve input delegate callbacks when in the editor.
local AEditorUtilityActor = {}

---@param bInValue boolean
function AEditorUtilityActor:SetReceivesEditorInput(bInValue) end

---Standard function to execute
function AEditorUtilityActor:Run() end

---@return boolean
function AEditorUtilityActor:GetReceivesEditorInput() end

---Returns the current InputComponent on this utility actor. This will be NULL unless bReceivesEditorInput is set to true.
---@return UInputComponent
function AEditorUtilityActor:GetInputComponent() end


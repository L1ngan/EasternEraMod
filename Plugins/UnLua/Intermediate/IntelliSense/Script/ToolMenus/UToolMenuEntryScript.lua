---@class UToolMenuEntryScript : UObject
---@field public Data FToolMenuEntryScriptData
---@field public bHasRegisteredMenuEntry boolean
local UToolMenuEntryScript = {}

function UToolMenuEntryScript:UnregisterMenuEntry() end

---@param Context FToolMenuContext
---@return boolean
function UToolMenuEntryScript:ShowInToolbarTopLevel(Context) end

function UToolMenuEntryScript:RegisterMenuEntry() end

---@param Context FToolMenuContext
---@return boolean
function UToolMenuEntryScript:IsVisible(Context) end

---@param OwnerName string
---@param Menu string
---@param Section string
---@param Name string
---@param Label string
---@param ToolTip string
function UToolMenuEntryScript:InitEntry(OwnerName, Menu, Section, Name, Label, ToolTip) end

---@param Context FToolMenuContext
---@return string
function UToolMenuEntryScript:GetToolTip(Context) end

---@param Context FToolMenuContext
---@return string
function UToolMenuEntryScript:GetLabel(Context) end

---@param Context FToolMenuContext
---@return FScriptSlateIcon
function UToolMenuEntryScript:GetIcon(Context) end

---@param Context FToolMenuContext
---@return ECheckBoxState
function UToolMenuEntryScript:GetCheckState(Context) end

---@param Context FToolMenuContext
function UToolMenuEntryScript:Execute(Context) end

---@param Menu UToolMenu
---@param SectionName string
---@param Context FToolMenuContext
function UToolMenuEntryScript:ConstructMenuEntry(Menu, SectionName, Context) end

---@param Context FToolMenuContext
---@return boolean
function UToolMenuEntryScript:CanExecute(Context) end


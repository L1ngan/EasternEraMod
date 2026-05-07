---@class UToolMenuEntryExtensions : UObject
local UToolMenuEntryExtensions = {}

---@param Target FToolMenuEntry @[out] 
---@param ToolTip string
function UToolMenuEntryExtensions.SetToolTip(Target, ToolTip) end

---@param Target FToolMenuEntry @[out] 
---@param Type EToolMenuStringCommandType
---@param CustomType string
---@param String string
function UToolMenuEntryExtensions.SetStringCommand(Target, Type, CustomType, String) end

---@param Target FToolMenuEntry @[out] 
---@param Label string
function UToolMenuEntryExtensions.SetLabel(Target, Label) end

---@param Target FToolMenuEntry @[out] 
---@param StyleSetName string
---@param StyleName string @[opt] 
---@param SmallStyleName string @[opt] 
function UToolMenuEntryExtensions.SetIcon(Target, StyleSetName, StyleName, SmallStyleName) end

---@param Name string
---@return FToolMenuOwner
function UToolMenuEntryExtensions.MakeToolMenuOwner(Name) end

---@param Type EToolMenuStringCommandType
---@param CustomType string
---@param String string
---@return FToolMenuStringCommand
function UToolMenuEntryExtensions.MakeStringCommand(Type, CustomType, String) end

---@param StyleSetName string
---@param StyleName string
---@param SmallStyleName string @[opt] 
---@return FScriptSlateIcon
function UToolMenuEntryExtensions.MakeScriptSlateIcon(StyleSetName, StyleName, SmallStyleName) end

---@param InOwner string
---@param InName string
---@param InLabel string
---@param InToolTip string
---@param CommandType EToolMenuStringCommandType
---@param CustomCommandType string
---@param CommandString string
---@return FToolMenuEntry
function UToolMenuEntryExtensions.InitMenuEntry(InOwner, InName, InLabel, InToolTip, CommandType, CustomCommandType, CommandString) end

---@param Target FToolMenuEntry
---@return string
function UToolMenuEntryExtensions.GetToolTip(Target) end

---@param Target FToolMenuEntry
---@return string
function UToolMenuEntryExtensions.GetLabel(Target) end

---@param InValue FToolMenuOwner
---@param Name string @[out] 
function UToolMenuEntryExtensions.BreakToolMenuOwner(InValue, Name) end

---@param InValue FToolMenuStringCommand
---@param Type EToolMenuStringCommandType @[out] 
---@param CustomType string @[out] 
---@param String string @[out] 
function UToolMenuEntryExtensions.BreakStringCommand(InValue, Type, CustomType, String) end

---@param InValue FScriptSlateIcon
---@param StyleSetName string @[out] 
---@param StyleName string @[out] 
---@param SmallStyleName string @[out] 
function UToolMenuEntryExtensions.BreakScriptSlateIcon(InValue, StyleSetName, StyleName, SmallStyleName) end


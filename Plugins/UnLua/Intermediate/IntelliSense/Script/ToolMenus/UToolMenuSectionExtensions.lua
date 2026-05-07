---@class UToolMenuSectionExtensions : UObject
local UToolMenuSectionExtensions = {}

---@param Section FToolMenuSection @[out] 
---@param Label string
function UToolMenuSectionExtensions.SetLabel(Section, Label) end

---@param Section FToolMenuSection
---@return string
function UToolMenuSectionExtensions.GetLabel(Section) end

---@param Section FToolMenuSection @[out] 
---@param InObject UToolMenuEntryScript
function UToolMenuSectionExtensions.AddEntryObject(Section, InObject) end

---@param Section FToolMenuSection @[out] 
---@param Args FToolMenuEntry
function UToolMenuSectionExtensions.AddEntry(Section, Args) end


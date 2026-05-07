---@class UInterchangeEditorSettings : UDeveloperSettings
---@field public bShowImportDialogAtReimport boolean @Use the dialog overrides on the Interchange category of the Project Settings if you want to control when the Interchange reimport dialog is shown
---@field private UsedGroupName string
---@field private UsedGroupUID FGuid
local UInterchangeEditorSettings = {}

---@param InUsedGroupName string
function UInterchangeEditorSettings:SetUsedGroupName(InUsedGroupName) end

---@return string
function UInterchangeEditorSettings:GetUsedGroupName() end

---@return TArray_string_
function UInterchangeEditorSettings:GetSelectableItems() end


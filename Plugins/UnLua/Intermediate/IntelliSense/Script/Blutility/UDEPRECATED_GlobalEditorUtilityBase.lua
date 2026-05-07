---@class UDEPRECATED_GlobalEditorUtilityBase : UObject
---@field public HelpText string
---@field public bDirtiedSelectionSet boolean
---@field public bAutoRunDefaultAction boolean @Should this blueprint automatically run OnDefaultActionClicked, or should it open up a details panel to edit properties and/or offer multiple buttons
---@field public OnEachSelectedActor MulticastDelegate @The method called for each selected actor when ForEachSelectedActor is called
---@field public OnEachSelectedAsset MulticastDelegate @The method called for each selected asset when ForEachSelectedAsset is called
local UDEPRECATED_GlobalEditorUtilityBase = {}

---Set the selection state for the selected actor
---@param Actor AActor
---@param bShouldBeSelected boolean
function UDEPRECATED_GlobalEditorUtilityBase:SetActorSelectionState(Actor, bShouldBeSelected) end

---Selects nothing in the editor (another way to clear the selection)
function UDEPRECATED_GlobalEditorUtilityBase:SelectNothing() end

---Renames an asset (cannot move folders)
---@param Asset UObject
---@param NewName string
function UDEPRECATED_GlobalEditorUtilityBase:RenameAsset(Asset, NewName) end

---The default action called when the blutility is invoked if bAutoRunDefaultAction=true (it is never called otherwise)
function UDEPRECATED_GlobalEditorUtilityBase:OnDefaultActionClicked() end

---@return TArray_AActor_
function UDEPRECATED_GlobalEditorUtilityBase:GetSelectionSet() end

---@param Origin FVector @[out] 
---@param BoxExtent FVector @[out] 
---@param SphereRadius number @[out] 
function UDEPRECATED_GlobalEditorUtilityBase:GetSelectionBounds(Origin, BoxExtent, SphereRadius) end

---Gets the set of currently selected assets
---@return TArray_UObject_
function UDEPRECATED_GlobalEditorUtilityBase:GetSelectedAssets() end

---@return UEditorPerProjectUserSettings
function UDEPRECATED_GlobalEditorUtilityBase:GetEditorUserSettings() end

---Attempts to find the actor specified by PathToActor in the current editor world
---@param PathToActor string
---@return AActor
function UDEPRECATED_GlobalEditorUtilityBase:GetActorReference(PathToActor) end

---Calls OnEachSelectedAsset for each selected asset
function UDEPRECATED_GlobalEditorUtilityBase:ForEachSelectedAsset() end

---Calls OnEachSelectedActor for each selected actor
function UDEPRECATED_GlobalEditorUtilityBase:ForEachSelectedActor() end

---Remove all actors from the selection set
function UDEPRECATED_GlobalEditorUtilityBase:ClearActorSelectionSet() end


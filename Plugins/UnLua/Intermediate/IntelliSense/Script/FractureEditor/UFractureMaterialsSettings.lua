---Settings related to setting materials on a Geometry Collection *
---@class UFractureMaterialsSettings : UFractureToolSettings
---@field public EditingCollection string @Geometry Collection selected for editing
---@field public Materials TArray<UMaterialInterface> @Materials on the selected Geometry Collection's underlying asset (the Rest Collection).
---@field public bOnlySelectedComponents boolean @Whether 'Use Asset Materials On Components' should only update the selected components, or update all components using this asset
---@field public AssignMaterial string @Material to assign to selected faces
---@field public ToFaces EMaterialAssignmentTargets @Which subset of faces to update materials assignments on, for the selected geometry
---@field public bOnlySelectedBones boolean @Whether to only assign materials for faces in the selected bones, or the whole geometry collection
---@field public bHaveTargetCollection boolean
---@field private AssignMaterialNamesList TArray<string>
local UFractureMaterialsSettings = {}

---Clear material overrides on components using this asset, so the asset materials are used
function UFractureMaterialsSettings:UseAssetMaterialsOnComponents() end

---Remove the last material slot from the selected Geometry Collections. (Will not remove the final material.)
function UFractureMaterialsSettings:RemoveMaterialSlot() end

---@return TArray_string_
function UFractureMaterialsSettings:GetMaterialNamesFunc() end

---Add a new material slot to the selected geometry collections
function UFractureMaterialsSettings:AddMaterialSlot() end


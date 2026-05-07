---@class UMeshSymmetryProperties : UInteractiveToolPropertySet
---@field public bEnableSymmetry boolean @Enable/Disable symmetric sculpting. This option will not be available if symmetry cannot be detected, or a non-symmetric edit has been made
---@field public bSymmetryCanBeEnabled boolean @this flag is set/updated by the Tool to enable/disable the bEnableSymmetry toggle
local UMeshSymmetryProperties = {}


---Standard material property settings for tools that generate new meshes
---@class UNewMeshMaterialProperties : UInteractiveToolPropertySet
---@field public Material TWeakObjectPtr<UMaterialInterface> @Material for new mesh
---@field public UVScale number @Scale factor for generated UVs
---@field public bWorldSpaceUVScale boolean @If true, UV scale will be relative to world space. This means objects of different sizes created with the same UV scale have the same average texel size.
---@field public bShowWireframe boolean @If true, overlays preview with wireframe
---@field public bShowExtendedOptions boolean @If true, extended options are available
local UNewMeshMaterialProperties = {}


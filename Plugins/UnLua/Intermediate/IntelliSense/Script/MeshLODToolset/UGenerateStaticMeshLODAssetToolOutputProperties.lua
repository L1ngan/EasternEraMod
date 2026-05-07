---@class UGenerateStaticMeshLODAssetToolOutputProperties : UInteractiveToolPropertySet
---@field public OutputMode EGenerateLODAssetOutputMode @Whether to modify the static mesh in place or create a new one.
---@field public NewAssetName string @Base name for newly-generated asset
---@field public bSaveInputAsHiResSource boolean @If the Asset doesn't already have a HiRes source, store the input mesh as the HiRes source
---@field public GeneratedSuffix string @Suffix to append to newly-generated Asset (Meshes, Textures, Materials, etc)
---@field public bShowOutputMode boolean @If false, then OutputMode will not be shown in DetailsView panels (otherwise no effect)
local UGenerateStaticMeshLODAssetToolOutputProperties = {}


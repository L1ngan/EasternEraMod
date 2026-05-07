---@class FHairGroupsMeshesSourceDescription
---@field public Material UMaterialInterface @Deprecated
---@field public MaterialSlotName string
---@field public ImportedMesh UStaticMesh @Mesh settings
---@field public Textures FHairGroupCardsTextures
---@field public GroupIndex integer @Group index on which this mesh geometry will be used (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead)
---@field public LODIndex integer @LOD on which this mesh geometry will be used. -1 means not used  (#hair_todo: change this to be a dropdown selection menu in FHairLODSettings instead)
---@field public ImportedMeshKey string
local FHairGroupsMeshesSourceDescription = {}

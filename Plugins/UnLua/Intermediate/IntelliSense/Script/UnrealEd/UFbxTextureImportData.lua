---Import data and options used when importing any mesh from FBX
---@class UFbxTextureImportData : UFbxAssetImportData
---@field public bInvertNormalMaps boolean @If importing textures is enabled, this option will cause normal map Y (Green) values to be inverted
---@field public MaterialSearchLocation EMaterialSearchLocation @Specify where we should search for matching materials when importing
---@field public BaseMaterialName FSoftObjectPath @Base material to instance from when importing materials.
---@field public BaseColorName string
---@field public BaseDiffuseTextureName string
---@field public BaseNormalTextureName string
---@field public BaseEmissiveColorName string
---@field public BaseEmmisiveTextureName string
---@field public BaseSpecularTextureName string
---@field public BaseOpacityTextureName string
local UFbxTextureImportData = {}


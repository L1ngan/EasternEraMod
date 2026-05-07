---@class UGenerateStaticMeshLODProcess : UObject
---@field protected SourceStaticMesh UStaticMesh
---@field protected AllDerivedTextures TSet<UTexture2D> @This list is for accumulating derived UTexture2D's created during WriteDerivedTextures(). We have to maintain uproperty references to these or they may be garbage collected
---@field protected DerivedNormalMapTex UTexture2D @Derived Normal Map
---@field protected DerivedMultiTextureBakeResult UTexture2D
local UGenerateStaticMeshLODProcess = {}


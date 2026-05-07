---Options object to define what and how a material should be baked out
---@class UMaterialOptions : UObject
---@field public Properties TArray<FPropertyEntry> @Properties which are supposed to be baked out for the material(s)
---@field public TextureSize FIntPoint @Size of the final texture(s) containing the baked out property data
---@field public LODIndices TArray<integer> @LOD indices for which the materials should be baked out
---@field public bUseMeshData boolean @Determines whether to not allow usage of the source mesh data while baking out material properties
---@field public bUseSpecificUVIndex boolean @Flag whether or not the value of TextureCoordinateIndex should be used while baking out material properties
---@field public TextureCoordinateIndex integer @Specific texture coordinate which should be used to while baking out material properties as the positions stream
local UMaterialOptions = {}


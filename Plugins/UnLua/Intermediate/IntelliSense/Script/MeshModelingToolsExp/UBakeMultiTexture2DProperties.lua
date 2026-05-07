---@class UBakeMultiTexture2DProperties : UInteractiveToolPropertySet
---@field public MaterialIDSourceTextures TArray<UTexture2D> @For each material ID, the source texture that will be resampled in that material's region
---@field public UVLayer string @UV channel to use for the source mesh texture
---@field public UVLayerNamesList TArray<string>
---@field public AllSourceTextures TArray<UTexture2D> @The set of all source textures from all input materials
local UBakeMultiTexture2DProperties = {}

---@return TArray_string_
function UBakeMultiTexture2DProperties:GetUVLayerNamesFunc() end


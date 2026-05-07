---@class UBakeTexture2DProperties : UInteractiveToolPropertySet
---@field public SourceTexture UTexture2D @Source mesh texture that is to be resampled into a new texture
---@field public UVLayer string @UV channel to use for the source mesh texture
---@field public UVLayerNamesList TArray<string>
local UBakeTexture2DProperties = {}

---@return TArray_string_
function UBakeTexture2DProperties:GetUVLayerNamesFunc() end


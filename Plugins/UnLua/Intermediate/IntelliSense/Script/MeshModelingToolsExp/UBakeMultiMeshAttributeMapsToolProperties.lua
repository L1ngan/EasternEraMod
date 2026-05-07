---@class UBakeMultiMeshAttributeMapsToolProperties : UInteractiveToolPropertySet
---@field public MapTypes integer @The map types to generate
---@field public MapPreview string @The map type index to preview
---@field public Resolution EBakeTextureResolution @The pixel resolution of the generated map
---@field public BitDepth EBakeTextureBitDepth @The channel bit depth of the source data for the generated textures
---@field public SamplesPerPixel EBakeTextureSamplesPerPixel @Number of samples per pixel
---@field public SampleFilterMask UTexture2D @Mask texture for filtering out samples/pixels from the output texture
---@field public MapPreviewNamesList TArray<string>
local UBakeMultiMeshAttributeMapsToolProperties = {}

---@return TArray_string_
function UBakeMultiMeshAttributeMapsToolProperties:GetMapPreviewNamesFunc() end


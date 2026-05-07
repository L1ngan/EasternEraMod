---@class UBakeMeshAttributeMapsToolProperties : UInteractiveToolPropertySet
---@field public MapTypes integer @The bake output types to generate
---@field public MapPreview string @The baked output type used for preview in the viewport
---@field public Resolution EBakeTextureResolution @The pixel resolution of the generated textures
---@field public BitDepth EBakeTextureBitDepth @The bit depth for each channel of the generated textures
---@field public SamplesPerPixel EBakeTextureSamplesPerPixel @Number of samples per pixel
---@field public SampleFilterMask UTexture2D @Mask texture for filtering out samples/pixels from the output texture
---@field public MapPreviewNamesList TArray<string>
local UBakeMeshAttributeMapsToolProperties = {}

---@return TArray_string_
function UBakeMeshAttributeMapsToolProperties:GetMapPreviewNamesFunc() end


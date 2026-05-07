---@class UUVEditorBakeUVShellProperties : UInteractiveToolPropertySet
---@field public UVLayer string @The source mesh UV Layer to sample.
---@field public WireframeThickness number @The thickness of the wireframe in pixels.
---@field public WireframeColor FLinearColor @The color of wireframe pixels.
---@field public ShellColor FLinearColor @The color of the UV shell interior pixels.
---@field public BackgroundColor FLinearColor @The color of pixels external to UV shells.
---@field public Resolution EBakeTextureResolution @The pixel resolution of the generated textures
---@field public SamplesPerPixel EBakeTextureSamplesPerPixel @Number of samples per pixel
---@field public SavedPath string @Saved path where last UVSnapshot was saved to. Empty if this is first save out
---@field public Result UTexture2D @Bake
---@field public TargetUVLayerNamesList TArray<string>
local UUVEditorBakeUVShellProperties = {}

---@return TArray_string_
function UUVEditorBakeUVShellProperties:GetTargetUVLayerNamesFunc() end


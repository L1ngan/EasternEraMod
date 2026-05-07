---TextureRenderTarget2D
---2D render target texture resource. This can be used as a target
---for rendering as well as rendered as a regular 2D texture resource.
---@class UTextureRenderTarget2D : UTextureRenderTarget
---@field public SizeX integer @The width of the texture.
---@field public SizeY integer @The height of the texture.
---@field public ClearColor FLinearColor @the color the texture is cleared to
---@field public AddressX integer @The addressing mode to use for the X axis.
---@field public AddressY integer @The addressing mode to use for the Y axis.
---@field public bForceLinearGamma boolean @True to force linear gamma space for this render target
---@field public bGPUSharedFlag boolean @Whether to support GPU sharing of the underlying native texture resource.
---@field public RenderTargetFormat integer @Format of the texture render target. Data written to the render target will be quantized to this format, which can limit the range and precision. The largest format (RTF_RGBA32f) uses 16x more memory and bandwidth than the smallest (RTF_R8) and can greatly affect performance. Use the smallest format that has enough precision and range for what you are doing.
---@field public bSupportsUAV boolean @Whether this render target can be used as an unordered access view
---@field public bAutoGenerateMips boolean @Whether to support Mip maps for this render target texture
---@field public MipsSamplerFilter integer @Sampler filter type for AutoGenerateMips. Defaults to match texture filter.
---@field public MipsAddressU integer @AutoGenerateMips sampler address mode for U channel. Defaults to clamp.
---@field public MipsAddressV integer @AutoGenerateMips sampler address mode for V channel. Defaults to clamp.
---@field public OverrideFormat integer @Normally the format is derived from RenderTargetFormat, this allows code to set the format explicitly.
local UTextureRenderTarget2D = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureRenderTarget2D:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTextureRenderTarget2D:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureRenderTarget2D:AddAssetUserDataOfClass(InUserDataClass) end


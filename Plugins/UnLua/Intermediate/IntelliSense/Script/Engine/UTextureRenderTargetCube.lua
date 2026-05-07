---TextureRenderTargetCube
---Cube render target texture resource. This can be used as a target
---for rendering as well as rendered as a regular cube texture resource.
---@class UTextureRenderTargetCube : UTextureRenderTarget
---@field public SizeX integer @The width of the texture.
---@field public ClearColor FLinearColor @the color the texture is cleared to
---@field public OverrideFormat integer @Specifies the format of the texture data. When OverrideFormat is set to the default (PF_Unknown), the format is determined by bHDR. Use OverrideFormat if you need to set the format explicitly from code instead.
---@field public bHDR boolean @Determines the format of the render target. When enabled, the format is 16-bit RGBA. When disabled, the format is 8-bit BGRA.
---@field public bSupportsUAV boolean @Whether this render target can be used as an unordered access view
---@field public bForceLinearGamma boolean @True to force linear gamma space for this render target
---@field public bAutoGenerateMips boolean @Whether to support Mip maps for this render target texture
---@field public MipsSamplerFilter integer @Sampler filter type for AutoGenerateMips. Defaults to match texture filter.
local UTextureRenderTargetCube = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureRenderTargetCube:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTextureRenderTargetCube:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTextureRenderTargetCube:AddAssetUserDataOfClass(InUserDataClass) end


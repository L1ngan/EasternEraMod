---Implements a texture asset for rendering video tracks from UMediaPlayer assets.
---note: derives directly from UTexture, not from UTexture2D or UTexture2DDynamic
---   maybe should have been UTexture2DDynamic?
---@class UMediaTexture : UTexture
---@field public AddressX integer @The addressing mode to use for the X axis.
---@field public AddressY integer @The addressing mode to use for the Y axis.
---@field public AutoClear boolean @Whether to clear the texture when no media is being played (default = enabled).
---@field public ClearColor FLinearColor @The color used to clear the texture if AutoClear is enabled (default = black).
---@field public EnableGenMips boolean @Basic enablement for mip generation (default = false).
---@field public NewStyleOutput boolean @Allows the media texture to be used as a regular 2D texture in materials, with Color or Linear Color sampler types as opposed to External. Note however that external textures can remain more efficient on lower-end platforms (OpenGL ES).
---@field public CurrentAspectRatio number @Current aspect ratio
---@field public CurrentOrientation integer @Current media orientation
---@field protected MediaPlayer UMediaPlayer @The media player asset associated with this texture. This property is meant for design-time convenience. To change the associated media player at run-time, use the SetMediaPlayer method.
local UMediaTexture = {}

---Creates a new resource for the texture, and updates any cached references to the resource.
---This obviously is just an override to expose to blueprints. Since the base is deprecated in favor
---of the new params version, we remove the virtual override and pass the flags we care about here.
function UMediaTexture:UpdateResource() end

---Set the media player that provides the video samples.
---@param NewMediaPlayer UMediaPlayer
function UMediaTexture:SetMediaPlayer(NewMediaPlayer) end

---Gets the current width of the texture.
---@return integer
function UMediaTexture:GetWidth() end

---Gets the current numbe of mips of the texture.
---@return integer
function UMediaTexture:GetTextureNumMips() end

---Get the media player that provides the video samples.
---@return UMediaPlayer
function UMediaTexture:GetMediaPlayer() end

---Gets the current height of the texture.
---@return integer
function UMediaTexture:GetHeight() end

---Gets the current aspect ratio of the texture.
---@return number
function UMediaTexture:GetAspectRatio() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMediaTexture:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMediaTexture:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMediaTexture:AddAssetUserDataOfClass(InUserDataClass) end


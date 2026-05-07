---@class ULocalFogVolumeComponent : USceneComponent
---@field public RadialFogExtinction number @The density of the radial fog representing its extinction coefficient at the center of the sphere. The final look of the volume is determined by combining the "Coverage=1-Transmittance" of both radial and height fog in order to achieve both soft edges and height fog.
---@field public HeightFogExtinction number @The density of the radial fog representing its extinction coefficient at height 0 in the unit sphere. The final look of the volume is determined by combining the "Coverage=1-Transmittance" of both radial and height fog in order to achieve both soft edges and height fog.
---@field public HeightFogFalloff number @Controls how the density decreases as height increases. Smaller values make the visible transition larger. 1.0 is the lowest value before visual artifact are visible at the horizon.
---@field public HeightFogOffset number @Height offset, relative to the actor Z position.
---@field public FogPhaseG number @Controls the phase `G` parameter, describing the directionality of the scattering within this fog volume.
---@field public FogAlbedo FLinearColor @Controls the albedo of this fog volume.
---@field public FogEmissive FLinearColor @Controls the emissive color of this fog volume.
---@field public FogSortPriority integer @The priority can be used as a way to override the sorting by distance. A lower value means the volume will be considered further away, i.e. it will draw behind the one with a higher priority value.
local ULocalFogVolumeComponent = {}

---@param NewValue number
function ULocalFogVolumeComponent:SetRadialFogExtinction(NewValue) end

---@param NewValue number
function ULocalFogVolumeComponent:SetHeightFogOffset(NewValue) end

---@param NewValue number
function ULocalFogVolumeComponent:SetHeightFogFalloff(NewValue) end

---@param NewValue number
function ULocalFogVolumeComponent:SetHeightFogExtinction(NewValue) end

---@param NewValue number
function ULocalFogVolumeComponent:SetFogPhaseG(NewValue) end

---@param NewValue FLinearColor
function ULocalFogVolumeComponent:SetFogEmissive(NewValue) end

---@param NewValue FLinearColor
function ULocalFogVolumeComponent:SetFogAlbedo(NewValue) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULocalFogVolumeComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function ULocalFogVolumeComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function ULocalFogVolumeComponent:AddAssetUserDataOfClass(InUserDataClass) end


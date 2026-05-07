---A component that represents a heterogeneous volume.
---@class UHeterogeneousVolumeComponent : UMeshComponent
---@field public VolumeResolution FIntVector
---@field public FrameTransform FTransform
---@field public Frame number
---@field public FrameRate number
---@field public StartFrame number
---@field public EndFrame number
---@field public bPlaying boolean
---@field public bLooping boolean
---@field public StreamingMipBias number @Bias to apply to the calculated mip level to stream at. This property essentially influences the distance from the volume at which certain mip levels are no longer requested. Higher values result in earlier mip level transitions.
---@field public bIssueBlockingRequests boolean
---@field public bPivotAtCentroid boolean
---@field public StepFactor number
---@field public ShadowStepFactor number
---@field public ShadowBiasFactor number
---@field public LightingDownsampleFactor number
---@field public MaterialInstanceDynamic UMaterialInstanceDynamic
local UHeterogeneousVolumeComponent = {}

---@param NewValue FIntVector
function UHeterogeneousVolumeComponent:SetVolumeResolution(NewValue) end

---@param NewValue integer
function UHeterogeneousVolumeComponent:SetStreamingMipBias(NewValue) end

---@param NewValue number
function UHeterogeneousVolumeComponent:SetStartFrame(NewValue) end

---@param NewValue boolean
function UHeterogeneousVolumeComponent:SetPlaying(NewValue) end

---@param NewValue boolean
function UHeterogeneousVolumeComponent:SetLooping(NewValue) end

---@param NewValue number
function UHeterogeneousVolumeComponent:SetFrameRate(NewValue) end

---@param NewValue number
function UHeterogeneousVolumeComponent:SetFrame(NewValue) end

---@param NewValue number
function UHeterogeneousVolumeComponent:SetEndFrame(NewValue) end

function UHeterogeneousVolumeComponent:Play() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UHeterogeneousVolumeComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UHeterogeneousVolumeComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UHeterogeneousVolumeComponent:AddAssetUserDataOfClass(InUserDataClass) end


---Utility (blueprint) class for controlling SparseVolumeTexture playback.
---@class UAnimatedSparseVolumeTextureController : UObject
---@field public SparseVolumeTexture USparseVolumeTexture
---@field public Time number
---@field public bIsPlaying boolean
---@field public FrameRate number
---@field public MipLevel integer
---@field public bBlockingStreamingRequests boolean
local UAnimatedSparseVolumeTextureController = {}

---@param DeltaTime number
function UAnimatedSparseVolumeTextureController:Update(DeltaTime) end

function UAnimatedSparseVolumeTextureController:Stop() end

function UAnimatedSparseVolumeTextureController:Play() end

function UAnimatedSparseVolumeTextureController:Pause() end

---@param FrameIndex integer
---@return USparseVolumeTextureFrame
function UAnimatedSparseVolumeTextureController:GetFrameByIndex(FrameIndex) end

---@return number
function UAnimatedSparseVolumeTextureController:GetFractionalFrameIndex() end

---@return number
function UAnimatedSparseVolumeTextureController:GetDuration() end

---@param Frame0 USparseVolumeTextureFrame @[out] 
---@param Frame1 USparseVolumeTextureFrame @[out] 
---@param LerpAlpha number @[out] 
function UAnimatedSparseVolumeTextureController:GetCurrentFramesForInterpolation(Frame0, Frame1, LerpAlpha) end

---@return USparseVolumeTextureFrame
function UAnimatedSparseVolumeTextureController:GetCurrentFrame() end


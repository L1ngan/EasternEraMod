---GeometryCacheComponent, encapsulates a GeometryCache asset instance and implements functionality for rendering/and playback of GeometryCaches
---@class UGeometryCacheComponent : UMeshComponent
---@field public GeometryCache UGeometryCache @Geometry Cache instance referenced by the component
---@field protected bRunning boolean
---@field protected bLooping boolean
---@field protected bExtrapolateFrames boolean @Enable frame extrapolation for sub-frame sampling of non-constant topologies with imported motion vectors
---@field protected StartTimeOffset number
---@field protected PlaybackSpeed number
---@field protected MotionVectorScale number @Scale factor to apply to the imported motion vectors
---@field protected NumTracks integer
---@field protected ElapsedTime number
---@field protected Duration number @Duration of the animation (maximum time)
---@field protected bManualTick boolean
---@field protected bOverrideWireframeColor boolean @Do we override the wireframe rendering color?
---@field protected WireframeOverrideColor FLinearColor @The wireframe override color.
local UGeometryCacheComponent = {}

---@param Time number
---@param bInIsRunning boolean
---@param bInBackwards boolean
---@param bInIsLooping boolean
function UGeometryCacheComponent:TickAtThisTime(Time, bInIsRunning, bInBackwards, bInIsLooping) end

---Stop playback of GeometryCache
function UGeometryCacheComponent:Stop() end

---Set the color, used when overriding the wireframe color is enabled.
---@param Color FLinearColor
function UGeometryCacheComponent:SetWireframeOverrideColor(Color) end

---Set current start time offset for GeometryCache.
---@param NewStartTimeOffset number
function UGeometryCacheComponent:SetStartTimeOffset(NewStartTimeOffset) end

---Set new playback speed for GeometryCache.
---@param NewPlaybackSpeed number
function UGeometryCacheComponent:SetPlaybackSpeed(NewPlaybackSpeed) end

---Override wireframe color?
---@param bOverride boolean
function UGeometryCacheComponent:SetOverrideWireframeColor(bOverride) end

---Set new motion vector scale.
---@param NewMotionVectorScale number
function UGeometryCacheComponent:SetMotionVectorScale(NewMotionVectorScale) end

---Set whether this GeometryCache is looping or not.
---@param bNewLooping boolean
function UGeometryCacheComponent:SetLooping(bNewLooping) end

---Change the Geometry Cache used by this instance.
---@param NewGeomCache UGeometryCache
---@return boolean
function UGeometryCacheComponent:SetGeometryCache(NewGeomCache) end

---Set whether this GeometryCache is extrapolating frames.
---@param bNewExtrapolating boolean
function UGeometryCacheComponent:SetExtrapolateFrames(bNewExtrapolating) end

---Start playback of GeometryCache from the end and play in reverse
function UGeometryCacheComponent:PlayReversedFromEnd() end

---Start playback of GeometryCache in reverse
function UGeometryCacheComponent:PlayReversed() end

---Start playback of GeometryCache from the start
function UGeometryCacheComponent:PlayFromStart() end

---Start playback of GeometryCache
function UGeometryCacheComponent:Play() end

---Pause playback of GeometryCache
function UGeometryCacheComponent:Pause() end

---Get whether this GeometryCache is playing in reverse or not.
---@return boolean
function UGeometryCacheComponent:IsPlayingReversed() end

---Get whether this GeometryCache is playing or not.
---@return boolean
function UGeometryCacheComponent:IsPlaying() end

---Get whether this GeometryCache is looping or not.
---@return boolean
function UGeometryCacheComponent:IsLooping() end

---Get whether this GeometryCache is extrapolating frames.
---@return boolean
function UGeometryCacheComponent:IsExtrapolatingFrames() end

---Get the wireframe override color, used when overriding the wireframe color is enabled.
---@return FLinearColor
function UGeometryCacheComponent:GetWireframeOverrideColor() end

---Get current start time offset for GeometryCache.
---@return number
function UGeometryCacheComponent:GetStartTimeOffset() end

---Get current playback speed for GeometryCache.
---@return number
function UGeometryCacheComponent:GetPlaybackSpeed() end

---Get the playback direction for GeometryCache.
---@return number
function UGeometryCacheComponent:GetPlaybackDirection() end

---Check whether we are overriding the wireframe color or not.
---@return boolean
function UGeometryCacheComponent:GetOverrideWireframeColor() end

---Get the number of tracks
---@return integer
function UGeometryCacheComponent:GetNumberOfTracks() end

---Get the number of frames
---@return integer
function UGeometryCacheComponent:GetNumberOfFrames() end

---Get the motion vector scale.
---@return number
function UGeometryCacheComponent:GetMotionVectorScale() end

---Get the current elapsed time for GeometryCache. Doesn't include the influence of StartTimeOffset
---@return number
function UGeometryCacheComponent:GetElapsedTime() end

---Get the duration of the playback
---@return number
function UGeometryCacheComponent:GetDuration() end

---Get the current animation time for GeometryCache. Includes the influence of elapsed time and SetStartTimeOffset
---@return number
function UGeometryCacheComponent:GetAnimationTime() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGeometryCacheComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UGeometryCacheComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UGeometryCacheComponent:AddAssetUserDataOfClass(InUserDataClass) end


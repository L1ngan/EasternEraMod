---TimelineComponent holds a series of events, floats, vectors or colors with associated keyframes.
---Events can be triggered at keyframes along the timeline.
---Floats, vectors, and colors are interpolated between keyframes along the timeline.
---@class UTimelineComponent : UActorComponent
---@field private TheTimeline FTimeline @The actual timeline structure
---@field private bIgnoreTimeDilation boolean @True if global time dilation should be ignored by this timeline, false otherwise.
local UTimelineComponent = {}

---Stop playback of timeline
function UTimelineComponent:Stop() end

---Update a certain vector track's curve
---@param NewVectorCurve UCurveVector
---@param VectorTrackName string
function UTimelineComponent:SetVectorCurve(NewVectorCurve, VectorTrackName) end

---Set the delegate to call after each timeline tick
---@param NewTimelinePostUpdateFunc Delegate
function UTimelineComponent:SetTimelinePostUpdateFunc(NewTimelinePostUpdateFunc) end

---Sets the length mode of the timeline
---@param NewLengthMode integer
function UTimelineComponent:SetTimelineLengthMode(NewLengthMode) end

---Set length of the timeline
---@param NewLength number
function UTimelineComponent:SetTimelineLength(NewLength) end

---Set the delegate to call when timeline is finished
---@param NewTimelineFinishedFunc Delegate
function UTimelineComponent:SetTimelineFinishedFunc(NewTimelineFinishedFunc) end

---Sets the new play rate for this timeline
---@param NewRate number
function UTimelineComponent:SetPlayRate(NewRate) end

---Jump to a position in the timeline.
---@param NewPosition number
---@param bFireEvents boolean
---@param bFireUpdate boolean @[opt] 
function UTimelineComponent:SetPlaybackPosition(NewPosition, bFireEvents, bFireUpdate) end

---Set the new playback position time to use
---@param NewTime number
function UTimelineComponent:SetNewTime(NewTime) end

---true means we would loop, false means we should not.
---@param bNewLooping boolean
function UTimelineComponent:SetLooping(bNewLooping) end

---Update a certain linear color track's curve
---@param NewLinearColorCurve UCurveLinearColor
---@param LinearColorTrackName string
function UTimelineComponent:SetLinearColorCurve(NewLinearColorCurve, LinearColorTrackName) end

---Set whether to ignore time dilation.
---@param bNewIgnoreTimeDilation boolean
function UTimelineComponent:SetIgnoreTimeDilation(bNewIgnoreTimeDilation) end

---Update a certain float track's curve
---@param NewFloatCurve UCurveFloat
---@param FloatTrackName string
function UTimelineComponent:SetFloatCurve(NewFloatCurve, FloatTrackName) end

---Start playback of timeline in reverse from the end
function UTimelineComponent:ReverseFromEnd() end

---Start playback of timeline in reverse
function UTimelineComponent:Reverse() end

---Start playback of timeline from the start
function UTimelineComponent:PlayFromStart() end

---Start playback of timeline
function UTimelineComponent:Play() end

---@param OldTimeline FTimeline @[out] 
function UTimelineComponent:OnRep_Timeline(OldTimeline) end

---Get whether we are reversing or not
---@return boolean
function UTimelineComponent:IsReversing() end

---Get whether this timeline is playing or not.
---@return boolean
function UTimelineComponent:IsPlaying() end

---Get whether we are looping or not
---@return boolean
function UTimelineComponent:IsLooping() end

---Get length of the timeline
---@return number
function UTimelineComponent:GetTimelineLength() end

---Get length of the timeline divided by the play rate
---@return number
function UTimelineComponent:GetScaledTimelineLength() end

---Get the current play rate for this timeline
---@return number
function UTimelineComponent:GetPlayRate() end

---Get the current playback position of the Timeline
---@return number
function UTimelineComponent:GetPlaybackPosition() end

---Get whether to ignore time dilation.
---@return boolean
function UTimelineComponent:GetIgnoreTimeDilation() end

---Add a vector interpolation to the timeline
---@param VectorCurve UCurveVector
---@param InterpFunc Delegate
---@param PropertyName string @[opt] 
---@param TrackName string @[opt] 
function UTimelineComponent:AddInterpVector(VectorCurve, InterpFunc, PropertyName, TrackName) end

---Add a linear color interpolation to the timeline
---@param LinearColorCurve UCurveLinearColor
---@param InterpFunc Delegate
---@param PropertyName string @[opt] 
---@param TrackName string @[opt] 
function UTimelineComponent:AddInterpLinearColor(LinearColorCurve, InterpFunc, PropertyName, TrackName) end

---Add a float interpolation to the timeline
---@param FloatCurve UCurveFloat
---@param InterpFunc Delegate
---@param PropertyName string @[opt] 
---@param TrackName string @[opt] 
function UTimelineComponent:AddInterpFloat(FloatCurve, InterpFunc, PropertyName, TrackName) end

---Add a callback event to the timeline
---@param Time number
---@param EventFunc Delegate
function UTimelineComponent:AddEvent(Time, EventFunc) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTimelineComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UTimelineComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UTimelineComponent:AddAssetUserDataOfClass(InUserDataClass) end


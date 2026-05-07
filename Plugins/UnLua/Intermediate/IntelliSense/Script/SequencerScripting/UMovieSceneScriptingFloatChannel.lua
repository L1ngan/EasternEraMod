---@class UMovieSceneScriptingFloatChannel : UMovieSceneScriptingChannel
local UMovieSceneScriptingFloatChannel = {}

---Transform the keys in time in the channel by an offset, scale and pivot
---@param OffsetFrame FFrameNumber
---@param Scale number
---@param PivotFrame FFrameNumber
---@param ScriptingRange FSequencerScriptingRange
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingFloatChannel:Transform(OffsetFrame, Scale, PivotFrame, ScriptingRange, TimeUnit) end

---Sets the Pre-infinity extrapolation state. See ERichCurveExtrapolation for more detail.
---@param InExtrapolation integer
function UMovieSceneScriptingFloatChannel:SetPreInfinityExtrapolation(InExtrapolation) end

---Sets the Post-infinity extrapolation state. See ERichCurveExtrapolation for more detail.
---@param InExtrapolation integer
function UMovieSceneScriptingFloatChannel:SetPostInfinityExtrapolation(InExtrapolation) end

---Set this channel's default value that should be used when no keys are present.
---Sets bHasDefaultValue to true automatically.
---@param InDefaultValue number
function UMovieSceneScriptingFloatChannel:SetDefault(InDefaultValue) end

---Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.
---@param Key UMovieSceneScriptingKey
function UMovieSceneScriptingFloatChannel:RemoveKey(Key) end

---Remove this channel's default value causing the channel to have no effect where no keys are present
function UMovieSceneScriptingFloatChannel:RemoveDefault() end

---
---@return boolean
function UMovieSceneScriptingFloatChannel:HasDefault() end

---
---@return integer
function UMovieSceneScriptingFloatChannel:GetPreInfinityExtrapolation() end

---
---@return integer
function UMovieSceneScriptingFloatChannel:GetPostInfinityExtrapolation() end

---Returns number of keys in this channel.
---@return integer
function UMovieSceneScriptingFloatChannel:GetNumKeys() end

---Gets the keys in this channel specified by the specific index
---                      Returns all keys specified by the indices, even if out of range.
---@param Indices TArray_integer_
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingFloatChannel:GetKeysByIndex(Indices) end

---Gets all of the keys in this channel.
---                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingFloatChannel:GetKeys() end

---Get this channel's default value that will be used when no keys are present. Only a valid
---value when HasDefault() returns true.
---@return number
function UMovieSceneScriptingFloatChannel:GetDefault() end

---Gets baked keys in this channel.
---                      Returns baked keys in the specified range.
---@param Range FSequencerScriptingRange
---@param FrameRate FFrameRate
---@return TArray_number_
function UMovieSceneScriptingFloatChannel:EvaluateKeys(Range, FrameRate) end

---Compute the effective range of this channel, for example, the extents of its key times
---@return FSequencerScriptingRange
function UMovieSceneScriptingFloatChannel:ComputeEffectiveRange() end

---Add a key to this channel. This initializes a new key and returns a reference to it.
---@param InTime FFrameNumber
---@param NewValue number
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@param InInterpolation EMovieSceneKeyInterpolation @[opt] 
---@return UMovieSceneScriptingFloatKey
function UMovieSceneScriptingFloatChannel:AddKey(InTime, NewValue, SubFrame, TimeUnit, InInterpolation) end


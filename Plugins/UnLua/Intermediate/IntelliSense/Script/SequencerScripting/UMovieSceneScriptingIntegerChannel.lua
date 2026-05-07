---@class UMovieSceneScriptingIntegerChannel : UMovieSceneScriptingChannel
local UMovieSceneScriptingIntegerChannel = {}

---Transform the keys in time in the channel by an offset, scale and pivot
---@param OffsetFrame FFrameNumber
---@param Scale number
---@param PivotFrame FFrameNumber
---@param ScriptingRange FSequencerScriptingRange
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingIntegerChannel:Transform(OffsetFrame, Scale, PivotFrame, ScriptingRange, TimeUnit) end

---Set this channel to evaluate linear keys with interpolation.
---@param bInInterpolateLinearKeys boolean
function UMovieSceneScriptingIntegerChannel:SetInterpolateLinearKeys(bInInterpolateLinearKeys) end

---Set this channel's default value that should be used when no keys are present.
---Sets bHasDefaultValue to true automatically.
---@param InDefaultValue integer
function UMovieSceneScriptingIntegerChannel:SetDefault(InDefaultValue) end

---Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.
---@param Key UMovieSceneScriptingKey
function UMovieSceneScriptingIntegerChannel:RemoveKey(Key) end

---Remove this channel's default value causing the channel to have no effect where no keys are present
function UMovieSceneScriptingIntegerChannel:RemoveDefault() end

---
---@return boolean
function UMovieSceneScriptingIntegerChannel:HasDefault() end

---Returns number of keys in this channel.
---@return integer
function UMovieSceneScriptingIntegerChannel:GetNumKeys() end

---Gets the keys in this channel specified by the specific index
---                      Returns all keys specified by the indices, even if out of range.
---@param Indices TArray_integer_
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingIntegerChannel:GetKeysByIndex(Indices) end

---Gets all of the keys in this channel.
---                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingIntegerChannel:GetKeys() end

---Get whether this channel will evaluate linear keys with interpolation.
---@return boolean
function UMovieSceneScriptingIntegerChannel:GetInterpolateLinearKeys() end

---Get this channel's default value that will be used when no keys are present. Only a valid
---value when HasDefault() returns true.
---@return integer
function UMovieSceneScriptingIntegerChannel:GetDefault() end

---Gets baked keys in this channel.
---                      Returns baked keys in the specified range.
---@param Range FSequencerScriptingRange
---@param FrameRate FFrameRate
---@return TArray_integer_
function UMovieSceneScriptingIntegerChannel:EvaluateKeys(Range, FrameRate) end

---Add a key to this channel. This initializes a new key and returns a reference to it.
---@param InTime FFrameNumber
---@param NewValue integer
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return UMovieSceneScriptingIntegerKey
function UMovieSceneScriptingIntegerChannel:AddKey(InTime, NewValue, SubFrame, TimeUnit) end


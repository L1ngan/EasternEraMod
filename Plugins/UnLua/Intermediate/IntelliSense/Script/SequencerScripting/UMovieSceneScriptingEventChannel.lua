---@class UMovieSceneScriptingEventChannel : UMovieSceneScriptingChannel
local UMovieSceneScriptingEventChannel = {}

---Transform the keys in time in the channel by an offset, scale and pivot
---@param OffsetFrame FFrameNumber
---@param Scale number
---@param PivotFrame FFrameNumber
---@param ScriptingRange FSequencerScriptingRange
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingEventChannel:Transform(OffsetFrame, Scale, PivotFrame, ScriptingRange, TimeUnit) end

---Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.
---@param Key UMovieSceneScriptingKey
function UMovieSceneScriptingEventChannel:RemoveKey(Key) end

---Gets the keys in this channel specified by the specific index
---                      Returns all keys specified by the indices, even if out of range.
---@param Indices TArray_integer_
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingEventChannel:GetKeysByIndex(Indices) end

---Gets all of the keys in this channel.
---                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingEventChannel:GetKeys() end

---Add a key to this channel. This initializes a new key and returns a reference to it.
---@param InTime FFrameNumber
---@param NewValue FMovieSceneEvent
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return UMovieSceneScriptingEventKey
function UMovieSceneScriptingEventChannel:AddKey(InTime, NewValue, SubFrame, TimeUnit) end


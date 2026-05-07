---@class UMovieSceneScriptingActorReferenceChannel : UMovieSceneScriptingChannel
local UMovieSceneScriptingActorReferenceChannel = {}

---Transform the keys in time in the channel by an offset, scale and pivot
---@param OffsetFrame FFrameNumber
---@param Scale number
---@param PivotFrame FFrameNumber
---@param ScriptingRange FSequencerScriptingRange
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingActorReferenceChannel:Transform(OffsetFrame, Scale, PivotFrame, ScriptingRange, TimeUnit) end

---Set this channel's default value that should be used when no keys are present.
---Sets bHasDefaultValue to true automatically.
---@param InDefaultValue FMovieSceneObjectBindingID
function UMovieSceneScriptingActorReferenceChannel:SetDefault(InDefaultValue) end

---Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.
---@param Key UMovieSceneScriptingKey
function UMovieSceneScriptingActorReferenceChannel:RemoveKey(Key) end

---Remove this channel's default value causing the channel to have no effect where no keys are present
function UMovieSceneScriptingActorReferenceChannel:RemoveDefault() end

---
---@return boolean
function UMovieSceneScriptingActorReferenceChannel:HasDefault() end

---Gets the keys in this channel specified by the specific index
---                      Returns all keys specified by the indices, even if out of range.
---@param Indices TArray_integer_
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingActorReferenceChannel:GetKeysByIndex(Indices) end

---Gets all of the keys in this channel.
---                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingActorReferenceChannel:GetKeys() end

---Get this channel's default value that will be used when no keys are present. Only a valid
---value when HasDefault() returns true.
---@return FMovieSceneObjectBindingID
function UMovieSceneScriptingActorReferenceChannel:GetDefault() end

---Add a key to this channel. This initializes a new key and returns a reference to it.
---@param InTime FFrameNumber
---@param NewValue FMovieSceneObjectBindingID
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return UMovieSceneScriptingActorReferenceKey
function UMovieSceneScriptingActorReferenceChannel:AddKey(InTime, NewValue, SubFrame, TimeUnit) end


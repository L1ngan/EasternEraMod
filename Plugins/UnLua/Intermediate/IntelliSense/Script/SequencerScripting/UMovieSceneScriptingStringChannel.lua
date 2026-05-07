---@class UMovieSceneScriptingStringChannel : UMovieSceneScriptingChannel
local UMovieSceneScriptingStringChannel = {}

---Transform the OffsetFrame in time in the channel by an offset, scale and pivot
---@param OffsetFrame FFrameNumber
---@param Scale number
---@param PivotFrame FFrameNumber
---@param ScriptingRange FSequencerScriptingRange
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingStringChannel:Transform(OffsetFrame, Scale, PivotFrame, ScriptingRange, TimeUnit) end

---Set this channel's default value that should be used when no keys are present.
---Sets bHasDefaultValue to true automatically.
---@param InDefaultValue string
function UMovieSceneScriptingStringChannel:SetDefault(InDefaultValue) end

---Removes the specified key. Does nothing if the key is not specified or the key belongs to another channel.
---@param Key UMovieSceneScriptingKey
function UMovieSceneScriptingStringChannel:RemoveKey(Key) end

---Remove this channel's default value causing the channel to have no effect where no keys are present
function UMovieSceneScriptingStringChannel:RemoveDefault() end

---
---@return boolean
function UMovieSceneScriptingStringChannel:HasDefault() end

---Gets the keys in this channel specified by the specific index
---                      Returns all keys specified by the indices, even if out of range.
---@param Indices TArray_integer_
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingStringChannel:GetKeysByIndex(Indices) end

---Gets all of the keys in this channel.
---                      Returns all keys even if clipped by the owning section's boundaries or outside of the current sequence play range.
---@return TArray_UMovieSceneScriptingKey_
function UMovieSceneScriptingStringChannel:GetKeys() end

---Get this channel's default value that will be used when no keys are present. Only a valid
---value when HasDefault() returns true.
---@return string
function UMovieSceneScriptingStringChannel:GetDefault() end

---Add a key to this channel. This initializes a new key and returns a reference to it.
---@param InTime FFrameNumber
---@param NewValue string
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return UMovieSceneScriptingStringKey
function UMovieSceneScriptingStringChannel:AddKey(InTime, NewValue, SubFrame, TimeUnit) end


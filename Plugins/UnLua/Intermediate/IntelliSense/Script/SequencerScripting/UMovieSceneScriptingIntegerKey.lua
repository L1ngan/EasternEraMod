---Exposes a Sequencer integer type key to Python/Blueprints.
---Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.
---@class UMovieSceneScriptingIntegerKey : UMovieSceneScriptingKey
local UMovieSceneScriptingIntegerKey = {}

---Sets the value for this key, reflecting it in the owning channel.
---@param InNewValue integer
function UMovieSceneScriptingIntegerKey:SetValue(InNewValue) end

---Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.
---@param NewFrameNumber FFrameNumber
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingIntegerKey:SetTime(NewFrameNumber, SubFrame, TimeUnit) end

---Gets the value for this key from the owning channel.
---@return integer
function UMovieSceneScriptingIntegerKey:GetValue() end

---Gets the time for this key from the owning channel.
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FFrameTime
function UMovieSceneScriptingIntegerKey:GetTime(TimeUnit) end


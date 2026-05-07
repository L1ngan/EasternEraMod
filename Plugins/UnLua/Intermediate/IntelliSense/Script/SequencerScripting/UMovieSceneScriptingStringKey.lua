---Exposes a Sequencer string type key to Python/Blueprints.
---Stores a reference to the data so changes to this class are forwarded onto the underlying data structures.
---@class UMovieSceneScriptingStringKey : UMovieSceneScriptingKey
local UMovieSceneScriptingStringKey = {}

---Sets the value for this key, reflecting it in the owning channel.
---@param InNewValue string
function UMovieSceneScriptingStringKey:SetValue(InNewValue) end

---Sets the time for this key in the owning channel. Will replace any key that already exists at that frame number in this channel.
---@param NewFrameNumber FFrameNumber
---@param SubFrame number @[opt] 
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
function UMovieSceneScriptingStringKey:SetTime(NewFrameNumber, SubFrame, TimeUnit) end

---Gets the value for this key from the owning channel.
---@return string
function UMovieSceneScriptingStringKey:GetValue() end

---Gets the time for this key from the owning channel.
---@param TimeUnit EMovieSceneTimeUnit @[opt] 
---@return FFrameTime
function UMovieSceneScriptingStringKey:GetTime(TimeUnit) end


---A class responsible of fetching a timecode from a source.
---Note, FApp::GetTimecode and FApp::GetTimecodeFramerate should be used to retrieve
---the current system Timecode and Framerate.
---@class UTimecodeProvider : UObject
---@field public FrameDelay number @Number of frames to subtract from the qualified frame time when GetDelayedQualifiedFrameTime or GetDelayedTimecode is called.
local UTimecodeProvider = {}

---Return the frame time converted into a timecode value.
---@return FTimecode
function UTimecodeProvider:GetTimecode() end

---The state of the TimecodeProvider and if it's currently synchronized and the Timecode and FrameRate getters are valid.
---@return ETimecodeProviderSynchronizationState
function UTimecodeProvider:GetSynchronizationState() end

---Return current frame time.
---Since it may be called several times per frame, it is suggested to return a cached value.
---@return FQualifiedFrameTime
function UTimecodeProvider:GetQualifiedFrameTime() end

---Return the frame rate of the frame time.
---@return FFrameRate
function UTimecodeProvider:GetFrameRate() end

---Return the delayed frame time converted into a timecode value.
---@return FTimecode
function UTimecodeProvider:GetDelayedTimecode() end

---Return current frame time with FrameDelay applied.
---Only assume valid when GetSynchronizationState() returns Synchronized.
---@return FQualifiedFrameTime
function UTimecodeProvider:GetDelayedQualifiedFrameTime() end

---Fetch current timecode from its source. e.g. From hardware/network/file/etc.
---It is recommended to cache the fetched timecode.
---@param OutFrameTime FQualifiedFrameTime @[out] 
---@return boolean
function UTimecodeProvider:FetchTimecode(OutFrameTime) end

---Update the state of the provider. Call it to ensure timecode and state are updated.
---It is suggested to fetch timecode from its source and cache it for the getters.
function UTimecodeProvider:FetchAndUpdate() end


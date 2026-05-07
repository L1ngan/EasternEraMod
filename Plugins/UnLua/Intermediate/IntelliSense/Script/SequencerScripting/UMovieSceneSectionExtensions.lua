---Function library containing methods that should be hoisted onto UMovieSceneSections for scripting
---@class UMovieSceneSectionExtensions : UBlueprintFunctionLibrary
local UMovieSceneSectionExtensions = {}

---Set start time in seconds
---@param Section UMovieSceneSection
---@param StartTime number
function UMovieSceneSectionExtensions.SetStartFrameSeconds(Section, StartTime) end

---Set start frame bounded
---@param Section UMovieSceneSection
---@param bIsBounded boolean
function UMovieSceneSectionExtensions.SetStartFrameBounded(Section, bIsBounded) end

---Set start frame
---@param Section UMovieSceneSection
---@param StartFrame integer
function UMovieSceneSectionExtensions.SetStartFrame(Section, StartFrame) end

---Set range in seconds
---@param Section UMovieSceneSection
---@param StartTime number
---@param EndTime number
function UMovieSceneSectionExtensions.SetRangeSeconds(Section, StartTime, EndTime) end

---Set range
---@param Section UMovieSceneSection
---@param StartFrame integer
---@param EndFrame integer
function UMovieSceneSectionExtensions.SetRange(Section, StartFrame, EndFrame) end

---Set end time in seconds
---@param Section UMovieSceneSection
---@param EndTime number
function UMovieSceneSectionExtensions.SetEndFrameSeconds(Section, EndTime) end

---Set end frame bounded
---@param Section UMovieSceneSection
---@param bIsBounded boolean
function UMovieSceneSectionExtensions.SetEndFrameBounded(Section, bIsBounded) end

---Set end frame
---@param Section UMovieSceneSection
---@param EndFrame integer
function UMovieSceneSectionExtensions.SetEndFrame(Section, EndFrame) end

---Has start frame
---@param Section UMovieSceneSection
---@return boolean
function UMovieSceneSectionExtensions.HasStartFrame(Section) end

---Has end frame
---@param Section UMovieSceneSection
---@return boolean
function UMovieSceneSectionExtensions.HasEndFrame(Section) end

---Get start time in seconds. Will throw an exception if section has no start frame, use HasStartFrame to check first.
---@param Section UMovieSceneSection
---@return number
function UMovieSceneSectionExtensions.GetStartFrameSeconds(Section) end

---Get start frame. Will throw an exception if section has no start frame, use HasStartFrame to check first.
---@param Section UMovieSceneSection
---@return integer
function UMovieSceneSectionExtensions.GetStartFrame(Section) end

---Get the frame in the space of its parent sequence
---@param Section UMovieSceneSubSection
---@param InFrame integer
---@param ParentSequence UMovieSceneSequence
---@return integer
function UMovieSceneSectionExtensions.GetParentSequenceFrame(Section, InFrame, ParentSequence) end

---Get end time in seconds. Will throw an exception if section has no end frame, use HasEndFrame to check first.
---@param Section UMovieSceneSection
---@return number
function UMovieSceneSectionExtensions.GetEndFrameSeconds(Section) end

---Get end frame. Will throw an exception if section has no end frame, use HasEndFrame to check first.
---@param Section UMovieSceneSection
---@return integer
function UMovieSceneSectionExtensions.GetEndFrame(Section) end

---Find all channels that belong to the specified UMovieSceneSection that match the specific type. This will filter out any children who do not inherit
---from the specified type for you.
---@param Section UMovieSceneSection
---@param ChannelType TSubclassOf_UMovieSceneScriptingChannel_
---@return TArray_UMovieSceneScriptingChannel_
function UMovieSceneSectionExtensions.GetChannelsByType(Section, ChannelType) end

---Get channel from specified section and channel name
---@param Section UMovieSceneSection
---@param ChannelName string
---@return UMovieSceneScriptingChannel
function UMovieSceneSectionExtensions.GetChannel(Section, ChannelName) end

---Get start time of the AutoSize in seconds. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.
---@param Section UMovieSceneSection
---@return number
function UMovieSceneSectionExtensions.GetAutoSizeStartFrameSeconds(Section) end

---Get start frame of the AutoSize. Will throw an exception if section has no start frame, use GetAutoSizeHasStartFrame to check first.
---@param Section UMovieSceneSection
---@return integer
function UMovieSceneSectionExtensions.GetAutoSizeStartFrame(Section) end

---Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a start frame.
---@param Section UMovieSceneSection
---@return boolean
function UMovieSceneSectionExtensions.GetAutoSizeHasStartFrame(Section) end

---Checks to see if this section has an AutoSize implementation, and if so, if that implementation has a end frame.
---@param Section UMovieSceneSection
---@return boolean
function UMovieSceneSectionExtensions.GetAutoSizeHasEndFrame(Section) end

---Get end time of the AutoSize seconds. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.
---@param Section UMovieSceneSection
---@return number
function UMovieSceneSectionExtensions.GetAutoSizeEndFrameSeconds(Section) end

---Get end frame of the AutoSize. Will throw an exception if section has no end frame, use GetAutoSizeHasEndFrame to check first.
---@param Section UMovieSceneSection
---@return integer
function UMovieSceneSectionExtensions.GetAutoSizeEndFrame(Section) end

---Find all channels that belong to the specified UMovieSceneSection. Some sections have many channels (such as
---Transforms containing 9 double channels to represent Translation/Rotation/Scale), and a section may have mixed
---channel types.
---@param Section UMovieSceneSection
---@return TArray_UMovieSceneScriptingChannel_
function UMovieSceneSectionExtensions.GetAllChannels(Section) end


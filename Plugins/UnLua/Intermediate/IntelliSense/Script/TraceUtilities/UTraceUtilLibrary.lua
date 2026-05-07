---@class UTraceUtilLibrary : UBlueprintFunctionLibrary
local UTraceUtilLibrary = {}

---Triggers an Unreal Insights screenshot
---@param Name string
---@param bShowUI boolean
function UTraceUtilLibrary.TraceScreenshot(Name, bShowUI) end

---Traces a begin event for a region with specified name.
---@param Name string
function UTraceUtilLibrary.TraceMarkRegionStart(Name) end

---Traces an end event for a region with specified name.
---@param Name string
function UTraceUtilLibrary.TraceMarkRegionEnd(Name) end

---Traces a bookmark with specified name.
---@param Name string
function UTraceUtilLibrary.TraceBookmark(Name) end

---@param ChannelName string
---@param enabled boolean
---@return boolean
function UTraceUtilLibrary.ToggleChannel(ChannelName, enabled) end

---@return boolean
function UTraceUtilLibrary.StopTracing() end

---@param FileName string
---@param Channels TArray_string_
---@return boolean
function UTraceUtilLibrary.StartTraceToFile(FileName, Channels) end

---@param Target string
---@param Channels TArray_string_
---@return boolean
function UTraceUtilLibrary.StartTraceSendTo(Target, Channels) end

---@return boolean
function UTraceUtilLibrary.ResumeTracing() end

---@return boolean
function UTraceUtilLibrary.PauseTracing() end

---@return boolean
function UTraceUtilLibrary.IsTracing() end

---@param ChannelName string
---@return boolean
function UTraceUtilLibrary.IsChannelEnabled(ChannelName) end

---@return TArray_string_
function UTraceUtilLibrary.GetEnabledChannels() end

---@return TArray_string_
function UTraceUtilLibrary.GetAllChannels() end


---@class UTimeManagementBlueprintLibrary : UBlueprintFunctionLibrary
local UTimeManagementBlueprintLibrary = {}

---Converts the specified time from one framerate to another framerate. This is useful for converting between tick resolution and display rate.
---@param SourceTime FFrameTime
---@param SourceRate FFrameRate
---@param DestinationRate FFrameRate
---@return FFrameTime
function UTimeManagementBlueprintLibrary.TransformTime(SourceTime, SourceRate, DestinationRate) end

---Subtraction (FrameNumber A - int B)
---@param A FFrameNumber
---@param B integer
---@return FFrameNumber
function UTimeManagementBlueprintLibrary.Subtract_FrameNumberInteger(A, B) end

---Subtraction (FrameNumber A - FrameNumber B)
---@param A FFrameNumber
---@param B FFrameNumber
---@return FFrameNumber
function UTimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber(A, B) end

---Snaps the given SourceTime to the nearest frame in the specified Destination Framerate. Useful for determining the nearest frame for another resolution. Returns the frame time in the destination frame rate.
---@param SourceTime FFrameTime
---@param SourceRate FFrameRate
---@param SnapToRate FFrameRate
---@return FFrameTime
function UTimeManagementBlueprintLibrary.SnapFrameTimeToRate(SourceTime, SourceRate, SnapToRate) end

---Multiplies a value in seconds against a FrameRate to get a new FrameTime.
---@param TimeInSeconds number
---@param FrameRate FFrameRate
---@return FFrameTime
function UTimeManagementBlueprintLibrary.Multiply_SecondsFrameRate(TimeInSeconds, FrameRate) end

---Multiply (FrameNumber A * B)
---@param A FFrameNumber
---@param B integer
---@return FFrameNumber
function UTimeManagementBlueprintLibrary.Multiply_FrameNumberInteger(A, B) end

---Checks if this framerate is an even multiple of another framerate, ie: 60 is a multiple of 30, but 59.94 is not.
---@param InFrameRate FFrameRate
---@param OtherFramerate FFrameRate
---@return boolean
function UTimeManagementBlueprintLibrary.IsValid_MultipleOf(InFrameRate, OtherFramerate) end

---Verifies that this is a valid framerate with a non-zero denominator.
---@param InFrameRate FFrameRate
---@return boolean
function UTimeManagementBlueprintLibrary.IsValid_Framerate(InFrameRate) end

---Gets the current timecode frame rate.
---@return FFrameRate
function UTimeManagementBlueprintLibrary.GetTimecodeFrameRate() end

---Get the current timecode of the engine.
---@return FTimecode
function UTimeManagementBlueprintLibrary.GetTimecode() end

---Divide (FrameNumber A / B)
---@param A FFrameNumber
---@param B integer
---@return FFrameNumber
function UTimeManagementBlueprintLibrary.Divide_FrameNumberInteger(A, B) end

---Converts an Timecode to a string (hh:mm:ss:ff). If bForceSignDisplay then the number sign will always be prepended instead of just when expressing a negative time.
---@param InTimecode FTimecode
---@param bForceSignDisplay boolean @[opt] 
---@return string
function UTimeManagementBlueprintLibrary.Conv_TimecodeToString(InTimecode, bForceSignDisplay) end

---Converts an QualifiedFrameTime to seconds.
---@param InFrameTime FQualifiedFrameTime
---@return number
function UTimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds(InFrameTime) end

---@param InFrameRate FFrameRate
---@return number
function UTimeManagementBlueprintLibrary.Conv_FrameRateToSeconds(InFrameRate) end

---Converts a FrameRate to an interval float representing the frame time in seconds ie: 1/30 returns 0.0333333
---@param InFrameRate FFrameRate
---@return number
function UTimeManagementBlueprintLibrary.Conv_FrameRateToInterval(InFrameRate) end

---Converts a FrameNumber to an int32 for use in functions that take int32 frame counts for convenience.
---@param InFrameNumber FFrameNumber
---@return integer
function UTimeManagementBlueprintLibrary.Conv_FrameNumberToInteger(InFrameNumber) end

---Addition (FrameNumber A + int B)
---@param A FFrameNumber
---@param B integer
---@return FFrameNumber
function UTimeManagementBlueprintLibrary.Add_FrameNumberInteger(A, B) end

---Addition (FrameNumber A + FrameNumber B)
---@param A FFrameNumber
---@param B FFrameNumber
---@return FFrameNumber
function UTimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber(A, B) end


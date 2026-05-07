---Take meta-data that is stored on ULevelSequence assets that are recorded through the Take Recorder.
---Meta-data is retrieved through ULevelSequence::FindMetaData<UTakeMetaData>()
---@class UTakeMetaData : UObject
---@field private bIsLocked boolean @Whether the take is locked
---@field private Slate string @The user-provided slate information for the take
---@field private TakeNumber integer @The take number
---@field private Timestamp FDateTime @The timestamp at which the take was initiated
---@field private TimecodeIn FTimecode @The timecode at the start of recording
---@field private TimecodeOut FTimecode @The timecode at the end of recording
---@field private Duration FFrameTime @The desired duration for the take
---@field private FrameRate FFrameRate @The frame rate the take was recorded at. We default to 60fps.
---@field private Description string @A user-provided description for the take
---@field private PresetOrigin TSoftObjectPtr<UTakePreset> @The preset that the take was based off
---@field private LevelOrigin TSoftObjectPtr<ULevel> @The level map used to create this recording
---@field private bFrameRateFromTimecode boolean @Whether or not we get or frame rate from Timecode, default to true
local UTakeMetaData = {}

---Unlock this take if it is read-only, allowing it to be modified once again
function UTakeMetaData:Unlock() end

---Set this take's timestamp
---@param InTimestamp FDateTime
function UTakeMetaData:SetTimestamp(InTimestamp) end

---Set this take's timecode out
---@param InTimecodeOut FTimecode
function UTakeMetaData:SetTimecodeOut(InTimecodeOut) end

---Set this take's timecode in
---@param InTimecodeIn FTimecode
function UTakeMetaData:SetTimecodeIn(InTimecodeIn) end

---Set this take's take number. Take numbers are always clamped to be >= 1.
---@param InTakeNumber integer
---@param bEmitChanged boolean @[opt] 
function UTakeMetaData:SetTakeNumber(InTakeNumber, bEmitChanged) end

---Set the slate for this take and reset its take number to 1
---@param InSlate string
---@param bEmitChanged boolean @[opt] 
function UTakeMetaData:SetSlate(InSlate, bEmitChanged) end

---Set the preset on which the take is based
---@param InPresetOrigin UTakePreset
function UTakeMetaData:SetPresetOrigin(InPresetOrigin) end

---Set the map used to create this recording
---@param InLevelOrigin ULevel
function UTakeMetaData:SetLevelOrigin(InLevelOrigin) end

---Set if we get frame rate from time code
---@param InFromTimecode boolean
function UTakeMetaData:SetFrameRateFromTimecode(InFromTimecode) end

---Set this take's frame-rate
---@param InFrameRate FFrameRate
function UTakeMetaData:SetFrameRate(InFrameRate) end

---Set this take's duration
---@param InDuration FFrameTime
function UTakeMetaData:SetDuration(InDuration) end

---Set this take's user-provided description
---@param InDescription string
function UTakeMetaData:SetDescription(InDescription) end

---Check if this take was recorded (as opposed
---to being setup for recording)
---@return boolean
function UTakeMetaData:Recorded() end

---Lock this take, causing it to become read-only
function UTakeMetaData:Lock() end

---Check whether this take is locked
---@return boolean
function UTakeMetaData:IsLocked() end

---
---@return FDateTime
function UTakeMetaData:GetTimestamp() end

---
---@return FTimecode
function UTakeMetaData:GetTimecodeOut() end

---
---@return FTimecode
function UTakeMetaData:GetTimecodeIn() end

---
---@return integer
function UTakeMetaData:GetTakeNumber() end

---
---@return string
function UTakeMetaData:GetSlate() end

---
---@return UTakePreset
function UTakeMetaData:GetPresetOrigin() end

---
---@return string
function UTakeMetaData:GetLevelPath() end

---
---@return ULevel
function UTakeMetaData:GetLevelOrigin() end

---
---@return boolean
function UTakeMetaData:GetFrameRateFromTimecode() end

---
---@return FFrameRate
function UTakeMetaData:GetFrameRate() end

---
---@return FFrameTime
function UTakeMetaData:GetDuration() end

---
---@return string
function UTakeMetaData:GetDescription() end

---Generate the desired asset path for this take meta-data
---@param PathFormatString string
---@param InContext UTakeRecorderNamingTokensContext @[opt] 
---@return string
function UTakeMetaData:GenerateAssetPath(PathFormatString, InContext) end


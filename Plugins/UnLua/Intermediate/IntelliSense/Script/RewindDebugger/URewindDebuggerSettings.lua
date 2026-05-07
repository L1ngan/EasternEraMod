---Implements the settings for the Rewind Debugger.
---@class URewindDebuggerSettings : UDeveloperSettings
---@field public CameraMode ERewindDebuggerCameraMode @Rewind Debugger Playback Camera Mode
---@field public bShouldAutoEject boolean @If enabled, automatically detach player control when PIE is paused
---@field public bShouldAutoRecordOnPIE boolean @If enabled, start recording information at the start of PIE
---@field public PlaybackRate number @Playback speed multiplier
---@field public bShowEmptyObjectTracks boolean @If enabled, show empty tracks on Rewind Debugger Timeline
---@field public HiddenTrackTypes TArray<string> @The track types listed here will be hidden from the track tree view
---@field public DebugTargetActor string @/ Currently selected target actor's name
local URewindDebuggerSettings = {}


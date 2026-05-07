---This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions
---@class FUpdateLevelVisibilityLevelInfo
---@field public PackageName string @The name of the package for the level whose status changed.
---@field public FileName string @The name / path of the asset file for the level whose status changed.
---@field public VisibilityRequestId FNetLevelVisibilityTransactionId @Identifies this visibility request when communicating with server
---@field public bIsVisible boolean @The new visibility state for this level.
---@field public bTryMakeVisible boolean @Whether the level is in the state of making visible and waits for server to acknowledge.
---@field public bSkipCloseOnError boolean @Skip connection close if level can't be found (not net serialized)
local FUpdateLevelVisibilityLevelInfo = {}

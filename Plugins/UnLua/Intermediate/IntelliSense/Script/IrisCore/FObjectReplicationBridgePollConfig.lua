---@class FObjectReplicationBridgePollConfig
---@field public ClassName string @Instances of this class, specified by its fully qualified path, should use the supplied poll frame period to check for modified replicated properties. Object and Actor are forbidden class names for performance reasons.
---@field public PollFrequency number @How many times per second should we poll for modified replicated properties. The value will be converted into a frame count based on the current TickRate up to a maximum of 255 frames This means the slowest poll frequency is 255*MaxTickRate (ex: 8.5secs at 30hz) If set to 0 it means we poll the object every frame.
---@field public bIncludeSubclasses boolean @Whether instances of subclasses should also use this poll period.
local FObjectReplicationBridgePollConfig = {}

---Implements a message that contains a console log entry.
---@class FSessionServiceLog
---@field public Category string @Holds the log message category.
---@field public Data string @Holds the log message data.
---@field public InstanceId FGuid @Holds the application instance identifier.
---@field public TimeSeconds number @Holds the time in seconds since the application was started.
---@field public Verbosity integer @Holds the log message's verbosity level.
local FSessionServiceLog = {}

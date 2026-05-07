---@class FSwarmAlertMessage
---@field public JobGuid FGuid @The Job Guid
---@field public AlertLevel integer @The type of alert
---@field public ObjectGuid FGuid @The identifier for the object that is associated with the issue
---@field public TypeId integer @App-specific identifier for the type of the object
---@field public TextMessage string @Generic text message for informational purposes
local FSwarmAlertMessage = {}

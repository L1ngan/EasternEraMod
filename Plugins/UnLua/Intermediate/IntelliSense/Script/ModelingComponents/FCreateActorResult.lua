---FCreateActorResult is returned by UModelingObjectsCreationAPI::FCreateActorParams()
---to indicate success/failure and provide information about created actors
---@class FCreateActorResult
---@field public ResultCode ECreateModelingObjectResult @Success/Failure status for the requested operation
---@field public NewActor AActor @A pointer to a newly-created Actor
local FCreateActorResult = {}

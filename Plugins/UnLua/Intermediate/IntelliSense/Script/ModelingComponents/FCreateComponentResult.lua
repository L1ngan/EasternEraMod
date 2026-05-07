---FCreateComponentResult is returned by UModelingObjectsCreationAPI::CreateNewComponentOnActor()
---to indicate success/failure and provide information about created components
---@class FCreateComponentResult
---@field public ResultCode ECreateModelingObjectResult @Success/Failure status for the requested operation
---@field public NewComponent UActorComponent @A pointer to a newly-created Component
local FCreateComponentResult = {}

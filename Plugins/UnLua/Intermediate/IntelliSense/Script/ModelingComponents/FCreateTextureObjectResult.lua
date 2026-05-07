---FCreateTextureObjectResult is returned by UModelingObjectsCreationAPI::CreateTextureObject()
---to indicate success/failure and provide information about created texture objects
---@class FCreateTextureObjectResult
---@field public ResultCode ECreateModelingObjectResult @Success/Failure status for the requested operation
---@field public NewAsset UObject @A pointer to a newly-created Asset for the texture object
local FCreateTextureObjectResult = {}

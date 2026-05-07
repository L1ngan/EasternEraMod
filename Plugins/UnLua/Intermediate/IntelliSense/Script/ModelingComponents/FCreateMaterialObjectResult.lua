---FCreateMaterialObjectResult is returned by UModelingObjectsCreationAPI::CreateMaterialObject()
---to indicate success/failure and provide information about created texture objects
---@class FCreateMaterialObjectResult
---@field public ResultCode ECreateModelingObjectResult @Success/Failure status for the requested operation
---@field public NewAsset UObject @A pointer to a newly-created Asset for the material object
local FCreateMaterialObjectResult = {}

---FCreateMeshObjectResult is returned by UModelingObjectsCreationAPI::CreateMeshObject()
---to indicate success/failure and provide information about created mesh objects
---@class FCreateMeshObjectResult
---@field public ResultCode ECreateModelingObjectResult @Success/Failure status for the requested operation
---@field public NewActor AActor @A pointer to a newly-created Actor for the mesh object, if applicable (eg StaticMeshActor)
---@field public NewComponent UPrimitiveComponent @A pointer to a newly-created PrimitiveComponent for the mesh object, if applicable (eg StaticMeshComponent)
---@field public NewAsset UObject @A pointer to a newly-created Asset for the mesh object, if applicable (eg StaticMeshAsset)
local FCreateMeshObjectResult = {}

---Select internal faces
---@class FCollectionSelectInternalFacesDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection @Collection to select the internal faces from
---@field private TransformSelection FDataflowTransformSelection @Transform selection to get the internal faces from if this input is not connected, then all internal faces from the collection will be returned
---@field private FaceSelection FDataflowFaceSelection @selection containing Internal faces
local FCollectionSelectInternalFacesDataflowNode = {}

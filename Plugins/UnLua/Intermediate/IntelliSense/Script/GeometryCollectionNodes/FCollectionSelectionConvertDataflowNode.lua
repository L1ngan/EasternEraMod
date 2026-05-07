---Converts Vertex/Face/Transform selection into Vertex/Face/Transform selection
---@class FCollectionSelectionConvertDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @GeometryCollection for the selection
---@field public TransformSelection FDataflowTransformSelection @Transform selection including the new indices
---@field public FaceSelection FDataflowFaceSelection @Face selection including the new indices
---@field public VertexSelection FDataflowVertexSelection @Vertex selection including the new indices
---@field public bAllElementsMustBeSelected boolean @If true then for converting vertex/face selection to transform selection all vertex/face must be selected for selecting the associated transform
local FCollectionSelectionConvertDataflowNode = {}

---Sets all selected bone's visibilty to Visible/Hidden
---@class FSetVisibilityInCollectionDataflowNode : FDataflowNode
---@field public Visibility EVisibiltyOptionsEnum @What to set the visibility of the selected bones
---@field public Collection FManagedArrayCollection @Fractured GeometryCollection to set visibility
---@field public TransformSelection FDataflowTransformSelection @Transform selection for setting visibility
---@field public FaceSelection FDataflowFaceSelection @Face selection for setting visibility
local FSetVisibilityInCollectionDataflowNode = {}

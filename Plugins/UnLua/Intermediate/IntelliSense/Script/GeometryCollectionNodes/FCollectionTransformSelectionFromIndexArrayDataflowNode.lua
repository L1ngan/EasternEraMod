---Convert index array to a transform selection
---@class FCollectionTransformSelectionFromIndexArrayDataflowNode : FDataflowNode
---@field public Collection FManagedArrayCollection @Collection to use for the selection. Note only valid bone indices for the collection will be included in the output selection.
---@field public BoneIndices TArray<integer> @Array of bone indices to convert to a trannsform selection
---@field public TransformSelection FDataflowTransformSelection @Array of the selected bone indices
local FCollectionTransformSelectionFromIndexArrayDataflowNode = {}

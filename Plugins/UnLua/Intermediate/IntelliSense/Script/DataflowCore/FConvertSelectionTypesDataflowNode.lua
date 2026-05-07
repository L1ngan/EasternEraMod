---Convert Selection types
---@class FConvertSelectionTypesDataflowNode : FDataflowNode
---@field private Collection FManagedArrayCollection @GeometryCollection for the selection
---@field private In FDataflowSelectionTypes @Input value
---@field private bAllElementsMustBeSelected boolean @If true then for converting vertex/face selection to transform/geometry selection all vertex/face must be selected for selecting the associated transform/geometry       or going from vertex to face selection all vertices must be selected to select the face
---@field private Out FDataflowSelectionTypes @Output value
local FConvertSelectionTypesDataflowNode = {}

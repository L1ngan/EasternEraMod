---Factory with enough info to spawn the background-thread Operator to do a chunk of work for the tool
--- stores a pointer to the tool and enough info to know which specific operator it should spawn
---@class URemoveOccludedTrianglesOperatorFactory : UObject
---@field public Tool URemoveOccludedTrianglesTool
local URemoveOccludedTrianglesOperatorFactory = {}


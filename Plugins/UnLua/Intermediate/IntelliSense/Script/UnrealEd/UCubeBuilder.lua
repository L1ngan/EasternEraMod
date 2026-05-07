---@class UCubeBuilder : UEditorBrushBuilder
---@field public X number @The size of the cube in the X dimension
---@field public Y number @The size of the cube in the Y dimension
---@field public Z number @The size of the cube in the Z dimension
---@field public WallThickness number @The thickness of the cube wall when hollow
---@field public GroupName string
---@field public Hollow boolean @Whether this is a hollow or solid cube
---@field public Tessellated boolean @Whether extra internal faces should be generated for each cube face
local UCubeBuilder = {}


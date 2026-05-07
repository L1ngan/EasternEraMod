---@class UCylinderBuilder : UEditorBrushBuilder
---@field public Z number @Distance from base to tip of cylinder
---@field public OuterRadius number @Radius of cylinder
---@field public InnerRadius number @Radius of inner cylinder (when hollow)
---@field public Sides integer @How many sides this cylinder should have
---@field public GroupName string
---@field public AlignToSide boolean @Whether to align the brush to a face
---@field public Hollow boolean @Whether this is a hollow or solid cylinder
local UCylinderBuilder = {}


---@class UConeBuilder : UEditorBrushBuilder
---@field public Z number @Distance from base to tip of cone
---@field public CapZ number @Distance from base to the tip of inner cone (when hollow)
---@field public OuterRadius number @Radius of cone
---@field public InnerRadius number @Radius of inner cone (when hollow)
---@field public Sides integer @How many sides this cone should have
---@field public GroupName string
---@field public AlignToSide boolean @Whether to align the brush to a face
---@field public Hollow boolean @Whether this is a hollow or solid cone
local UConeBuilder = {}


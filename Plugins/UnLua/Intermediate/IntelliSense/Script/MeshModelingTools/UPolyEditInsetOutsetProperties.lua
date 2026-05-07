---@class UPolyEditInsetOutsetProperties : UInteractiveToolPropertySet
---@field public Softness number @Amount of smoothing applied to the boundary
---@field public bBoundaryOnly boolean @Controls whether operation will move interior vertices as well as border vertices
---@field public AreaScale number @Tweak area scaling when solving for interior vertices
---@field public bReproject boolean @When insetting, determines whether vertices in inset region should be projected back onto input surface
---@field public bOutset boolean
local UPolyEditInsetOutsetProperties = {}


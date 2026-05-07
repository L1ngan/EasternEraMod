---@class UMaterialExpressionPathTracingRayTypeSwitch : UMaterialExpression
---@field public Main FExpressionInput @Used for camera rays (or for non-path traced shading)
---@field public Shadow FExpressionInput @Used by the path tracer on shadow rays (this only applies for non-opaque blend modes)
---@field public IndirectDiffuse FExpressionInput @Used by the path tracer on indirect diffuse rays
---@field public IndirectSpecular FExpressionInput @Used by the path tracer on indirect specular rays
---@field public IndirectVolume FExpressionInput @Used by the path tracer on indirect volume rays
local UMaterialExpressionPathTracingRayTypeSwitch = {}


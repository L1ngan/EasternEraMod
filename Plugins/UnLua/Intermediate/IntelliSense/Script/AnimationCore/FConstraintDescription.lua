---A description of how to apply a simple transform constraint
---@class FConstraintDescription
---@field public bTranslation boolean
---@field public bRotation boolean
---@field public bScale boolean
---@field public bParent boolean @this does composed transform - where as individual will accumulate per component
---@field public TranslationAxes FFilterOptionPerAxis
---@field public RotationAxes FFilterOptionPerAxis
---@field public ScaleAxes FFilterOptionPerAxis
local FConstraintDescription = {}

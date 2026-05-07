---@class URemeshProperties : UMeshConstraintProperties
---@field public SmoothingStrength number @Amount of Vertex Smoothing applied within Remeshing
---@field public bFlips boolean @Enable edge flips in Remeshing (tends to lose edges/detail)
---@field public bSplits boolean @Enable edge splits in Remeshing
---@field public bCollapses boolean @Enable edge collapses in Remeshing
local URemeshProperties = {}


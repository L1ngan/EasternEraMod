---Properties for Diffusion Smoothing
---@class UDiffusionSmoothProperties : UInteractiveToolPropertySet
---@field public SmoothingPerStep number @Amount of smoothing allowed per step. Smaller steps will avoid things like collapse of small/thin features.
---@field public Steps integer @Number of Smoothing iterations
---@field public bPreserveUVs boolean @If this is false, the smoother will try to reshape the triangles to be more regular, which will distort UVs
local UDiffusionSmoothProperties = {}


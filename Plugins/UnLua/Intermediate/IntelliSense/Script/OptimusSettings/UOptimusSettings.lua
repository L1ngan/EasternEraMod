---@class UOptimusSettings : UDeveloperSettings
---@field public DefaultMode EOptimusDefaultDeformerMode @Set when skinned meshes should have a default deformer applied.
---@field public DefaultDeformer TSoftObjectPtr<UMeshDeformer> @A default deformer that will be used on a skinned mesh if no other deformer has been set.
---@field public DefaultRecomputeTangentDeformer TSoftObjectPtr<UMeshDeformer> @A default deformer that will be used on a skinned mesh if no other deformer has been set, and if the mesh has requested to recompute tangets.
local UOptimusSettings = {}


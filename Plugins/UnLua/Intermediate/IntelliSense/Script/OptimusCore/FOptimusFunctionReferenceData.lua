---@class FOptimusFunctionReferenceData
---@field public FunctionReferences TMap<FSoftObjectPath, FOptimusFunctionReferenceNodeSet> @Group function reference nodes by function node graph path using FSoftObjectPath instead of TSoftObjectPtr such that ExportText(...) is deterministic
local FOptimusFunctionReferenceData = {}

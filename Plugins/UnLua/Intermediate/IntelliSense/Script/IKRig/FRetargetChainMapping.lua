---@class FRetargetChainMapping
---@field private ChainMap TArray<FRetargetChainPair> @mapping of target to source bone chains by name NOTE: this is an array instead of a TMap because it needs to be sorted by hierarchy
---@field private SourceIKRig UIKRigDefinition
---@field private TargetIKRig UIKRigDefinition
local FRetargetChainMapping = {}

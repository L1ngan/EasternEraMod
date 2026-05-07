---Node Mapping Container Class
---* This saves source items, and target items, and mapping between
---* Used by Retargeting, Control Rig mapping. Will need to improve interface better
---@class UNodeMappingContainer : UObject
---@field private SourceItems TMap<string, FNodeItem>
---@field private TargetItems TMap<string, FNodeItem>
---@field private SourceToTarget TMap<string, string>
---@field private SourceAsset TSoftObjectPtr<UObject> @source asset that is used to create source should be UNodeMappingProviderInterface
---@field private TargetAsset TSoftObjectPtr<UObject> @source asset that is used to create target should be UNodeMappingProviderInterface
local UNodeMappingContainer = {}


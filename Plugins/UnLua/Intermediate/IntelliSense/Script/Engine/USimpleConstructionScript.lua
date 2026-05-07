---@class USimpleConstructionScript : UObject
---@field private RootNodes TArray<USCS_Node> @Root nodes of the construction script
---@field private AllNodes TArray<USCS_Node> @All nodes that exist in the hierarchy of this SimpleConstructionScript
---@field private DefaultSceneRootNode USCS_Node @Default scene root node; used when no other nodes are available to use as the root
local USimpleConstructionScript = {}


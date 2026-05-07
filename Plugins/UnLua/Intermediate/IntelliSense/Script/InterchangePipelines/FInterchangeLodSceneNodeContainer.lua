---* This container exists only because UPROPERTY cannot support nested container. See FInterchangeMeshInstance.
---@class FInterchangeLodSceneNodeContainer
---@field public SceneNodes TArray<UInterchangeSceneNode> @Each scene node here represents a mesh scene node. If it represents a LOD group, there may be more then one mesh scene node for a specific LOD index.
local FInterchangeLodSceneNodeContainer = {}

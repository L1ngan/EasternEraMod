---@class UPoseWatch : UObject
---@field public Node TWeakObjectPtr<UEdGraphNode>
---@field protected Elements TArray<UPoseWatchElement>
---@field protected bDeleteOnDeselection boolean
---@field protected bIsVisible boolean @If true will draw the pose to the viewport
---@field protected bIsNodeEnabled boolean @If true, the node is able to be drawn to the view port.
---@field protected bIsExpanded boolean
---@field protected Label string
---@field protected Parent TWeakObjectPtr<UPoseWatchFolder>
local UPoseWatch = {}


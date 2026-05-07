---@class UMaterialEditorOptions : UObject
---@field public bHideUnusedConnectorsSetting boolean @If true, don't render connectors that are not connected to anything.
---@field public bRealtimeMaterialViewport boolean @If true, the 3D material preview viewport updates in realtime.
---@field public bRealtimeExpressionViewport boolean @If true, the linked object viewport updates in realtime.
---@field public bLivePreviewUpdate boolean @If true, always refresh the material preview.
---@field public bHideUnrelatedNodes boolean @If true, fade nodes which are not connected to the selected nodes
---@field public bAlwaysRefreshAllPreviews boolean @If true, always refresh all expression previews.
---@field public bUseUnsortedMenus boolean @If false, use expression categorized menus.
---@field public FavoriteExpressions TArray<string> @The users favorite material expressions.
local UMaterialEditorOptions = {}


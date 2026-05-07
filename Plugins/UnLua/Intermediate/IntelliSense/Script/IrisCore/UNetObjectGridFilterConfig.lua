---Common settings used to configure how the GridFilter behaves
---@class UNetObjectGridFilterConfig : UNetObjectFilterConfig
---@field public ViewPosRelevancyFrameCount integer @How many frames a previous grid cell should continue to be considered relevant. To avoid culling issues when player borders cells. Only used when bUseExactCullDistance is false.
---@field public DefaultFrameCountBeforeCulling integer
---@field public CellSizeX number
---@field public CellSizeY number
---@field public DefaultCullDistance number @Objects without a NetCullDistanceSquared property will assume to have this value but squared unless there's a cull distance override.
---@field public bUseExactCullDistance boolean @If true: use the exact distance between an object and the viewer to determine if the object is relevant or should be culled out. When false: consider all objects within a grid cell to be relevant when a viewer is located within the cell. This can extend the relevant distance of objects beyond their cull distance.
---@field public FilterProfiles TArray<FNetObjectGridFilterProfile> @Map of specialized configuration profiles
local UNetObjectGridFilterConfig = {}


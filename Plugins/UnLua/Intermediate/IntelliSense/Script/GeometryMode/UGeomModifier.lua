---@class UGeomModifier : UObject
---@field public Description string @A human readable name for this modifier (appears on buttons, menus, etc)
---@field public Tooltip string @The tooltip to be displayed for this modifier
---@field public ToolbarIconName string @Icon name for showing this modifier in a toolbar
---@field public bPushButton boolean @If true, this modifier should be displayed as a push button instead of a radio button
---@field public bInitialized boolean @true if the modifier has been initialized. This is useful for interpreting user input and mouse drags correctly.
---@field public bPendingPivotOffsetUpdate boolean @If true, the pivot offset should be updated when the modification ends
---@field public bAppearsInToolbar boolean
---@field private CachedPolys UPolys @Stored state of polys in case the brush state needs to be restroed
local UGeomModifier = {}


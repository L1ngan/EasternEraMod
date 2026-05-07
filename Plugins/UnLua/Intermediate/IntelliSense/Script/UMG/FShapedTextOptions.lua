---Common data for all widgets that use shaped text.
---Contains the common options that should be exposed for the underlying Slate widget.
---@class FShapedTextOptions
---@field public bOverride_TextShapingMethod boolean
---@field public bOverride_TextFlowDirection boolean
---@field public TextShapingMethod ETextShapingMethod @Which text shaping method should the text within this widget use? (unset to use the default returned by GetDefaultTextShapingMethod)
---@field public TextFlowDirection ETextFlowDirection @Which text flow direction should the text within this widget use? (unset to use the default returned by GetDefaultTextFlowDirection)
local FShapedTextOptions = {}

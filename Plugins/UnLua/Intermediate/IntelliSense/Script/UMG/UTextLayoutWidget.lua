---Base class for all widgets that use a text layout.
---Contains the common options that should be exposed for the underlying Slate widget.
---@class UTextLayoutWidget : UWidget
---@field protected ShapedTextOptions FShapedTextOptions @Controls how the text within this widget should be shaped.
---@field protected Justification integer @How the text should be aligned with the margin.
---@field protected WrappingPolicy ETextWrappingPolicy @The wrapping policy to use.
---@field protected AutoWrapText boolean @True if we're wrapping text automatically based on the computed horizontal space for this widget.
---@field protected ApplyLineHeightToBottomLine boolean @Whether to leave extra space below the last line due to line height.
---@field protected WrapTextAt number @Whether text wraps onto a new line when it's length exceeds this width; if this value is zero or negative, no wrapping occurs.
---@field protected Margin FMargin @The amount of blank space left around the edges of text area.
---@field protected LineHeightPercentage number @The amount to scale each lines height by.
local UTextLayoutWidget = {}

---@param InJustification integer
function UTextLayoutWidget:SetJustification(InJustification) end


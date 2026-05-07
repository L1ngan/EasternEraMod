---@class UExpandableArea : UWidget
---@field public Style FExpandableAreaStyle
---@field public BorderBrush FSlateBrush
---@field public BorderColor FSlateColor
---@field public bIsExpanded boolean
---@field public MaxHeight number @The maximum height of the area
---@field public HeaderPadding FMargin
---@field public AreaPadding FMargin
---@field public OnExpansionChanged MulticastDelegate @A bindable delegate for the IsChecked.
---@field protected HeaderContent UWidget
---@field protected BodyContent UWidget
local UExpandableArea = {}

---@param IsExpanded boolean
function UExpandableArea:SetIsExpanded_Animated(IsExpanded) end

---@param IsExpanded boolean
function UExpandableArea:SetIsExpanded(IsExpanded) end

---@return boolean
function UExpandableArea:GetIsExpanded() end


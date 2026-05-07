---Arranges widgets left-to-right or top-to-bottom dependently of the orientation.  When the widgets exceed the wrapSize it will place widgets on the next line.
---* Many Children
---* Flows
---* Wraps
---@class UWrapBox : UPanelWidget
---@field public InnerSlotPadding FVector2D @The inner slot padding goes between slots sharing borders
---@field public WrapSize number @When this size is exceeded, elements will start appearing on the next line.
---@field public bExplicitWrapSize boolean @Use explicit wrap size whenever possible. It greatly simplifies layout calculations and reduces likelihood of "wiggling UI"
---@field public HorizontalAlignment integer @The alignment of each line of wrapped content.
---@field public Orientation integer @Determines if the Wrap Box should arranges the widgets left-to-right or top-to-bottom
local UWrapBox = {}

---Sets the inner slot padding goes between slots sharing borders
---@param InPadding FVector2D
function UWrapBox:SetInnerSlotPadding(InPadding) end

---@param InHorizontalAlignment integer
function UWrapBox:SetHorizontalAlignment(InHorizontalAlignment) end

---@param Content UWidget
---@return UWrapBoxSlot
function UWrapBox:AddChildToWrapBox(Content) end


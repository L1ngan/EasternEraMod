---An arbitrary scrollable collection of widgets.  Great for presenting 10-100 widgets in a list.  Doesn't support virtualization.
---@class UScrollBox : UPanelWidget
---@field private ScrollAnimationInterpolationSpeed number
---@field private bEnableTouchScrolling boolean @True to allow scrolling using touch input.
---@field private bConsumePointerInput boolean @Option to pass touch input events to widgets behind the ScrollBox.
---@field private AnalogMouseWheelKey FKey @The virtual mouse wheel key for gamepad input
---@field private bIsFocusable boolean @If true, scrollbox can receive focus. On gamepad, ensure AnalogMouseWheelKey is set to allow user interaction
---@field public WidgetStyle FScrollBoxStyle @The style
---@field public WidgetBarStyle FScrollBarStyle @The bar style
---@field public Orientation integer @The orientation of the scrolling and stacking in the box.
---@field public ScrollBarVisibility ESlateVisibility @Visibility
---@field public ConsumeMouseWheel EConsumeMouseWheel @When mouse wheel events should be consumed.
---@field public ScrollbarThickness FVector2D @The thickness of the scrollbar thumb
---@field public ScrollbarPadding FMargin @The margin around the scrollbar
---@field public AlwaysShowScrollbar boolean
---@field public AlwaysShowScrollbarTrack boolean
---@field public AllowOverscroll boolean @Disable to stop scrollbars from activating inertial overscrolling
---@field public BackPadScrolling boolean @Whether to back pad this scroll box, allowing user to scroll backward until child contents are no longer visible
---@field public FrontPadScrolling boolean @Whether to front pad this scroll box, allowing user to scroll forward until child contents are no longer visible
---@field public bAnimateWheelScrolling boolean @True to lerp smoothly when wheel scrolling along the scroll box
---@field public NavigationDestination EDescendantScrollDestination @Sets where to scroll a widget to when using explicit navigation or if ScrollWhenFocusChanges is enabled
---@field public NavigationScrollPadding number @The amount of padding to ensure exists between the item being navigated to, at the edge of the scrollbox.  Use this if you want to ensure there's a preview of the next item the user could scroll to.
---@field public ScrollWhenFocusChanges EScrollWhenFocusChanges @Scroll behavior when user focus is given to a child widget
---@field public bAllowRightClickDragScrolling boolean @Option to disable right-click-drag scrolling
---@field public WheelScrollMultiplier number @The multiplier to apply when wheel scrolling
---@field public OnUserScrolled MulticastDelegate @Called when the scroll has changed
---@field public OnScrollBarVisibilityChanged MulticastDelegate @Called when the scrollbar visibility has changed
---@field public OnFocusReceived MulticastDelegate @Called when the scroll has changed
---@field public OnFocusLost MulticastDelegate @Called when the scroll has changed
local UScrollBox = {}

---@param NewWheelScrollMultiplier number
function UScrollBox:SetWheelScrollMultiplier(NewWheelScrollMultiplier) end

---@param NewScrollWhenFocusChanges EScrollWhenFocusChanges
function UScrollBox:SetScrollWhenFocusChanges(NewScrollWhenFocusChanges) end

---Updates the scroll offset of the scrollbox.
---@param NewScrollOffset number
function UScrollBox:SetScrollOffset(NewScrollOffset) end

---@param NewScrollBarVisibility ESlateVisibility
function UScrollBox:SetScrollBarVisibility(NewScrollBarVisibility) end

---@param NewScrollbarThickness FVector2D
function UScrollBox:SetScrollbarThickness(NewScrollbarThickness) end

---@param NewScrollbarPadding FMargin
function UScrollBox:SetScrollbarPadding(NewScrollbarPadding) end

---@param NewScrollAnimationInterpolationSpeed number
function UScrollBox:SetScrollAnimationInterpolationSpeed(NewScrollAnimationInterpolationSpeed) end

---@param NewOrientation integer
function UScrollBox:SetOrientation(NewOrientation) end

---@param NewNavigationDestination EDescendantScrollDestination
function UScrollBox:SetNavigationDestination(NewNavigationDestination) end

---@param bInEnableTouchScrolling boolean
function UScrollBox:SetIsTouchScrollingEnabled(bInEnableTouchScrolling) end

---@param bInIsFocusable boolean
function UScrollBox:SetIsFocusable(bInIsFocusable) end

---@param bInConsumePointerInput boolean
function UScrollBox:SetConsumePointerInput(bInConsumePointerInput) end

---@param NewConsumeMouseWheel EConsumeMouseWheel
function UScrollBox:SetConsumeMouseWheel(NewConsumeMouseWheel) end

---@param bShouldAnimateWheelScrolling boolean
function UScrollBox:SetAnimateWheelScrolling(bShouldAnimateWheelScrolling) end

---@param InMouseWheelKey FKey
function UScrollBox:SetAnalogMouseWheelKey(InMouseWheelKey) end

---@param NewAlwaysShowScrollbar boolean
function UScrollBox:SetAlwaysShowScrollbar(NewAlwaysShowScrollbar) end

---@param NewAllowOverscroll boolean
function UScrollBox:SetAllowOverscroll(NewAllowOverscroll) end

---Scrolls the ScrollBox to the widget during the next layout pass.
---@param WidgetToFind UWidget
---@param AnimateScroll boolean @[opt] 
---@param ScrollDestination EDescendantScrollDestination @[opt] 
---@param Padding number @[opt] 
function UScrollBox:ScrollWidgetIntoView(WidgetToFind, AnimateScroll, ScrollDestination, Padding) end

---Scrolls the ScrollBox to the top instantly
function UScrollBox:ScrollToStart() end

---Scrolls the ScrollBox to the bottom instantly during the next layout pass.
function UScrollBox:ScrollToEnd() end

---@return number
function UScrollBox:GetViewOffsetFraction() end

---Gets the fraction currently visible in the scrollbox
---@return number
function UScrollBox:GetViewFraction() end

---Gets the scroll offset of the bottom of the ScrollBox in Slate Units.
---@return number
function UScrollBox:GetScrollOffsetOfEnd() end

---Gets the scroll offset of the scrollbox in Slate Units.
---@return number
function UScrollBox:GetScrollOffset() end

---Gets the overscroll offset of the scrollbox in percentage from its view size.
---@return number
function UScrollBox:GetOverscrollPercentage() end

---Gets the overscroll offset of the scrollbox in Slate Units.
---@return number
function UScrollBox:GetOverscrollOffset() end

---Returns true when the widget is currently inertial scrolling
---@return boolean
function UScrollBox:GetIsScrolling() end

---@return boolean
function UScrollBox:GetIsFocusable() end

---@return boolean
function UScrollBox:GetConsumePointerInput() end

---@return FKey
function UScrollBox:GetAnalogMouseWheelKey() end

---Instantly stops any inertial scrolling that is currently in progress
function UScrollBox:EndInertialScrolling() end


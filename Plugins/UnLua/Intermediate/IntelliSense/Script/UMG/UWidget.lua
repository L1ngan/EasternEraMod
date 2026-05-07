---This is the base class for all wrapped Slate controls that are exposed to UObjects.
---@class UWidget : UVisual
---@field public Slot UPanelSlot @The parent slot of the UWidget.  Allows us to easily inline edit the layout controlling this widget.
---@field public bIsEnabledDelegate Delegate @A bindable delegate for bIsEnabled
---@field public ToolTipTextDelegate Delegate @A bindable delegate for ToolTipText
---@field public ToolTipText string @Tooltip text to show when the user hovers over the widget with the mouse
---@field public ToolTipWidget UWidget @Tooltip widget to show when the user hovers over the widget with the mouse
---@field public ToolTipWidgetDelegate Delegate @A bindable delegate for ToolTipWidget
---@field public VisibilityDelegate Delegate @A bindable delegate for Visibility
---@field public RenderTransform FWidgetTransform @The render transform of the widget allows for arbitrary 2D transforms to be applied to the widget.
---@field public RenderTransformPivot FVector2D @The render transform pivot controls the location about which transforms are applied. This value is a normalized coordinate about which things like rotations will occur.
---@field public FlowDirectionPreference EFlowDirectionPreference @Allows you to set a new flow direction
---@field public bIsVariable boolean @Allows controls to be exposed as variables in a blueprint.  Not all controls need to be exposed as variables, so this allows only the most useful ones to end up being exposed.
---@field public bCreatedByConstructionScript boolean @Flag if the Widget was created from a blueprint
---@field public bIsEnabled boolean @Sets whether this widget can be modified interactively by the user
---@field public bOverride_Cursor boolean
---@field public bOverrideAccessibleDefaults boolean @Override all of the default accessibility behavior and text for this widget.
---@field public bCanChildrenBeAccessible boolean @Whether or not children of this widget can appear as distinct accessible widgets.
---@field public AccessibleBehavior ESlateAccessibleBehavior @Whether or not the widget is accessible, and how to describe it. If set to custom, additional customization options will appear.
---@field public AccessibleSummaryBehavior ESlateAccessibleBehavior @How to describe this widget when it's being presented through a summary of a parent widget. If set to custom, additional customization options will appear.
---@field public AccessibleText string @When AccessibleBehavior is set to Custom, this is the text that will be used to describe the widget.
---@field public AccessibleTextDelegate Delegate @An optional delegate that may be assigned in place of AccessibleText for creating a TAttribute
---@field public AccessibleSummaryText string @When AccessibleSummaryBehavior is set to Custom, this is the text that will be used to describe the widget.
---@field public AccessibleSummaryTextDelegate Delegate @An optional delegate that may be assigned in place of AccessibleSummaryText for creating a TAttribute
---@field protected bIsVolatile boolean @If true prevents the widget or its child's geometry or layout information from being cached.  If this widget changes every frame, but you want it to still be in an invalidation panel you should make it as volatile instead of invalidating it every frame, which would prevent the invalidation panel from actually ever caching anything.
---@field public bHiddenInDesigner boolean @Stores the design time flag setting if the widget is hidden inside the designer
---@field public bExpandedInDesigner boolean @Stores the design time flag setting if the widget is expanded inside the designer
---@field public bLockedInDesigner boolean @Stores the design time flag setting if the widget is locked inside the designer
---@field public Cursor integer @The cursor to show when the mouse is over the widget
---@field public Clipping EWidgetClipping @Controls how the clipping behavior of this widget.  Normally content that overflows the bounds of the widget continues rendering.  Enabling clipping prevents that overflowing content from being seen. NOTE: Elements in different clipping spaces can not be batched together, and so there is a performance cost to clipping.  Do not enable clipping unless a panel actually needs to prevent content from showing up outside its bounds.
---@field public Visibility ESlateVisibility @The visibility of the widget
---@field private PixelSnapping EWidgetPixelSnapping @If the widget will draw snapped to the nearest pixel.  Improves clarity but might cause visibile stepping in animation
---@field protected RenderOpacity number @The opacity of the widget
---@field private AccessibleWidgetData USlateAccessibleWidgetData @A custom set of accessibility rules for this widget. If null, default rules for the widget are used.
---@field public Navigation UWidgetNavigation @The navigation object for this widget is optionally created if the user has configured custom navigation rules for this widget in the widget designer.  Those rules determine how navigation transitions can occur between widgets.
---@field protected NativeBindings TArray<UPropertyBinding> @Native property bindings.
---@field private DesignerFlags integer @Any flags used by the designer at edit time.
---@field private DisplayLabel string @The friendly name for this widget displayed in the designer and BP graph.
---@field private CategoryName string @Category name used in the widget designer for sorting purpose
local UWidget = {}

---Sets the visibility of the widget.
---@param InVisibility ESlateVisibility
function UWidget:SetVisibility(InVisibility) end

---Sets the focus to this widget for a specific user (if setting focus for the owning user, prefer SetFocus())
---@param PlayerController APlayerController
function UWidget:SetUserFocus(PlayerController) end

---Sets the tooltip text for the widget.
---@param InToolTipText string
function UWidget:SetToolTipText(InToolTipText) end

---Sets a custom widget as the tooltip of the widget.
---@param Widget UWidget
function UWidget:SetToolTip(Widget) end

---@param Translation FVector2D
function UWidget:SetRenderTranslation(Translation) end

---@param Pivot FVector2D
function UWidget:SetRenderTransformPivot(Pivot) end

---@param Angle number
function UWidget:SetRenderTransformAngle(Angle) end

---@param InTransform FWidgetTransform
function UWidget:SetRenderTransform(InTransform) end

---@param Shear FVector2D
function UWidget:SetRenderShear(Shear) end

---@param Scale FVector2D
function UWidget:SetRenderScale(Scale) end

---Sets the visibility of the widget.
---@param InOpacity number
function UWidget:SetRenderOpacity(InOpacity) end

---Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for Explicit Rule.
---@param Direction EUINavigation
---@param InWidget UWidget
function UWidget:SetNavigationRuleExplicit(Direction, InWidget) end

---Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for CustomBoundary Rule.
---@param Direction EUINavigation
---@param InCustomDelegate Delegate
function UWidget:SetNavigationRuleCustomBoundary(Direction, InCustomDelegate) end

---Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for Custom Rule.
---@param Direction EUINavigation
---@param InCustomDelegate Delegate
function UWidget:SetNavigationRuleCustom(Direction, InCustomDelegate) end

---Sets the widget navigation rules for a specific direction. This can only be called on widgets that are in a widget tree. This works only for non Explicit, non Custom and non CustomBoundary Rules.
---@param Direction EUINavigation
---@param Rule EUINavigationRule
function UWidget:SetNavigationRuleBase(Direction, Rule) end

---@param Direction EUINavigation
---@param Rule EUINavigationRule
---@param WidgetToFocus string
function UWidget:SetNavigationRule(Direction, Rule, WidgetToFocus) end

---Sets the focus to this widget.
function UWidget:SetKeyboardFocus() end

---Sets the current enabled status of the widget
---@param bInIsEnabled boolean
function UWidget:SetIsEnabled(bInIsEnabled) end

---Sets the focus to this widget for the owning user
function UWidget:SetFocus() end

---Sets the cursor to show over the widget.
---@param InCursor integer
function UWidget:SetCursor(InCursor) end

---Sets the clipping state of this widget.
---@param InClipping EWidgetClipping
function UWidget:SetClipping(InClipping) end

---Sets the widget navigation rules for all directions. This can only be called on widgets that are in a widget tree.
---@param Rule EUINavigationRule
---@param WidgetToFocus string
function UWidget:SetAllNavigationRules(Rule, WidgetToFocus) end

---Resets the cursor to use on the widget, removing any customization for it.
function UWidget:ResetCursor() end

---Removes the widget from its parent widget.  If this widget was added to the player's screen or the viewport
---it will also be removed from those containers.
function UWidget:RemoveFromParent() end

---Events
---@return FEventReply
function UWidget:OnReply__DelegateSignature() end

---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UWidget:OnPointerEvent__DelegateSignature(MyGeometry, MouseEvent) end

---@param FieldId FFieldNotificationId
---@param Delegate Delegate
function UWidget:K2_RemoveFieldValueChangedDelegate(FieldId, Delegate) end

---@param FieldId FFieldNotificationId
function UWidget:K2_BroadcastFieldValueChanged(FieldId) end

---@param FieldId FFieldNotificationId
---@param Delegate Delegate
function UWidget:K2_AddFieldValueChangedDelegate(FieldId, Delegate) end

---Returns true if the widget is Visible, HitTestInvisible or SelfHitTestInvisible.
---@return boolean
function UWidget:IsVisible() end

---Returns true if the widget is Visible, HitTestInvisible or SelfHitTestInvisible and the Render Opacity is greater than 0.
---@return boolean
function UWidget:IsRendered() end

---
---@return boolean
function UWidget:IsInViewport() end

---Returns true if the widget is currently being hovered by a pointer device
---@return boolean
function UWidget:IsHovered() end

---Invalidates the widget from the view of a layout caching widget that may own this widget.
---will force the owning widget to redraw and cache children on the next paint pass.
function UWidget:InvalidateLayoutAndVolatility() end

---Returns true if any descendant widget is focused by a specific user.
---@param PlayerController APlayerController
---@return boolean
function UWidget:HasUserFocusedDescendants(PlayerController) end

---Returns true if this widget is focused by a specific user.
---@param PlayerController APlayerController
---@return boolean
function UWidget:HasUserFocus(PlayerController) end

---Checks to see if this widget is the current mouse captor
---     @@param User index to check for capture
---     @@param Optional pointer index to check for capture
---     @@return  True if this widget has captured the mouse with given user and pointer
---@param UserIndex integer
---@param PointerIndex integer @[opt] 
---@return boolean
function UWidget:HasMouseCaptureByUser(UserIndex, PointerIndex) end

---Checks to see if this widget is the current mouse captor
---@return boolean
function UWidget:HasMouseCapture() end

---Checks to see if this widget currently has the keyboard focus
---@return boolean
function UWidget:HasKeyboardFocus() end

---Returns true if any descendant widget is focused by any user.
---@return boolean
function UWidget:HasFocusedDescendants() end

---Returns true if this widget is focused by any user.
---@return boolean
function UWidget:HasAnyUserFocus() end

---@return UWidget
function UWidget:GetWidget__DelegateSignature() end

---Gets the current visibility of the widget.
---@return ESlateVisibility
function UWidget:GetVisibility() end

---@return FGeometry
function UWidget:GetTickSpaceGeometry() end

---@return string
function UWidget:GetText__DelegateSignature() end

---@return ESlateVisibility
function UWidget:GetSlateVisibility__DelegateSignature() end

---@return FSlateColor
function UWidget:GetSlateColor__DelegateSignature() end

---@return FSlateBrush
function UWidget:GetSlateBrush__DelegateSignature() end

---@return number
function UWidget:GetRenderTransformAngle() end

---Gets the current visibility of the widget.
---@return number
function UWidget:GetRenderOpacity() end

---Gets the parent widget
---@return UPanelWidget
function UWidget:GetParent() end

---@return FGeometry
function UWidget:GetPaintSpaceGeometry() end

---Gets the player controller associated with this UI.
---@return APlayerController
function UWidget:GetOwningPlayer() end

---Gets the local player associated with this UI.
---@return ULocalPlayer
function UWidget:GetOwningLocalPlayer() end

---@return integer
function UWidget:GetMouseCursor__DelegateSignature() end

---@return FLinearColor
function UWidget:GetLinearColor__DelegateSignature() end

---Gets the current enabled status of the widget
---@return boolean
function UWidget:GetIsEnabled() end

---@return integer
function UWidget:GetInt32__DelegateSignature() end

---Gets the game instance associated with this UI.
---@return UGameInstance
function UWidget:GetGameInstance() end

---@return number
function UWidget:GetFloat__DelegateSignature() end

---Gets the widgets desired size.
---NOTE: The underlying Slate widget must exist and be valid, also at least one pre-pass must
---      have occurred before this value will be of any use.
---@return FVector2D
function UWidget:GetDesiredSize() end

---Gets the clipping state of this widget.
---@return EWidgetClipping
function UWidget:GetClipping() end

---@return ECheckBoxState
function UWidget:GetCheckBoxState__DelegateSignature() end

---Gets the last geometry used to Tick the widget.  This data may not exist yet if this call happens prior to
---the widget having been ticked/painted, or it may be out of date, or a frame behind.
---We recommend not to use this data unless there's no other way to solve your problem.  Normally in Slate we
---try and handle these issues by making a dependent widget part of the hierarchy, as to avoid frame behind
---or what are referred to as hysteresis problems, both caused by depending on geometry from the previous frame
---being used to advise how to layout a dependent object the current frame.
---@return FGeometry
function UWidget:GetCachedGeometry() end

---Common Bindings - If you add any new common binding, you must provide a UPropertyBinding for it.
---                  all primitive binding in UMG goes through native binding evaluators to prevent
---                  thunking through the VM.
---@return boolean
function UWidget:GetBool__DelegateSignature() end

---Gets the accessible text from the underlying Slate accessible widget
---accessibility is dsabled or the underlying accessible widget is invalid.
---@return string
function UWidget:GetAccessibleText() end

---Gets the accessible summary text from the underlying Slate accessible widget.
---accessibility is dsabled or the underlying accessible widget is invalid.
---@return string
function UWidget:GetAccessibleSummaryText() end

---Events
---@param Item string
---@return UWidget
function UWidget:GenerateWidgetForString__DelegateSignature(Item) end

---@param Item UObject
---@return UWidget
function UWidget:GenerateWidgetForObject__DelegateSignature(Item) end

---Sets the forced volatility of the widget.
---@param bForce boolean
function UWidget:ForceVolatile(bForce) end

---Forces a pre-pass.  A pre-pass caches the desired size of the widget hierarchy owned by this widget.
---One pre-pass already happens for every widget before Tick occurs.  You only need to perform another
---pre-pass if you are adding child widgets this frame and want them to immediately be visible this frame.
function UWidget:ForceLayoutPrepass() end


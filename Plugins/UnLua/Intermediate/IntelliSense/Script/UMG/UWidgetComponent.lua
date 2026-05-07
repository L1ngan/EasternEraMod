---The widget component provides a surface in the 3D environment on which to render widgets normally rendered to the screen.
---Widgets are first rendered to a render target, then that render target is displayed in the world.
---Material Properties set by this component on whatever material overrides the default.
---SlateUI [Texture]
---BackColor [Vector]
---TintColorAndOpacity [Vector]
---OpacityFromTexture [Scalar]
---@class UWidgetComponent : UMeshComponent
---@field protected Space EWidgetSpace @The coordinate space in which to render the widget
---@field protected TimingPolicy EWidgetTimingPolicy @How this widget should deal with timing, pausing, etc.
---@field protected WidgetClass TSubclassOf<UUserWidget> @The class of User Widget to create and display an instance of
---@field protected DrawSize FIntPoint @The size of the displayed quad.
---@field protected bManuallyRedraw boolean @Should we wait to be told to redraw to actually draw?
---@field protected bRedrawRequested boolean @Has anyone requested we redraw?
---@field protected RedrawTime number @The time in between draws, if 0 - we would redraw every frame.  If 1, we would redraw every second. This will work with bManuallyRedraw as well.  So you can say, manually redraw, but only redraw at this maximum rate.
---@field protected CurrentDrawSize FIntPoint @The actual draw size, this changes based on DrawSize - or the desired size of the widget if bDrawAtDesiredSize is true.
---@field protected bUseInvalidationInWorldSpace boolean @Use the invalidation system to update this widget. Only valid in World space. In Screen space, the widget is updated by the viewport owners.
---@field protected bDrawAtDesiredSize boolean @Causes the render target to automatically match the desired size. WARNING: If you change this every frame, it will be very expensive. If you need    that effect, you should keep the outer widget's sized locked and dynamically    scale or resize some inner widget.
---@field protected Pivot FVector2D @The Alignment/Pivot point that the widget is placed at relative to the position.
---@field protected bReceiveHardwareInput boolean @Register with the viewport for hardware input from the true mouse and keyboard.  These widgets will more or less react like regular 2D widgets in the viewport, e.g. they can and will steal focus from the viewport. WARNING: If you are making a VR game, definitely do not change this to true.  This option should ONLY be used if you're making what would otherwise be a normal menu for a game, just in 3D.  If you also need the game to remain responsive and for the player to be able to interact with UI and move around the world (such as a keypad on a door), use the WidgetInteractionComponent instead.
---@field protected bWindowFocusable boolean @Is the virtual window created to host the widget focusable?
---@field protected WindowVisibility EWindowVisibility @The visibility of the virtual window created to host the widget
---@field protected bApplyGammaCorrection boolean @Widget components that appear in the world will be gamma corrected by the 3D renderer. In some cases, widget components are blitted directly into the backbuffer, in which case gamma correction should be enabled.
---@field protected OwnerPlayer ULocalPlayer @The owner player for a widget component, if this widget is drawn on the screen, this controls what player's screen it appears on for split screen, if not set, users player 0.
---@field protected BackgroundColor FLinearColor @The background color of the component
---@field protected TintColorAndOpacity FLinearColor @Tint color and opacity for this component
---@field protected OpacityFromTexture number @Sets the amount of opacity from the widget's UI texture to use when rendering the translucent or masked UI to the viewport (0.0-1.0)
---@field protected BlendMode EWidgetBlendMode @The blend mode for the widget.
---@field protected bIsTwoSided boolean @Is the component visible from behind?
---@field protected TickWhenOffscreen boolean @Should the component tick the widget when it's off screen?
---@field protected BodySetup UBodySetup @The body setup of the displayed quad
---@field protected TranslucentMaterial UMaterialInterface @The material instance for translucent widget components
---@field protected TranslucentMaterial_OneSided UMaterialInterface @The material instance for translucent, one-sided widget components
---@field protected OpaqueMaterial UMaterialInterface @The material instance for opaque widget components
---@field protected OpaqueMaterial_OneSided UMaterialInterface @The material instance for opaque, one-sided widget components
---@field protected MaskedMaterial UMaterialInterface @The material instance for masked widget components.
---@field protected MaskedMaterial_OneSided UMaterialInterface @The material instance for masked, one-sided widget components.
---@field protected RenderTarget UTextureRenderTarget2D @The target to which the user widget is rendered
---@field protected MaterialInstance UMaterialInstanceDynamic @The dynamic instance of the material that the render target is attached to
---@field protected bAddedToScreen boolean
---@field protected bEditTimeUsable boolean @Allows the widget component to be used at editor time.  For use in the VR-Editor.
---@field protected SharedLayerName string @Layer Name the widget will live on
---@field protected LayerZOrder integer @ZOrder the layer will be created on, note this only matters on the first time a new layer is created, subsequent additions to the same layer will use the initially defined ZOrder
---@field protected GeometryMode EWidgetGeometryMode @Controls the geometry of the widget component. See EWidgetGeometryMode.
---@field protected CylinderArcAngle number @Curvature of a cylindrical widget in degrees.
---@field protected TickMode ETickMode
---@field private Widget UUserWidget @The User Widget object displayed and managed by this component
local UWidgetComponent = {}

---Sets the visibility of the virtual window created to host the widget focusable.
---@param InVisibility EWindowVisibility
function UWidgetComponent:SetWindowVisibility(InVisibility) end

---
---@param bInWindowFocusable boolean
function UWidgetComponent:SetWindowFocusable(bInWindowFocusable) end

---@param NewSpace EWidgetSpace
function UWidgetComponent:SetWidgetSpace(NewSpace) end

---Sets the widget to use directly. This function will keep track of the widget till the next time it's called
---    with either a newer widget or a nullptr
---@param Widget UUserWidget
function UWidgetComponent:SetWidget(Widget) end

---Sets whether the widget is two-sided or not
---@param bWantTwoSided boolean
function UWidgetComponent:SetTwoSided(bWantTwoSided) end

---Sets the tint color and opacity scale for this widget
---@param NewTintColorAndOpacity FLinearColor
function UWidgetComponent:SetTintColorAndOpacity(NewTintColorAndOpacity) end

---Sets whether the widget ticks when offscreen or not
---@param bWantTickWhenOffscreen boolean
function UWidgetComponent:SetTickWhenOffscreen(bWantTickWhenOffscreen) end

---Sets the Tick mode of the Widget Component.
---@param InTickMode ETickMode
function UWidgetComponent:SetTickMode(InTickMode) end

---@param InRedrawTime number
function UWidgetComponent:SetRedrawTime(InRedrawTime) end

---@param InPivot FVector2D
function UWidgetComponent:SetPivot(InPivot) end

---Sets the local player that owns this widget component.  Setting the owning player controls
---which player's viewport the widget appears on in a split screen scenario.  Additionally it
---forwards the owning player to the actual UserWidget that is spawned.
---@param LocalPlayer ULocalPlayer
function UWidgetComponent:SetOwnerPlayer(LocalPlayer) end

---
---@param bUseManualRedraw boolean
function UWidgetComponent:SetManuallyRedraw(bUseManualRedraw) end

---@param InGeometryMode EWidgetGeometryMode
function UWidgetComponent:SetGeometryMode(InGeometryMode) end

---Sets the draw size of the quad in the world
---@param Size FVector2D
function UWidgetComponent:SetDrawSize(Size) end

---@param bInDrawAtDesiredSize boolean
function UWidgetComponent:SetDrawAtDesiredSize(bInDrawAtDesiredSize) end

---Defines the curvature of the widget component when using EWidgetGeometryMode::Cylinder; ignored otherwise.
---@param InCylinderArcAngle number
function UWidgetComponent:SetCylinderArcAngle(InCylinderArcAngle) end

---Sets the background color and opacityscale for this widget
---@param NewBackgroundColor FLinearColor
function UWidgetComponent:SetBackgroundColor(NewBackgroundColor) end

---Requests that the widget have it's render target updated, if TickMode is disabled, this will force a tick to happen to update the render target.
function UWidgetComponent:RequestRenderUpdate() end

---Requests that the widget be redrawn.
function UWidgetComponent:RequestRedraw() end

---Returns true if the the Slate window is visible and that the widget is also visible, false otherwise.
---@return boolean
function UWidgetComponent:IsWidgetVisible() end

---Gets the visibility of the virtual window created to host the widget focusable.
---@return EWindowVisibility
function UWidgetComponent:GetWindowVisiblility() end

---
---@return boolean
function UWidgetComponent:GetWindowFocusable() end

---@return EWidgetSpace
function UWidgetComponent:GetWidgetSpace() end

---Gets the widget that is used by this Widget Component. It will be null if a Slate Widget was set using SetSlateWidget function.
---@return UUserWidget
function UWidgetComponent:GetWidget() end

---Returns the user widget object displayed by this component
---@return UUserWidget
function UWidgetComponent:GetUserWidgetObject() end

---Gets whether the widget is two-sided or not
---@return boolean
function UWidgetComponent:GetTwoSided() end

---Gets whether the widget ticks when offscreen or not
---@return boolean
function UWidgetComponent:GetTickWhenOffscreen() end

---Returns the render target to which the user widget is rendered
---@return UTextureRenderTarget2D
function UWidgetComponent:GetRenderTarget() end

---@return number
function UWidgetComponent:GetRedrawTime() end

---Returns the pivot point where the UI is rendered about the origin.
---@return FVector2D
function UWidgetComponent:GetPivot() end

---Gets the local player that owns this widget component.
---@return ULocalPlayer
function UWidgetComponent:GetOwnerPlayer() end

---Returns the dynamic material instance used to render the user widget
---@return UMaterialInstanceDynamic
function UWidgetComponent:GetMaterialInstance() end

---
---@return boolean
function UWidgetComponent:GetManuallyRedraw() end

---
---@return EWidgetGeometryMode
function UWidgetComponent:GetGeometryMode() end

---Returns the "specified" draw size of the quad in the world
---@return FVector2D
function UWidgetComponent:GetDrawSize() end

---@return boolean
function UWidgetComponent:GetDrawAtDesiredSize() end

---Defines the curvature of the widget component when using EWidgetGeometryMode::Cylinder; ignored otherwise.
---@return number
function UWidgetComponent:GetCylinderArcAngle() end

---Returns the "actual" draw size of the quad in the world
---@return FVector2D
function UWidgetComponent:GetCurrentDrawSize() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UWidgetComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UWidgetComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UWidgetComponent:AddAssetUserDataOfClass(InUserDataClass) end


---A widget that enables UI extensibility through WidgetBlueprint.
---@class UUserWidget : UWidget
---@field public ColorAndOpacity FLinearColor @The color and opacity of this widget.  Tints all child widgets.
---@field public ColorAndOpacityDelegate Delegate
---@field public ForegroundColor FSlateColor @The foreground color of the widget, this is inherited by sub widgets.  Any color property that is marked as inherit will use this color.
---@field public ForegroundColorDelegate Delegate
---@field public OnVisibilityChanged MulticastDelegate @Called when the visibility has changed
---@field public Padding FMargin @The padding area around the content.
---@field public Priority integer
---@field public bIsFocusable boolean @Setting this flag to true, allows this widget to accept focus when clicked, or when navigated to.
---@field public bStopAction boolean
---@field public bAutomaticallyRegisterInputOnConstruction boolean @If true, this widget will automatically register its own input component upon construction. This will allow the use of binding input delegates in the event graph. This is set during the compilation of the widget blueprint.
---@field public QueuedWidgetAnimationTransitions TArray<FQueuedWidgetAnimationTransition> @Animation transitions to trigger on next tick
---@field public ActiveSequencePlayers TArray<UUMGSequencePlayer>
---@field public AnimationTickManager UUMGSequenceTickManager @Global tick manager for running widget animations
---@field public StoppedSequencePlayers TArray<UUMGSequencePlayer>
---@field private NamedSlotBindings TArray<FNamedSlotBinding> @Stores the widgets being assigned to named slots
---@field private Extensions TArray<UUserWidgetExtension> @The UserWidget extensions
---@field public WidgetTree UWidgetTree @The widget tree contained inside this user widget initialized by the blueprint
---@field public DesignTimeSize FVector2D @Stores the design time desired size of the user widget
---@field public DesignSizeMode EDesignPreviewSizeMode
---@field public PaletteCategory string @The category this widget appears in the palette.
---@field public PreviewBackground UTexture2D @A preview background that you can use when designing the UI to get a sense of scale on the screen.  Use a texture with a screenshot of your game in it, for example if you were designing a HUD.
---@field public bHasScriptImplementedTick boolean @If a widget has an implemented tick blueprint function
---@field public bHasScriptImplementedPaint boolean @If a widget has an implemented paint blueprint function
---@field private TickFrequency EWidgetTickFrequency @This widget is allowed to tick. If this is unchecked tick will never be called, animations will not play correctly, and latent actions will not execute. Uncheck this for performance reasons only
---@field private DesiredFocusWidget FWidgetChild
---@field protected InputComponent UInputComponent
---@field protected AnimationCallbacks TArray<FAnimationEventBinding>
local UUserWidget = {}

---StopListeningForAllInputActions will automatically Register an Input Component with the player input system.
---If you however, want to Pause and Resume, listening for a set of actions, the best way is to use
---UnregisterInputComponent to pause, and RegisterInputComponent to resume listening.
function UUserWidget:UnregisterInputComponent() end

---Unbind an animation started delegate.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
function UUserWidget:UnbindFromAnimationStarted(Animation, Delegate) end

---Unbind an animation finished delegate.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
function UUserWidget:UnbindFromAnimationFinished(Animation, Delegate) end

---@param Animation UWidgetAnimation
function UUserWidget:UnbindAllFromAnimationStarted(Animation) end

---@param Animation UWidgetAnimation
function UUserWidget:UnbindAllFromAnimationFinished(Animation) end

---Ticks this widget.  Override in derived classes, but always call the parent implementation.
---@param MyGeometry FGeometry
---@param InDeltaTime number
function UUserWidget:Tick(MyGeometry, InDeltaTime) end

---Removes the binding for a particular action's callback.
---@param ActionName string
---@param EventType integer
function UUserWidget:StopListeningForInputAction(ActionName, EventType) end

---Stops listening to all input actions, and unregisters the input component with the player controller.
function UUserWidget:StopListeningForAllInputActions() end

---Cancels any pending Delays or timer callbacks for this widget, and stops all active animations on the widget.
function UUserWidget:StopAnimationsAndLatentActions() end

---Stops an already running animation in this widget
---@param InAnimation UWidgetAnimation
function UUserWidget:StopAnimation(InAnimation) end

---Stop All actively running animations.
function UUserWidget:StopAllAnimations() end

---Sets the widgets position in the viewport.
---Otherwise inverse DPI is applied to the position so that when the location is scaled
---by DPI, it ends up in the expected position.
---@param Position FVector2D
---@param bRemoveDPIScale boolean @[opt] 
function UUserWidget:SetPositionInViewport(Position, bRemoveDPIScale) end

---Changes the playback rate of a playing animation
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed number @[opt] 
function UUserWidget:SetPlaybackSpeed(InAnimation, PlaybackSpeed) end

---Sets the padding for the user widget, putting a larger gap between the widget border and it's root widget.
---@param InPadding FMargin
function UUserWidget:SetPadding(InPadding) end

---Sets the local player associated with this UI via PlayerController reference.
---@param LocalPlayerController APlayerController
function UUserWidget:SetOwningPlayer(LocalPlayerController) end

---Changes the number of loops to play given a playing animation
---@param InAnimation UWidgetAnimation
---@param NumLoopsToPlay integer
function UUserWidget:SetNumLoopsToPlay(InAnimation, NumLoopsToPlay) end

---@param NewPriority integer
function UUserWidget:SetInputActionPriority(NewPriority) end

---@param bShouldBlock boolean
function UUserWidget:SetInputActionBlocking(bShouldBlock) end

---Sets the foreground color of the widget, this is inherited by sub widgets.  Any color property
---that is marked as inherit will use this color.
---@param InForegroundColor FSlateColor
function UUserWidget:SetForegroundColor(InForegroundColor) end

---@param Size FVector2D
function UUserWidget:SetDesiredSizeInViewport(Size) end

---Sets the child Widget that should receive focus when this UserWidget gets focus.
---@param Widget UWidget
---@return boolean
function UUserWidget:SetDesiredFocusWidget(Widget) end

---Sets the tint of the widget, this affects all child widgets.
---@param InColorAndOpacity FLinearColor
function UUserWidget:SetColorAndOpacity(InColorAndOpacity) end

---Sets the current time of the animation in this widget. Does not change state.
---@param InAnimation UWidgetAnimation
---@param InTime number
function UUserWidget:SetAnimationCurrentTime(InAnimation, InTime) end

---@param Anchors FAnchors
function UUserWidget:SetAnchorsInViewport(Anchors) end

---@param Alignment FVector2D
function UUserWidget:SetAlignmentInViewport(Alignment) end

---If an animation is playing, this function will reverse the playback.
---@param InAnimation UWidgetAnimation
function UUserWidget:ReverseAnimation(InAnimation) end

function UUserWidget:RemoveFromViewport() end

---Remove all extensions of the requested type.
---@param InExtensionType TSubclassOf_UUserWidgetExtension_
function UUserWidget:RemoveExtensions(InExtensionType) end

---Remove the extension.
---@param InExtension UUserWidgetExtension
function UUserWidget:RemoveExtension(InExtension) end

---ListenForInputAction will automatically Register an Input Component with the player input system.
---If you however, want to Pause and Resume, listening for a set of actions, the best way is to use
---UnregisterInputComponent to pause, and RegisterInputComponent to resume listening.
function UUserWidget:RegisterInputComponent() end

---Stops an already running animation in this widget
---@param InAnimation UWidgetAnimation
function UUserWidget:QueueStopAnimation(InAnimation) end

---Stop All actively running animations.
function UUserWidget:QueueStopAllAnimations() end

---Plays an animation in this widget a specified number of times stopping at a specified time
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param EndAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
function UUserWidget:QueuePlayAnimationTimeRange(InAnimation, StartAtTime, EndAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed, bRestoreState) end

---Plays an animation on this widget relative to it's current state in reverse.  You should use this version in situations where
---say a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding
---in the opposite direction.
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
function UUserWidget:QueuePlayAnimationReverse(InAnimation, PlaybackSpeed, bRestoreState) end

---Plays an animation on this widget relative to it's current state forward.  You should use this version in situations where
---say a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding
---in the opposite direction.
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
function UUserWidget:QueuePlayAnimationForward(InAnimation, PlaybackSpeed, bRestoreState) end

---Plays an animation in this widget a specified number of times
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
function UUserWidget:QueuePlayAnimation(InAnimation, StartAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed, bRestoreState) end

---Pauses an already running animation in this widget
---@param InAnimation UWidgetAnimation
---@return number
function UUserWidget:QueuePauseAnimation(InAnimation) end

---Called by both the game and the editor.  Allows users to run initial setup for their widgets to better preview
---the setup in the designer and since generally that same setup code is required at runtime, it's called there
---as well.
---**WARNING**
---This is intended purely for cosmetic updates using locally owned data, you can not safely access any game related
---state, if you call something that doesn't expect to be run at editor time, you may crash the editor.
---In the event you save the asset with blueprint code that causes a crash on evaluation.  You can turn off
---PreConstruct evaluation in the Widget Designer settings in the Editor Preferences.
---@param IsDesignTime boolean
function UUserWidget:PreConstruct(IsDesignTime) end

---Plays a sound through the UI
---@param SoundToPlay USoundBase
function UUserWidget:PlaySound(SoundToPlay) end

---Plays an animation in this widget a specified number of times stopping at a specified time
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param EndAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
---@return FWidgetAnimationHandle
function UUserWidget:PlayAnimationTimeRange(InAnimation, StartAtTime, EndAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed, bRestoreState) end

---Plays an animation on this widget relative to it's current state in reverse.  You should use this version in situations where
---say a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding
---in the opposite direction.
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
---@return FWidgetAnimationHandle
function UUserWidget:PlayAnimationReverse(InAnimation, PlaybackSpeed, bRestoreState) end

---Plays an animation on this widget relative to it's current state forward.  You should use this version in situations where
---say a user can click a button and that causes a panel to slide out, and you want to reverse that same animation to begin sliding
---in the opposite direction.
---@param InAnimation UWidgetAnimation
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
---@return FWidgetAnimationHandle
function UUserWidget:PlayAnimationForward(InAnimation, PlaybackSpeed, bRestoreState) end

---Plays an animation in this widget a specified number of times
---@param InAnimation UWidgetAnimation
---@param StartAtTime number @[opt] 
---@param NumLoopsToPlay integer @[opt] 
---@param PlayMode integer @[opt] 
---@param PlaybackSpeed number @[opt] 
---@param bRestoreState boolean @[opt] 
---@return FWidgetAnimationHandle
function UUserWidget:PlayAnimation(InAnimation, StartAtTime, NumLoopsToPlay, PlayMode, PlaybackSpeed, bRestoreState) end

---Pauses an already running animation in this widget
---@param InAnimation UWidgetAnimation
---@return number
function UUserWidget:PauseAnimation(InAnimation) end

---Called when a touchpad touch is started (finger down)
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchStarted(MyGeometry, InTouchEvent) end

---Called when a touchpad touch is moved  (finger moved)
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchMoved(MyGeometry, InTouchEvent) end

---Called when the user performs a gesture on trackpad. This event is bubbled.
---@param MyGeometry FGeometry
---@param GestureEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchGesture(MyGeometry, GestureEvent) end

---Called when a touchpad force has changed (user pressed down harder or let up)
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchForceChanged(MyGeometry, InTouchEvent) end

---Called when a touchpad touch is first moved (initial finger movement)
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchFirstMove(MyGeometry, InTouchEvent) end

---Called when a touchpad touch is ended (finger lifted)
---@param MyGeometry FGeometry
---@param InTouchEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnTouchEnded(MyGeometry, InTouchEvent) end

---If focus is lost on on this widget or on a child widget and this widget is
---no longer part of the focus path.
---@param InFocusEvent FFocusEvent
function UUserWidget:OnRemovedFromFocusPath(InFocusEvent) end

---Just like OnMouseButtonDown, but tunnels instead of bubbling.
---If this event is handled, OnMouseButtonDown will not be sent.
---Use this event sparingly as preview events generally make UIs more
---difficult to reason about.
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnPreviewMouseButtonDown(MyGeometry, MouseEvent) end

---Called after a key (keyboard, controller, ...) is pressed when this widget or a child of this widget has focus
---If a widget handles this event, OnKeyDown will *not* be passed to the focused widget.
---This event is primarily to allow parent widgets to consume an event before a child widget processes
---it and it should be used only when there is no better design alternative.
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUserWidget:OnPreviewKeyDown(MyGeometry, InKeyEvent) end

---@param Context FPaintContext @[out] 
function UUserWidget:OnPaint(Context) end

---Called when the mouse wheel is spun. This event is bubbled.
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseWheel(MyGeometry, MouseEvent) end

---The system calls this method to notify the widget that a mouse moved within it. This event is bubbled.
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseMove(MyGeometry, MouseEvent) end

---The system will use this event to notify a widget that the cursor has left it. This event is NOT bubbled.
---@param MouseEvent FPointerEvent
function UUserWidget:OnMouseLeave(MouseEvent) end

---The system will use this event to notify a widget that the cursor has entered it. This event is NOT bubbled.
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
function UUserWidget:OnMouseEnter(MyGeometry, MouseEvent) end

---Called when mouse capture is lost if it was owned by this widget.
function UUserWidget:OnMouseCaptureLost() end

---The system calls this method to notify the widget that a mouse button was release within it. This event is bubbled.
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseButtonUp(MyGeometry, MouseEvent) end

---The system calls this method to notify the widget that a mouse button was pressed within it. This event is bubbled.
---@param MyGeometry FGeometry
---@param MouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseButtonDown(MyGeometry, MouseEvent) end

---Called when a mouse button is double clicked.  Override this in derived classes.
---@param InMyGeometry FGeometry
---@param InMouseEvent FPointerEvent
---@return FEventReply
function UUserWidget:OnMouseButtonDoubleClick(InMyGeometry, InMouseEvent) end

---Called when motion is detected (controller or device)
---e.g. Someone tilts or shakes their controller.
---@param MyGeometry FGeometry
---@param InMotionEvent FMotionEvent
---@return FEventReply
function UUserWidget:OnMotionDetected(MyGeometry, InMotionEvent) end

---Called after a key (keyboard, controller, ...) is released when this widget has focus
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUserWidget:OnKeyUp(MyGeometry, InKeyEvent) end

---Called after a key (keyboard, controller, ...) is pressed when this widget has focus (this event bubbles if not handled)
---@param MyGeometry FGeometry
---@param InKeyEvent FKeyEvent
---@return FEventReply
function UUserWidget:OnKeyDown(MyGeometry, InKeyEvent) end

---Called after a character is entered while this widget has focus
---@param MyGeometry FGeometry
---@param InCharacterEvent FCharacterEvent
---@return FEventReply
function UUserWidget:OnKeyChar(MyGeometry, InCharacterEvent) end

---Called once only at game time on non-template instances.
---While Construct/Destruct pertain to the underlying Slate, this is called only once for the UUserWidget.
---If you have one-time things to establish up-front (like binding callbacks to events on BindWidget properties), do so here.
function UUserWidget:OnInitialized() end

---Called when keyboard focus is given to this widget.  This event does not bubble.
---@param MyGeometry FGeometry
---@param InFocusEvent FFocusEvent
---@return FEventReply
function UUserWidget:OnFocusReceived(MyGeometry, InFocusEvent) end

---Called when this widget loses focus.  This event does not bubble.
---@param InFocusEvent FFocusEvent
function UUserWidget:OnFocusLost(InFocusEvent) end

---Called when the user is dropping something onto a widget.  Ends the drag and drop operation, even if no widget handles this.
---@param MyGeometry FGeometry
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
---@return boolean
function UUserWidget:OnDrop(MyGeometry, PointerEvent, Operation) end

---Called during drag and drop when the the mouse is being dragged over a widget.
---@param MyGeometry FGeometry
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
---@return boolean
function UUserWidget:OnDragOver(MyGeometry, PointerEvent, Operation) end

---Called during drag and drop when the drag leaves the widget.
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
function UUserWidget:OnDragLeave(PointerEvent, Operation) end

---Called during drag and drop when the drag enters the widget.
---@param MyGeometry FGeometry
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
function UUserWidget:OnDragEnter(MyGeometry, PointerEvent, Operation) end

---Called when Slate detects that a widget started to be dragged.
---@param MyGeometry FGeometry
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation @[out] 
function UUserWidget:OnDragDetected(MyGeometry, PointerEvent, Operation) end

---Called when the user cancels the drag operation, typically when they simply release the mouse button after
---beginning a drag operation, but failing to complete the drag.
---@param PointerEvent FPointerEvent
---@param Operation UDragDropOperation
function UUserWidget:OnDragCancelled(PointerEvent, Operation) end

---Called when an animation is started.
---@param Animation UWidgetAnimation
function UUserWidget:OnAnimationStarted(Animation) end

---Called when an animation has either played all the way through or is stopped
---@param Animation UWidgetAnimation
function UUserWidget:OnAnimationFinished(Animation) end

---Called when an analog value changes on a button that supports analog
---@param MyGeometry FGeometry
---@param InAnalogInputEvent FAnalogInputEvent
---@return FEventReply
function UUserWidget:OnAnalogValueChanged(MyGeometry, InAnalogInputEvent) end

---If focus is gained on on this widget or on a child widget and this widget is added
---to the focus path, and wasn't previously part of it, this event is called.
---@param InFocusEvent FFocusEvent
function UUserWidget:OnAddedToFocusPath(InFocusEvent) end

---Listens for a particular Player Input Action by name.  This requires that those actions are being executed, and
---that we're not currently in UI-Only Input Mode.
---@param ActionName string
---@param EventType integer
---@param bConsume boolean
---@param Callback Delegate
function UUserWidget:ListenForInputAction(ActionName, EventType, bConsume, Callback) end

---Are we currently playing any animations?
---@return boolean
function UUserWidget:IsPlayingAnimation() end

---Checks if the action has a registered callback with the input component.
---@param ActionName string
---@return boolean
function UUserWidget:IsListeningForInputAction(ActionName) end

---Gets a value indicating if the widget is interactive.
---@return boolean
function UUserWidget:IsInteractable() end

---
---@return boolean
function UUserWidget:IsAnyAnimationPlaying() end

---returns true if the animation is currently playing forward, false otherwise.
---@param InAnimation UWidgetAnimation
---@return boolean
function UUserWidget:IsAnimationPlayingForward(InAnimation) end

---Gets whether an animation is currently playing on this widget.
---@param InAnimation UWidgetAnimation
---@return boolean
function UUserWidget:IsAnimationPlaying(InAnimation) end

---Gets the player pawn associated with this UI.
---@return APawn
function UUserWidget:GetOwningPlayerPawn() end

---Gets the player camera manager associated with this UI.
---@return APlayerCameraManager
function UUserWidget:GetOwningPlayerCameraManager() end

---@return boolean
function UUserWidget:GetIsVisible() end

---Find the extensions of the requested type.
---@param ExtensionType TSubclassOf_UUserWidgetExtension_
---@return TArray_UUserWidgetExtension_
function UUserWidget:GetExtensions(ExtensionType) end

---Find the first extension of the requested type.
---@param ExtensionType TSubclassOf_UUserWidgetExtension_
---@return UUserWidgetExtension
function UUserWidget:GetExtension(ExtensionType) end

---Gets the current time of the animation in this widget
---@param InAnimation UWidgetAnimation
---@return number
function UUserWidget:GetAnimationCurrentTime(InAnimation) end

---@return FAnchors
function UUserWidget:GetAnchorsInViewport() end

---@return FVector2D
function UUserWidget:GetAlignmentInViewport() end

---Flushes all animations on all widgets to guarantee that any queued updates are processed before this call returns
function UUserWidget:FlushAnimations() end

---Called when a widget is no longer referenced causing the slate resource to destroyed.  Just like
---Construct this event can be called multiple times.
function UUserWidget:Destruct() end

---Called after the underlying slate widget is constructed.  Depending on how the slate object is used
---this event may be called multiple times due to adding and removing from the hierarchy.
---If you need a true called-once-when-created event, use OnInitialized.
function UUserWidget:Construct() end

---Cancels any pending Delays or timer callbacks for this widget.
function UUserWidget:CancelLatentActions() end

---Bind an animation started delegate.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
function UUserWidget:BindToAnimationStarted(Animation, Delegate) end

---Bind an animation finished delegate.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
function UUserWidget:BindToAnimationFinished(Animation, Delegate) end

---Allows binding to a specific animation's event.
---@param Animation UWidgetAnimation
---@param Delegate Delegate
---@param AnimationEvent EWidgetAnimationEvent
---@param UserTag string @[opt] 
function UUserWidget:BindToAnimationEvent(Animation, Delegate, AnimationEvent, UserTag) end

---Adds it to the game's viewport and fills the entire screen, unless SetDesiredSizeInViewport is called
---to explicitly set the size.
---@param ZOrder integer @[opt] 
function UUserWidget:AddToViewport(ZOrder) end

---Adds the widget to the game's viewport in a section dedicated to the player.  This is valuable in a split screen
---game where you need to only show a widget over a player's portion of the viewport.
---@param ZOrder integer @[opt] 
---@return boolean
function UUserWidget:AddToPlayerScreen(ZOrder) end

---Add the extension of the requested type.
---@param InExtensionType TSubclassOf_UUserWidgetExtension_
---@return UUserWidgetExtension
function UUserWidget:AddExtension(InExtensionType) end


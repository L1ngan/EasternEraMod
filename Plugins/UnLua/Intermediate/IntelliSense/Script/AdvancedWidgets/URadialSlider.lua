---A simple widget that shows a sliding bar with a handle that allows you to control the value between 0..1.
---* No Children
---@class URadialSlider : UWidget
---@field public Value number @The slider value to display.
---@field public ValueDelegate Delegate @A bindable delegate to allow logic to drive the value of the widget
---@field public bUseCustomDefaultValue boolean @Whether the slider should draw it's progress bar from a custom value on the slider
---@field public CustomDefaultValue number @The value where the slider should draw it's progress bar from, independent of direction
---@field public SliderRange FRuntimeFloatCurve @A curve that defines how the slider should be sampled. Default is linear.
---@field public ValueTags TArray<number> @Adds text tags to the radial slider at the value's position.
---@field public SliderHandleStartAngle number @The angle at which the Slider Handle will start.
---@field public SliderHandleEndAngle number @The angle at which the Slider Handle will end.
---@field public AngularOffset number @Rotates radial slider by arbitrary offset to support full gamut of configurations.
---@field public HandStartEndRatio FVector2D @Start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle).
---@field public WidgetStyle FSliderStyle @The progress bar style
---@field public SliderBarColor FLinearColor @The color to draw the slider bar in.
---@field public SliderProgressColor FLinearColor @The color to draw the completed progress of the slider bar in.
---@field public SliderHandleColor FLinearColor @The color to draw the slider handle in.
---@field public CenterBackgroundColor FLinearColor @The color to draw the center background in.
---@field public Locked boolean @Whether the handle is interactive or fixed.
---@field public MouseUsesStep boolean @Sets new value if mouse position is greater/less than half the step size.
---@field public RequiresControllerLock boolean @Sets whether we have to lock input to change the slider value.
---@field public StepSize number @The amount to adjust the value by, when using a controller or keyboard
---@field public IsFocusable boolean @Should the slider be focusable?
---@field public UseVerticalDrag boolean @Whether the value is changed when dragging vertically as opposed to along the radial curve.
---@field public ShowSliderHandle boolean @Whether to show the slider handle (thumb).
---@field public ShowSliderHand boolean @Whether to show the slider hand.
---@field public OnMouseCaptureBegin MulticastDelegate @Invoked when the mouse is pressed and a capture begins.
---@field public OnMouseCaptureEnd MulticastDelegate @Invoked when the mouse is released and a capture ends.
---@field public OnControllerCaptureBegin MulticastDelegate @Invoked when the controller capture begins.
---@field public OnControllerCaptureEnd MulticastDelegate @Invoked when the controller capture ends.
---@field public OnValueChanged MulticastDelegate @Called when the value is changed by slider or typing.
local URadialSlider = {}

---Adds value tags to the slider.
---@param InValueTags TArray_number_
function URadialSlider:SetValueTags(InValueTags) end

---Sets the current value of the slider.
---@param InValue number
function URadialSlider:SetValue(InValue) end

---Set whether the value is changed when dragging vertically as opposed to along the radial curve.
---@param InUseVerticalDrag boolean
function URadialSlider:SetUseVerticalDrag(InUseVerticalDrag) end

---Sets the amount to adjust the value by, when using a controller or keyboard
---@param InValue number
function URadialSlider:SetStepSize(InValue) end

---Sets the curve for the slider range
---@param InSliderRange FRuntimeFloatCurve
function URadialSlider:SetSliderRange(InSliderRange) end

---Sets the progress color of the slider bar
---@param InValue FLinearColor
function URadialSlider:SetSliderProgressColor(InValue) end

---Sets the minimum angle of the slider.
---@param InValue number
function URadialSlider:SetSliderHandleStartAngle(InValue) end

---Sets the maximum angle of the slider.
---@param InValue number
function URadialSlider:SetSliderHandleEndAngle(InValue) end

---Sets the color of the handle bar
---@param InValue FLinearColor
function URadialSlider:SetSliderHandleColor(InValue) end

---Sets the color of the slider bar
---@param InValue FLinearColor
function URadialSlider:SetSliderBarColor(InValue) end

---Whether to show the slider handle (thumb).
---@param InShowSliderHandle boolean
function URadialSlider:SetShowSliderHandle(InShowSliderHandle) end

---Whether to show the slider hand.
---@param InShowSliderHand boolean
function URadialSlider:SetShowSliderHand(InShowSliderHand) end

---Sets the handle to be interactive or fixed
---@param InValue boolean
function URadialSlider:SetLocked(InValue) end

---Sets the start and end of the hand as a ratio to the slider radius (so 0.0 to 1.0 is from the slider center to the handle).
---@param InValue FVector2D
function URadialSlider:SetHandStartEndRatio(InValue) end

---Sets the current custom default value of the slider.
---@param InValue number
function URadialSlider:SetCustomDefaultValue(InValue) end

---Sets the color of the slider bar
---@param InValue FLinearColor
function URadialSlider:SetCenterBackgroundColor(InValue) end

---Sets the Angular Offset for the slider.
---@param InValue number
function URadialSlider:SetAngularOffset(InValue) end

---Gets the current value of the slider.
---@return number
function URadialSlider:GetValue() end

---Get the current raw slider alpha from 0 to 1
---@return number
function URadialSlider:GetNormalizedSliderHandlePosition() end

---Gets the current custom default value of the slider.
---@return number
function URadialSlider:GetCustomDefaultValue() end


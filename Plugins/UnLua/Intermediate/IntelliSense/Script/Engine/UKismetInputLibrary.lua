---@class UKismetInputLibrary : UBlueprintFunctionLibrary
local UKismetInputLibrary = {}

---Returns true if this event a result from a touch (as opposed to a mouse)
---@param Input FPointerEvent
---@return boolean
function UKismetInputLibrary.PointerEvent_IsTouchEvent(Input) end

---Mouse buttons that are currently pressed
---@param Input FPointerEvent
---@param MouseButton FKey
---@return boolean
function UKismetInputLibrary.PointerEvent_IsMouseButtonDown(Input, MouseButton) end

---How much did the mouse wheel turn since the last mouse event
---@param Input FPointerEvent
---@return number
function UKismetInputLibrary.PointerEvent_GetWheelDelta(Input) end

---Returns the index of the user that caused the event
---@param Input FPointerEvent
---@return integer
function UKismetInputLibrary.PointerEvent_GetUserIndex(Input) end

---Returns the index of the touch pad that generated this event (for platforms with multiple touch pads per user)
---@param Input FPointerEvent
---@return integer
function UKismetInputLibrary.PointerEvent_GetTouchpadIndex(Input) end

---Returns The position of the cursor in screen space
---@param Input FPointerEvent
---@return FVector2D
function UKismetInputLibrary.PointerEvent_GetScreenSpacePosition(Input) end

---Returns the unique identifier of the pointer (e.g., finger index)
---@param Input FPointerEvent
---@return integer
function UKismetInputLibrary.PointerEvent_GetPointerIndex(Input) end

---Returns the position of the cursor in screen space last time we handled an input event
---@param Input FPointerEvent
---@return FVector2D
function UKismetInputLibrary.PointerEvent_GetLastScreenSpacePosition(Input) end

---Returns the type of touch gesture
---@param Input FPointerEvent
---@return ESlateGesture
function UKismetInputLibrary.PointerEvent_GetGestureType(Input) end

---Returns the change in gesture value since the last gesture event of the same type.
---@param Input FPointerEvent
---@return FVector2D
function UKismetInputLibrary.PointerEvent_GetGestureDelta(Input) end

---Mouse button that caused this event to be raised (possibly FKey::Invalid)
---@param Input FPointerEvent
---@return FKey
function UKismetInputLibrary.PointerEvent_GetEffectingButton(Input) end

---Returns the distance the mouse traveled since the last event was handled.
---@param Input FPointerEvent
---@return FVector2D
function UKismetInputLibrary.PointerEvent_GetCursorDelta(Input) end

---Returns true if either shift key was down when the key state was captured
---@param KeysState FSlateModifierKeysState
---@return boolean
function UKismetInputLibrary.ModifierKeysState_IsShiftDown(KeysState) end

---Returns true if either control key was down when the key state was captured
---@param KeysState FSlateModifierKeysState
---@return boolean
function UKismetInputLibrary.ModifierKeysState_IsControlDown(KeysState) end

---Returns true if either command key was down when the key state was captured
---@param KeysState FSlateModifierKeysState
---@return boolean
function UKismetInputLibrary.ModifierKeysState_IsCommandDown(KeysState) end

---Returns true if either alt key was down when the key state was captured
---@param KeysState FSlateModifierKeysState
---@return boolean
function UKismetInputLibrary.ModifierKeysState_IsAltDown(KeysState) end

---Returns true if this is a valid key.
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsValid(Key) end

---Returns true if the key is a mouse button
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsMouseButton(Key) end

---Returns true if the key is a modifier key: Ctrl, Command, Alt, Shift
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsModifierKey(Key) end

---Returns true if the key is a keyboard button
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsKeyboardKey(Key) end

---Returns true if the key is a gamepad button
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsGamepadKey(Key) end

---Returns true if the key is a digital button press
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsDigital(Key) end

---Returns true if the key is a 1D axis emulating a digital button press.
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsButtonAxis(Key) end

---Returns true if the key is a 3D (vector) axis
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsAxis3D(Key) end

---Returns true if the key is a 2D (vector) axis
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsAxis2D(Key) end

---Returns true if the key is a 1D (float) axis
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsAxis1D(Key) end

---Returns true if the key is an analog axis
---@param Key FKey
---@return boolean
function UKismetInputLibrary.Key_IsAnalog(Key) end

---Returns the navigation action corresponding to this key, or Invalid if not found
---@param InKeyEvent FKeyEvent
---@return EUINavigation
function UKismetInputLibrary.Key_GetNavigationDirectionFromKey(InKeyEvent) end

---Returns the navigation action corresponding to this key, or Invalid if not found
---@param InAnalogEvent FAnalogInputEvent
---@return EUINavigation
function UKismetInputLibrary.Key_GetNavigationDirectionFromAnalog(InAnalogEvent) end

---Returns the navigation action corresponding to this key, or Invalid if not found
---@param InKeyEvent FKeyEvent
---@return EUINavigationAction
function UKismetInputLibrary.Key_GetNavigationActionFromKey(InKeyEvent) end

---@param InKey FKey
---@return EUINavigationAction
function UKismetInputLibrary.Key_GetNavigationAction(InKey) end

---Returns the display name of the key.
---@param Key FKey
---@param bLongDisplayName boolean @[opt] 
---@return string
function UKismetInputLibrary.Key_GetDisplayName(Key, bLongDisplayName) end

---Returns true if either shift key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsShiftDown(Input) end

---Returns true if right shift key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsRightShiftDown(Input) end

---Returns true if left control key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsRightControlDown(Input) end

---Returns true if right command key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsRightCommandDown(Input) end

---Returns true if right alt key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsRightAltDown(Input) end

---Returns whether or not this character is an auto-repeated keystroke
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsRepeat(Input) end

---Returns true if left shift key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsLeftShiftDown(Input) end

---Returns true if left control key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsLeftControlDown(Input) end

---Returns true if left command key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsLeftCommandDown(Input) end

---Returns true if left alt key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsLeftAltDown(Input) end

---Returns true if either control key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsControlDown(Input) end

---Returns true if either command key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsCommandDown(Input) end

---Returns true if either alt key was down when this event occurred
---@param Input FInputEvent
---@return boolean
function UKismetInputLibrary.InputEvent_IsAltDown(Input) end

---
---@param Key FInputChord
---@return string
function UKismetInputLibrary.InputChord_GetDisplayName(Key) end

---@param Input FKeyEvent
---@return integer
function UKismetInputLibrary.GetUserIndex(Input) end

---Returns a snapshot of the cached modifier-keys state for the application.
---@return FSlateModifierKeysState
function UKismetInputLibrary.GetModifierKeysState() end

---Returns the key for this event.
---@param Input FKeyEvent
---@return FKey
function UKismetInputLibrary.GetKey(Input) end

---@param Input FAnalogInputEvent
---@return number
function UKismetInputLibrary.GetAnalogValue(Input) end

---Test if the input key are equal (A == B)
---Returns true if the key are equal, false otherwise
---@param A FKey
---@param B FKey
---@return boolean
function UKismetInputLibrary.EqualEqual_KeyKey(A, B) end

---Test if the input chords are equal (A == B)
---Returns true if the chords are equal, false otherwise
---@param A FInputChord
---@param B FInputChord
---@return boolean
function UKismetInputLibrary.EqualEqual_InputChordInputChord(A, B) end

---Calibrate the tilt for the input device
function UKismetInputLibrary.CalibrateTilt() end


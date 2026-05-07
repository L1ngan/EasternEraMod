---Implement an Actor component for input bindings.
---An Input Component is a transient component that enables an Actor to bind various forms of input events to delegate functions.
---Input components are processed from a stack managed by the PlayerController and processed by the PlayerInput.
---Each binding can consume the input event preventing other components on the input stack from processing the input.
---@class UInputComponent : UActorComponent
---@field private CachedKeyToActionInfo TArray<FCachedKeyToActionInfo>
local UInputComponent = {}

---Returns true if the given key/button was down last frame and up this frame.
---@param Key FKey
---@return boolean
function UInputComponent:WasControllerKeyJustReleased(Key) end

---Returns true if the given key/button was up last frame and down this frame.
---@param Key FKey
---@return boolean
function UInputComponent:WasControllerKeyJustPressed(Key) end

---@param InOwner AActor
---@param EndPlayReason integer
function UInputComponent:OnInputOwnerEndPlayed(InOwner, EndPlayReason) end

---Returns true if the given key/button is pressed on the input of the controller (if present)
---@param Key FKey
---@return boolean
function UInputComponent:IsControllerKeyDown(Key) end

---Returns the location of a touch, and if it's held down
---@param FingerIndex integer
---@param LocationX number @[out] 
---@param LocationY number @[out] 
---@param bIsCurrentlyPressed boolean @[out] 
function UInputComponent:GetTouchState(FingerIndex, LocationX, LocationY, bIsCurrentlyPressed) end

---Returns the vector value for the given key/button.
---@param Key FKey
---@return FVector
function UInputComponent:GetControllerVectorKeyState(Key) end

---Retrieves how far the mouse moved this frame.
---@param DeltaX number @[out] 
---@param DeltaY number @[out] 
function UInputComponent:GetControllerMouseDelta(DeltaX, DeltaY) end

---Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame.
---@param Key FKey
---@return number
function UInputComponent:GetControllerKeyTimeDown(Key) end

---Retrieves the X and Y displacement of the given analog stick.  For WhickStick, 0 = left, 1 = right.
---@param WhichStick integer
---@param StickX number @[out] 
---@param StickY number @[out] 
function UInputComponent:GetControllerAnalogStickState(WhichStick, StickX, StickY) end

---Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up.
---@param Key FKey
---@return number
function UInputComponent:GetControllerAnalogKeyState(Key) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UInputComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UInputComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UInputComponent:AddAssetUserDataOfClass(InUserDataClass) end


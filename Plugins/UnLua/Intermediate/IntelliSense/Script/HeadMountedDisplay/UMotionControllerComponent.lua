---@class UMotionControllerComponent : UPrimitiveComponent
---@field public PlayerIndex integer @Which player index this motion controller should automatically follow
---@field public MotionSource string @Defines which pose this component should receive from the OpenXR Runtime. Left/Right MotionSource is the same as LeftGrip/RightGrip. See OpenXR specification for details on poses.
---@field public bDisableLowLatencyUpdate boolean @If false, render transforms within the motion controller hierarchy will be updated a second time immediately before rendering.
---@field public CurrentTrackingStatus ETrackingStatus @The tracking status for the device (e.g. full tracking, inertial tracking only, no tracking)
local UMotionControllerComponent = {}

---@param NewSource EControllerHand
function UMotionControllerComponent:SetTrackingSource(NewSource) end

---@param NewSource string
function UMotionControllerComponent:SetTrackingMotionSource(NewSource) end

---@param NewPlayer integer
function UMotionControllerComponent:SetAssociatedPlayerIndex(NewPlayer) end

---Blueprint Implementable function for responding to updated data from a motion controller (so we can use custom parameter values from it)
function UMotionControllerComponent:OnMotionControllerUpdated() end

---Whether or not this component had a valid tracked device this frame
---@return boolean
function UMotionControllerComponent:IsTracked() end

---@return EControllerHand
function UMotionControllerComponent:GetTrackingSource() end

---Returns the value of a custom parameter on the current in use Motion Controller (see member InUseMotionController). Only valid for the duration of OnMotionControllerUpdated
---@param InName string
---@param bValueFound boolean @[out] 
---@return number
function UMotionControllerComponent:GetParameterValue(InName, bValueFound) end

---If the motion tracking system provides linear velocity at this time the vector will be that velocity in cm/s in unreal world space and the function will return true.  If velocity is unavailable it will return false.
---@param OutLinearVelocity FVector @[out] 
---@return boolean
function UMotionControllerComponent:GetLinearVelocity(OutLinearVelocity) end

---If the motion tracking system provides linear acceleration at this time the vector will be that acceleration in cm/(s^2) in unreal world space and the function will return true.  If acceleration is unavailable it will return false.
---@param OutLinearAcceleration FVector @[out] 
---@return boolean
function UMotionControllerComponent:GetLinearAcceleration(OutLinearAcceleration) end

---@param jointIndex integer
---@param bValueFound boolean @[out] 
---@return FVector
function UMotionControllerComponent:GetHandJointPosition(jointIndex, bValueFound) end

---If the motion tracking system provides angular velocity at this time OutAngularVelocity will be that velocity in deg/s in unreal world space and the function will return true. Note that it is not difficult to rotate a controller at more than 0.5 or 1 rotation per second briefly and some mathmatical operations(such as conversion to quaternion) lose rotations beyond 180 degrees or 360 degrees..  In some cases that is OK becuase the resulting final rotation is the same, but in some cases it would generate incorrect results.   If angular velocity is unavailable it will return false.
---@param OutAngularVelocity FRotator @[out] 
---@return boolean
function UMotionControllerComponent:GetAngularVelocity(OutAngularVelocity) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMotionControllerComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UMotionControllerComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UMotionControllerComponent:AddAssetUserDataOfClass(InUserDataClass) end


---Performs continuous rotation of a component at a specific rotation rate.
---Rotation can optionally be offset around a pivot point.
---Collision testing is not performed during movement.
---@class URotatingMovementComponent : UMovementComponent
---@field public RotationRate FRotator @How fast to update roll/pitch/yaw of the component we update.
---@field public PivotTranslation FVector @Translation of pivot point around which we rotate, relative to current rotation. For instance, with PivotTranslation set to (X=+100, Y=0, Z=0), rotation will occur around the point +100 units along the local X axis from the center of the object, rather than around the object's origin (the default).
---@field public bRotationInLocalSpace boolean @Whether rotation is applied in local or world space.
local URotatingMovementComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URotatingMovementComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function URotatingMovementComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URotatingMovementComponent:AddAssetUserDataOfClass(InUserDataClass) end


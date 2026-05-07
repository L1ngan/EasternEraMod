---Note: this component is still work in progress. Uses raycast springs for simple vehicle forces
---   Used with objects that have physics to create a spring down the X direction
---   ie. point X in the direction you want generate spring.
---@class UPhysicsSpringComponent : USceneComponent
---@field public SpringStiffness number @Specifies how much strength the spring has. The higher the SpringStiffness the more force the spring can push on a body with.
---@field public SpringDamping number @Specifies how quickly the spring can absorb energy of a body. The higher the damping the less oscillation
---@field public SpringLengthAtRest number @Determines how long the spring will be along the X-axis at rest. The spring will apply 0 force on a body when it's at rest.
---@field public SpringRadius number @Determines the radius of the spring.
---@field public SpringChannel integer @Strength of thrust force applied to the base object.
---@field public bIgnoreSelf boolean @If true, the spring will ignore all components in its own actor
---@field public SpringCompression number @The current compression of the spring. A spring at rest will have SpringCompression 0.
local UPhysicsSpringComponent = {}

---Returns the spring resting point in world space.
---@return FVector
function UPhysicsSpringComponent:GetSpringRestingPoint() end

---Returns the spring direction from start to resting point
---@return FVector
function UPhysicsSpringComponent:GetSpringDirection() end

---Returns the spring current end point in world space.
---@return FVector
function UPhysicsSpringComponent:GetSpringCurrentEndPoint() end

---Returns the spring compression as a normalized scalar along spring direction.
---0 implies spring is at rest
---1 implies fully compressed
---@return number
function UPhysicsSpringComponent:GetNormalizedCompressionScalar() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPhysicsSpringComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPhysicsSpringComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPhysicsSpringComponent:AddAssetUserDataOfClass(InUserDataClass) end


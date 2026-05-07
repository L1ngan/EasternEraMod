---Used to emit a radial force or impulse that can affect physics objects and or destructible objects.
---@class URadialForceComponent : USceneComponent
---@field public Radius number @The radius to apply the force or impulse in
---@field public Falloff integer @How the force or impulse should fall off as object are further away from the center
---@field public ImpulseStrength number @How strong the impulse should be
---@field public bImpulseVelChange boolean @If true, the impulse will ignore mass of objects and will always result in a fixed velocity change
---@field public bIgnoreOwningActor boolean @If true, do not apply force/impulse to any physics objects that are part of the Actor that owns this component.
---@field public ForceStrength number @How strong the force should be
---@field public DestructibleDamage number @If > 0.f, will cause damage to destructible meshes as well
---@field protected ObjectTypesToAffect TArray<integer> @The object types that are affected by this radial force
local URadialForceComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URadialForceComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function URadialForceComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URadialForceComponent:AddAssetUserDataOfClass(InUserDataClass) end


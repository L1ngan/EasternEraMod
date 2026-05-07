---PostProcessComponent. Enables Post process controls for blueprints.
---   Will use a parent UShapeComponent to provide volume data if available.
---@class UPostProcessComponent : USceneComponent
---@field public Settings FPostProcessSettings @Post process settings to use for this volume.
---@field public Priority number @Priority of this volume. In the case of overlapping volumes the one with the highest priority overrides the lower priority ones. The order is undefined if two or more overlapping volumes have the same priority.
---@field public BlendRadius number @World space radius around the volume that is used for blending (only if not unbound).
---@field public BlendWeight number @0:no effect, 1:full effect
---@field public bEnabled boolean @Whether this volume is enabled or not.
---@field public bUnbound boolean @set this to false to use the parent shape component as volume bounds. True affects the whole world regardless.
local UPostProcessComponent = {}

---Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight
---@param InBlendableObject TScriptInterface_UBlendableInterface_
---@param InWeight number @[opt] 
function UPostProcessComponent:AddOrUpdateBlendable(InBlendableObject, InWeight) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPostProcessComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPostProcessComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPostProcessComponent:AddAssetUserDataOfClass(InUserDataClass) end


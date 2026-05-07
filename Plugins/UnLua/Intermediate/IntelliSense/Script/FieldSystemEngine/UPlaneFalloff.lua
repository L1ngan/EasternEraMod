---Plane scalar field that will be defined only within a distance from a plane
---@class UPlaneFalloff : UFieldNodeFloat
---@field public Magnitude number @Magnitude of the plane falloff field
---@field public MinRange number @The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude
---@field public MaxRange number @The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude
---@field public Default number @The field value will be set to Default if the sample distance from the plane is higher than the distance
---@field public Distance number @Distance limit for the plane falloff field
---@field public Position FVector @Plane position of the plane falloff field
---@field public Normal FVector @Plane normal of the plane falloff field
---@field public Falloff integer @Type of falloff function used to model the evolution of the field from the plane surface to the distance isosurface
local UPlaneFalloff = {}

---Plane scalar field that will be defined only within a distance from a plane
---@param Magnitude number
---@param MinRange number
---@param MaxRange number
---@param Default number
---@param Distance number
---@param Position FVector
---@param Normal FVector
---@param Falloff integer
---@return UPlaneFalloff
function UPlaneFalloff:SetPlaneFalloff(Magnitude, MinRange, MaxRange, Default, Distance, Position, Normal, Falloff) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPlaneFalloff:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UPlaneFalloff:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UPlaneFalloff:AddAssetUserDataOfClass(InUserDataClass) end


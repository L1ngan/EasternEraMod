---Sphere scalar field that will be defined only within a sphere
---@class URadialFalloff : UFieldNodeFloat
---@field public Magnitude number @Magnitude of the sphere falloff field
---@field public MinRange number @The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude
---@field public MaxRange number @The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude
---@field public Default number @The field value will be set to Default if the sample distance from the center is higher than the radius
---@field public Radius number @Radius of the sphere falloff field
---@field public Position FVector @Center position of the sphere falloff field
---@field public Falloff integer @Type of falloff function used to model the evolution of the field from the sphere center to the sample position
local URadialFalloff = {}

---Sphere scalar field that will be defined only within a sphere
---@param Magnitude number
---@param MinRange number
---@param MaxRange number
---@param Default number
---@param Radius number
---@param Position FVector
---@param Falloff integer
---@return URadialFalloff
function URadialFalloff:SetRadialFalloff(Magnitude, MinRange, MaxRange, Default, Radius, Position, Falloff) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URadialFalloff:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function URadialFalloff:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function URadialFalloff:AddAssetUserDataOfClass(InUserDataClass) end


---Box scalar field that will be defined only within a box
---@class UBoxFalloff : UFieldNodeFloat
---@field public Magnitude number @Magnitude of the box falloff field
---@field public MinRange number @The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude
---@field public MaxRange number @The initial function value between 0 and 1 will be scaled between MinRange and MaxRange before being multiplied by magnitude
---@field public Default number @The field value will be set to Default if the sample distance from the box is higher than the scale of the transform
---@field public Transform FTransform @Translation, Rotation and Scale of the unit box
---@field public Falloff integer @Type of falloff function used to model the evolution of the field from the box surface to the sample position
local UBoxFalloff = {}

---Box scalar field that will be defined only within a box
---@param Magnitude number
---@param MinRange number
---@param MaxRange number
---@param Default number
---@param Transform FTransform
---@param Falloff integer
---@return UBoxFalloff
function UBoxFalloff:SetBoxFalloff(Magnitude, MinRange, MaxRange, Default, Transform, Falloff) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBoxFalloff:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UBoxFalloff:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UBoxFalloff:AddAssetUserDataOfClass(InUserDataClass) end


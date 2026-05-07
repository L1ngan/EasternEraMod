---Set a temporal wave scalar value according to the sample distance from the field position.
---@class UWaveScalar : UFieldNodeFloat
---@field public Magnitude number @Magnitude of the wave function
---@field public Position FVector @Center position of the wave field
---@field public Wavelength number @Distance between 2 wave peaks
---@field public Period number @Time over which the wave will travel from one peak to another one. The wave velocity is proportional to wavelength/period
---@field public Function integer @Wave function used for the field
---@field public Falloff integer @Type of falloff function used if the falloff function is picked
local UWaveScalar = {}

---Set a temporal wave scalar value according to the sample distance from the field position.
---@param Magnitude number
---@param Position FVector
---@param Wavelength number
---@param Period number
---@param Time number
---@param Function integer
---@param Falloff integer
---@return UWaveScalar
function UWaveScalar:SetWaveScalar(Magnitude, Position, Wavelength, Period, Time, Function, Falloff) end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UWaveScalar:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UWaveScalar:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UWaveScalar:AddAssetUserDataOfClass(InUserDataClass) end


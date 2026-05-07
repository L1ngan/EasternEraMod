---@class UAsyncPhysicsInputComponent : UActorComponent
---@field private DataClass TSubclassOf<UAsyncPhysicsData>
---@field private BufferedData TArray<UAsyncPhysicsData>
---@field private DataToConsume UAsyncPhysicsData
---@field private DataToWrite UAsyncPhysicsData
local UAsyncPhysicsInputComponent = {}

---@param AsyncPhysicsData UAsyncPhysicsData
function UAsyncPhysicsInputComponent:ServerRPCBufferInput(AsyncPhysicsData) end

---Get the async physics data to write to. This data will make its way to the async physics tick on client and server. Should not be called from async tick
---@return UAsyncPhysicsData
function UAsyncPhysicsInputComponent:GetDataToWrite() end

---Get the async physics data to execute logic off of. This data should not be modified and will NOT make its way back. Should be called from async tick
---@return UAsyncPhysicsData
function UAsyncPhysicsInputComponent:GetDataToConsume() end

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAsyncPhysicsInputComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UAsyncPhysicsInputComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UAsyncPhysicsInputComponent:AddAssetUserDataOfClass(InUserDataClass) end


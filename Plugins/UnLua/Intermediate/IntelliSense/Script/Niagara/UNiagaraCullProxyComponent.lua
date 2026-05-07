---A specialization of UNiagaraComponent that can act as a proxy for many other NiagaraComponents that have been culled by scalability.
---@class UNiagaraCullProxyComponent : UNiagaraComponent
---@field public Instances TArray<FNiagaraCulledComponentInfo> @Array of additional instance transforms. This component will be rendered at it's own transform and additionally at each of these transforms.
local UNiagaraCullProxyComponent = {}

---Checks whether or not an instance of the provided AssetUserData class is contained.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNiagaraCullProxyComponent:HasAssetUserDataOfClass(InUserDataClass) end

---Returns an instance of the provided AssetUserData class if it's contained in the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return UAssetUserData
function UNiagaraCullProxyComponent:GetAssetUserDataOfClass(InUserDataClass) end

---Creates and adds an instance of the provided AssetUserData class to the target asset.
---@param InUserDataClass TSubclassOf_UAssetUserData_
---@return boolean
function UNiagaraCullProxyComponent:AddAssetUserDataOfClass(InUserDataClass) end


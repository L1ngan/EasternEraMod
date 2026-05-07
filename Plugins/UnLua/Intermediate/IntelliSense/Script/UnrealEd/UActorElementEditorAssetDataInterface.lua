---@class UActorElementEditorAssetDataInterface : UActorElementAssetDataInterface
local UActorElementEditorAssetDataInterface = {}

---Returns the asset data for the given handle, if it exists.
---@param InElementHandle FScriptTypedElementHandle
---@return FAssetData
function UActorElementEditorAssetDataInterface:GetAssetData(InElementHandle) end

---Returns any asset datas for content objects referenced by handle.
---If the given handle itself has valid asset data, it should be returned as the last element of the array.
---@param InElementHandle FScriptTypedElementHandle
---@return TArray_FAssetData_
function UActorElementEditorAssetDataInterface:GetAllReferencedAssetDatas(InElementHandle) end


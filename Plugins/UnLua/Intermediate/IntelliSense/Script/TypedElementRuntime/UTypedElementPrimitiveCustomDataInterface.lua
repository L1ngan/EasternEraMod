---@class UTypedElementPrimitiveCustomDataInterface : UInterface
local UTypedElementPrimitiveCustomDataInterface = {}

---Sets a single Primitive's CustomData value
---@param InElementHandle FScriptTypedElementHandle
---@param CustomDataIndex integer
---@param CustomDataValue number
---@param bMarkRenderStateDirty boolean @[opt] 
function UTypedElementPrimitiveCustomDataInterface:SetCustomDataValue(InElementHandle, CustomDataIndex, CustomDataValue, bMarkRenderStateDirty) end

---Sets all Primitive's CustomData values
---@param InElementHandle FScriptTypedElementHandle
---@param CustomDataFloats TArray_number_
---@param bMarkRenderStateDirty boolean @[opt] 
function UTypedElementPrimitiveCustomDataInterface:SetCustomData(InElementHandle, CustomDataFloats, bMarkRenderStateDirty) end


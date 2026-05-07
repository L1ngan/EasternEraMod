---Script exposure for FScriptTypedElementHandle.
---@class UTypedElementHandleLibrary : UObject
local UTypedElementHandleLibrary = {}

---Release this handle and set it back to an empty state.
---@param ElementHandle FScriptTypedElementHandle @[out] 
function UTypedElementHandleLibrary.Release(ElementHandle) end

---Are these two handles not equal?
---@param LHS FScriptTypedElementHandle
---@param RHS FScriptTypedElementHandle
---@return boolean
function UTypedElementHandleLibrary.NotEqual(LHS, RHS) end

---Has this handle been initialized to a valid element?
---@param ElementHandle FScriptTypedElementHandle
---@return boolean
function UTypedElementHandleLibrary.IsSet(ElementHandle) end

---Are these two handles equal?
---@param LHS FScriptTypedElementHandle
---@param RHS FScriptTypedElementHandle
---@return boolean
function UTypedElementHandleLibrary.Equal(LHS, RHS) end


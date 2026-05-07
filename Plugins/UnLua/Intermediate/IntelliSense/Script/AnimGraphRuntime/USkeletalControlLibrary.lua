---Exposes operations to be performed on a skeletal control anim node
---Note: Experimental and subject to change!
---@class USkeletalControlLibrary : UBlueprintFunctionLibrary
local USkeletalControlLibrary = {}

---Set the alpha value of this skeletal control
---@param SkeletalControl FSkeletalControlReference
---@param Alpha number
---@return FSkeletalControlReference
function USkeletalControlLibrary.SetAlpha(SkeletalControl, Alpha) end

---Get the alpha value of this skeletal control
---@param SkeletalControl FSkeletalControlReference
---@return number
function USkeletalControlLibrary.GetAlpha(SkeletalControl) end

---Get a skeletal control from an anim node (pure)
---@param Node FAnimNodeReference
---@param SkeletalControl FSkeletalControlReference @[out] 
---@param Result boolean @[out] 
function USkeletalControlLibrary.ConvertToSkeletalControlPure(Node, SkeletalControl, Result) end

---Get a skeletal control from an anim node
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FSkeletalControlReference
function USkeletalControlLibrary.ConvertToSkeletalControl(Node, Result) end


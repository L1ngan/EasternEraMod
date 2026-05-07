---Exposes operations that can be run on a Mirror node via Anim Node Functions such as "On Become Relevant" and "On Update".
---@class UMirrorAnimLibrary : UBlueprintFunctionLibrary
local UMirrorAnimLibrary = {}

---Set how long to blend using inertialization when switching mirrored state
---@param MirrorNode FMirrorAnimNodeReference
---@param InBlendTime number
---@return FMirrorAnimNodeReference
function UMirrorAnimLibrary.SetMirrorTransitionBlendTime(MirrorNode, InBlendTime) end

---Set the mirror state
---@param MirrorNode FMirrorAnimNodeReference
---@param bInMirror boolean
---@return FMirrorAnimNodeReference
function UMirrorAnimLibrary.SetMirror(MirrorNode, bInMirror) end

---Get how long to blend using inertialization when switching mirrored state
---@param MirrorNode FMirrorAnimNodeReference
---@return number
function UMirrorAnimLibrary.GetMirrorTransitionBlendTime(MirrorNode) end

---Get MirrorDataTable used to perform mirroring
---@param MirrorNode FMirrorAnimNodeReference
---@return UMirrorDataTable
function UMirrorAnimLibrary.GetMirrorDataTable(MirrorNode) end

---Get the mirror state
---@param MirrorNode FMirrorAnimNodeReference
---@return boolean
function UMirrorAnimLibrary.GetMirror(MirrorNode) end

---Get a mirror context from an anim node context (pure)
---@param Node FAnimNodeReference
---@param MirrorNode FMirrorAnimNodeReference @[out] 
---@param Result boolean @[out] 
function UMirrorAnimLibrary.ConvertToMirrorNodePure(Node, MirrorNode, Result) end

---Get a mirror node context from an anim node context
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FMirrorAnimNodeReference
function UMirrorAnimLibrary.ConvertToMirrorNode(Node, Result) end


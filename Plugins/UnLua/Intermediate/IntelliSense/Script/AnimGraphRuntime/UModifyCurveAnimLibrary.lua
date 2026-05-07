---Exposes operations that can be run on a Modify Curve Node via Anim Node Functions such as "On Become Relevant" and "On Update".
---@class UModifyCurveAnimLibrary : UBlueprintFunctionLibrary
local UModifyCurveAnimLibrary = {}

---@param ModifyCurveNode FModifyCurveAnimNodeReference
---@param InCurveMap TMap_string__number_
---@return FModifyCurveAnimNodeReference
function UModifyCurveAnimLibrary.SetCurveMap(ModifyCurveNode, InCurveMap) end

---@param ModifyCurveNode FModifyCurveAnimNodeReference
---@param InMode EModifyCurveApplyMode
---@return FModifyCurveAnimNodeReference
function UModifyCurveAnimLibrary.SetApplyMode(ModifyCurveNode, InMode) end

---@param ModifyCurveNode FModifyCurveAnimNodeReference
---@param InAlpha number
---@return FModifyCurveAnimNodeReference
function UModifyCurveAnimLibrary.SetAlpha(ModifyCurveNode, InAlpha) end

---@param ModifyCurveNode FModifyCurveAnimNodeReference
---@return EModifyCurveApplyMode
function UModifyCurveAnimLibrary.GetApplyMode(ModifyCurveNode) end

---@param ModifyCurveNode FModifyCurveAnimNodeReference
---@return number
function UModifyCurveAnimLibrary.GetAlpha(ModifyCurveNode) end

---Get a modify curve context from an anim node context (pure)
---@param Node FAnimNodeReference
---@param ModifyCurveNode FModifyCurveAnimNodeReference @[out] 
---@param Result boolean @[out] 
function UModifyCurveAnimLibrary.ConvertToModifyCurveNodePure(Node, ModifyCurveNode, Result) end

---Get a modify curve node context from an anim node context
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FModifyCurveAnimNodeReference
function UModifyCurveAnimLibrary.ConvertToModifyCurveNode(Node, Result) end


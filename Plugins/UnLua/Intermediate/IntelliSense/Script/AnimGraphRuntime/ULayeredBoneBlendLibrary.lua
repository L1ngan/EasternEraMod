---Exposes operations to be performed on a layered bone blend anim node.
---@class ULayeredBoneBlendLibrary : UBlueprintFunctionLibrary
local ULayeredBoneBlendLibrary = {}

---Sets the currently-used blend mask for a blended input pose by name.
---@param UpdateContext FAnimUpdateContext
---@param LayeredBoneBlend FLayeredBoneBlendReference
---@param PoseIndex integer
---@param BlendMaskName string
---@return FLayeredBoneBlendReference
function ULayeredBoneBlendLibrary.SetBlendMask(UpdateContext, LayeredBoneBlend, PoseIndex, BlendMaskName) end

---Get the number of poses that a layered bone blend node has (this does not include the base pose)
---@param LayeredBoneBlend FLayeredBoneBlendReference
---@return integer
function ULayeredBoneBlendLibrary.GetNumPoses(LayeredBoneBlend) end

---Get a layered bone blend context from an anim node context.
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FLayeredBoneBlendReference
function ULayeredBoneBlendLibrary.ConvertToLayeredBoneBlend(Node, Result) end

---Get a layered bone blend context from an anim node context (pure).
---@param Node FAnimNodeReference
---@param LayeredBoneBlend FLayeredBoneBlendReference @[out] 
---@param Result boolean @[out] 
function ULayeredBoneBlendLibrary.ConvertToLayeredBlendPerBonePure(Node, LayeredBoneBlend, Result) end


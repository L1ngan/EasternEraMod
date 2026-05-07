---Exposes operations to be performed on a rigid body anim node
---@class UAnimNodeRigidBodyLibrary : UBlueprintFunctionLibrary
local UAnimNodeRigidBodyLibrary = {}

---Set the physics asset on the rigid body anim graph node (RBAN).
---@param Node FRigidBodyAnimNodeReference
---@param PhysicsAsset UPhysicsAsset
---@return FRigidBodyAnimNodeReference
function UAnimNodeRigidBodyLibrary.SetOverridePhysicsAsset(Node, PhysicsAsset) end

---Get a rigid body anim node context from an anim node context (pure)
---@param Node FAnimNodeReference
---@param RigidBodyAnimNode FRigidBodyAnimNodeReference @[out] 
---@param Result boolean @[out] 
function UAnimNodeRigidBodyLibrary.ConvertToRigidBodyAnimNodePure(Node, RigidBodyAnimNode, Result) end

---Get a rigid body anim node context from an anim node context
---@param Node FAnimNodeReference
---@param Result EAnimNodeReferenceConversionResult @[out] 
---@return FRigidBodyAnimNodeReference
function UAnimNodeRigidBodyLibrary.ConvertToRigidBodyAnimNode(Node, Result) end


---Describes a reference to an existing (as in, not imported) material. Note that the material is referenced
---via the UInterchangeFactoryBaseNode::CustomReferenceObject member.
---The idea is that mesh / actor factory nodes can reference one of these nodes as a slot dependency, and
---Interchange will assign that existing material to the corresponding slot during import
---@class UInterchangeMaterialReferenceFactoryNode : UInterchangeBaseMaterialFactoryNode
local UInterchangeMaterialReferenceFactoryNode = {}


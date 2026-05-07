---Any constant class data an anim node uses should be derived from this type.
---@class FAnimNodeConstantData
---@field private AnimClassInterface TScriptInterface<UAnimClassInterface> @The class we are part of
---@field private NodeIndex integer @The index of the node for this constant data block in the class that it is held in. INDEX_NONE if this node is not in a generated class or is per-instance data.
local FAnimNodeConstantData = {}

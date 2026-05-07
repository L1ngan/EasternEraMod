---StateTree instance data is used to store the runtime state of a StateTree.
---The layout of the data is described in a FStateTreeInstanceDataLayout.
---Note: If FStateTreeInstanceData is placed on an struct, you must call AddStructReferencedObjects() manually,
---             as it is not automatically called recursively.
---Note: Serialization is supported only for FArchive::IsModifyingWeakAndStrongReferences(), that is replacing object references.
---@class FStateTreeInstanceData
local FStateTreeInstanceData = {}

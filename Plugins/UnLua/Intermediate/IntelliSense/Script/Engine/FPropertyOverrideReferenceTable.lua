---@class FPropertyOverrideReferenceTable
---@field public SoftObjectPathTable TArray<FSoftObjectPath> @Contains SoftObjectPaths from the FSubObjectPropertyOverride serialization so that they can be properly fixed up (fixup redirectors) This table should not be changed outside of serialization of the SubObjectOverrides
---@field public ObjectReferences TSet<UObject> @Contains hard refs from the SoftObjectPathTable
---@field public bIsValid boolean @Support previous data this will be false until this override is resaved
local FPropertyOverrideReferenceTable = {}

---Custom packagemap implementation used to be able to capture exports such as UObject* references, names and NetTokens from external serialization.
---Exports written when using this packagemap will be captured in an array and serialized as an index.
---When reading using this packagemap exports will be read as an index and resolved by picking the corresponding entry from the provided array containing the data associated with the export.
---@class UIrisObjectReferencePackageMap : UPackageMap
local UIrisObjectReferencePackageMap = {}


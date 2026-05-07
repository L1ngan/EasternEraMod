---Stores information about a parameter collection that this material references, used to know when the material needs to be recompiled.
---@class FMaterialParameterCollectionInfo
---@field public StateId FGuid @Id that the collection had when this material was last compiled.
---@field public ParameterCollection UMaterialParameterCollection @The collection which this material has a dependency on.
local FMaterialParameterCollectionInfo = {}

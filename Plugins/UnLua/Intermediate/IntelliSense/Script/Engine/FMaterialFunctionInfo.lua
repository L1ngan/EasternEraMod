---Stores information about a function that this material references, used to know when the material needs to be recompiled.
---@class FMaterialFunctionInfo
---@field public StateId FGuid @Id that the function had when this material was last compiled.
---@field public Function UMaterialFunctionInterface @The function which this material has a dependency on.
local FMaterialFunctionInfo = {}

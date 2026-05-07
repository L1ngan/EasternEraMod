---A Material Function is a collection of material expressions that can be reused in different materials
---@class UMaterialFunctionInterface : UObject
---@field protected EditorOnlyData UMaterialFunctionInterfaceEditorOnlyData
---@field public StateId FGuid @Used by materials using this function to know when to recompile.
---@field protected MaterialFunctionUsage EMaterialFunctionUsage @The intended usage of this function, required for material layers.
---@field public CombinedInputTypes integer
---@field public CombinedOutputTypes integer
---@field public ThumbnailInfo UThumbnailInfo @Information for thumbnail rendering
local UMaterialFunctionInterface = {}


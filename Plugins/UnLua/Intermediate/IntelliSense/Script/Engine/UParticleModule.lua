---@class UParticleModule : UObject
---@field public bSpawnModule boolean @If true, the module performs operations on particles during Spawning
---@field public bUpdateModule boolean @If true, the module performs operations on particles during Updating
---@field public bFinalUpdateModule boolean @If true, the module performs operations on particles during final update
---@field public bUpdateForGPUEmitter boolean @If true, the module performs operations on particles during update and/or final update for GPU emitters
---@field public bCurvesAsColor boolean @If true, the module displays FVector curves as colors
---@field public b3DDrawMode boolean @If true, the module should render its 3D visualization helper
---@field public bSupported3DDrawMode boolean @If true, the module supports rendering a 3D visualization helper
---@field public bEnabled boolean @If true, the module is enabled
---@field public bEditable boolean @If true, the module has had editing enabled on it
---@field public LODDuplicate boolean @If true, this flag indicates that auto-generation for LOD will result in an exact duplicate of the module, regardless of the percentage. If false, it will result in a module with different settings.
---@field public bSupportsRandomSeed boolean @If true, the module supports RandomSeed setting
---@field public bRequiresLoopingNotification boolean @If true, the module should be told when looping
---@field public LODValidity integer @The LOD levels this module is present in. Bit-flags are used to indicate validity for a given LOD level. For example, if         ((1 << Level) & LODValidity) != 0 then the module is used in that LOD.
---@field public ModuleEditorColor FColor @The color to draw the modules curves in the curve editor.     If bCurvesAsColor is true, it overrides this value.
local UParticleModule = {}


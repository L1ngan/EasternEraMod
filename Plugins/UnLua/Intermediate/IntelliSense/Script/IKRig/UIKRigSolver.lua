---NOTE on UIKRigSolver upgrade path:
---In 5.6 the UObject's in IK Rig have been replaced with runtime-friendly UStruct based data structures
---As part of this change, solvers based on UIKRigSolver will no longer function and must be upgraded to the new base FIKRigSolverBase.
---Old assets using UIKRigSolver-based solvers can be loaded and patched using the ConvertToInstancedStruct() function (see below)
---All solvers that ship with the IKRig plugin have been ported to the new system and should work exactly as before.
---@class UIKRigSolver : UObject
---@field private bIsEnabled boolean
local UIKRigSolver = {}


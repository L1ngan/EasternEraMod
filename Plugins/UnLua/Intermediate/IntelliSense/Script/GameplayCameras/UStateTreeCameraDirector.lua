---A camera director that runs a StateTree to specify which camera rigs should be active
---any given frame.
---@class UStateTreeCameraDirector : UCameraDirector
---@field public StateTreeReference FStateTreeReference @The StateTree to execute. Must have been created with the CameraDirectorStateTreeSchema.
local UStateTreeCameraDirector = {}


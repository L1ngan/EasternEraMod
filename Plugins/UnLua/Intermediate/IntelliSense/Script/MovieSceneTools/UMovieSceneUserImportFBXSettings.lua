---@class UMovieSceneUserImportFBXSettings : UObject
---@field public bMatchByNameOnly boolean @Match fbx node names to sequencer node names
---@field public bForceFrontXAxis boolean @Convert the scene from FBX coordinate system to UE coordinate system with front X axis instead of -Y
---@field public bConvertSceneUnit boolean @Convert the scene from FBX unit to UE unit(centimeter)
---@field public ImportUniformScale number @Import Uniform Scale
---@field public bCreateCameras boolean @Whether to create cameras if they don't already exist in the level.
---@field public bReplaceTransformTrack boolean @Whether to replace the existing transform track or create a new track/section
---@field public bCorrectForTransformOrigin boolean @When enabled, the current transform origin of the focused sequence will be removed from any imported transforms. If the FBX was exported with a transform origin, this will prevent it from being applied twice.
---@field public bReduceKeys boolean @Whether to remove keyframes within a tolerance from the imported tracks
---@field public ReduceKeysTolerance number @The tolerance for reduce keys
local UMovieSceneUserImportFBXSettings = {}


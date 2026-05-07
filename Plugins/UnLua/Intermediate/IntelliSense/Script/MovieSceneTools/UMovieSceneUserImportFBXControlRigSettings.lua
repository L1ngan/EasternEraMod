---@class UMovieSceneUserImportFBXControlRigSettings : UObject
---@field public ImportedFileName string @Imported File Name
---@field public ImportedStartTime FFrameNumber @Imported File Duration in Seconds
---@field public ImportedEndTime FFrameNumber @Imported File
---@field public ImportedNodeNames TArray<string> @List Of Imported Names in FBX File
---@field public ImportedFrameRate string @Incoming File Frame Rate
---@field public FindAndReplaceStrings TArray<FControlFindReplaceString> @Strings In Imported Node To Find And Replace
---@field public bStripNamespace boolean @Will strip any namespace from the FBX node names
---@field public bForceFrontXAxis boolean @Convert the scene from FBX coordinate system to UE coordinate system with front X axis instead of -Y
---@field public bConvertSceneUnit boolean @Convert the scene from FBX unit to UE unit(centimeter)
---@field public ImportUniformScale number @Import Uniform Scale
---@field public bImportOntoSelectedControls boolean @Whether or not import onto selected controls or all controls
---@field public TimeToInsertOrReplaceAnimation FFrameNumber @Time that we insert or replace the imported animation
---@field public bInsertAnimation boolean @Whether or not we insert or replace, by default we insert
---@field public bSpecifyTimeRange boolean @Whether to import over specific Time Range
---@field public StartTimeRange FFrameNumber @Start Time Range To Import
---@field public EndTimeRange FFrameNumber @End Time Range To Import
---@field public ControlChannelMappings TArray<FControlToTransformMappings> @Mappings for how Control Rig Control Attributes Map to the incoming Transforms
local UMovieSceneUserImportFBXControlRigSettings = {}

---Load the default or metahuman preset into the current mappings
---@param bMetaHumanPreset boolean
function UMovieSceneUserImportFBXControlRigSettings:LoadControlMappingsFromPreset(bMetaHumanPreset) end


---@class UMovieSceneUserExportFBXControlRigSettings : UObject
---@field public ExportFileName string @Imported File Name
---@field public FbxExportCompatibility EFbxExportCompatibility @This will set the fbx sdk compatibility when exporting to fbx file. The default value is 2013
---@field public bASCII boolean @If enabled, save as ascii instead of binary
---@field public bForceFrontXAxis boolean @Convert the scene from FBX coordinate system to UE coordinate system with front X axis instead of -Y
---@field public bExportOnlySelectedControls boolean @Whether or not import onto selected controls or all controls
---@field public ControlChannelMappings TArray<FControlToTransformMappings> @Mappings for how Control Rig Control Attributes Map to the incoming Transforms
---@field public bExportLocalTime boolean @If enabled, export sequencer animation in its local time, relative to its sequence.
local UMovieSceneUserExportFBXControlRigSettings = {}

---Load the default or metahuman preset into the current mappings
---@param bMetaHumanPreset boolean
function UMovieSceneUserExportFBXControlRigSettings:LoadControlMappingsFromPreset(bMetaHumanPreset) end


---This is a set of helper functions to access various parts of the Sequencer API via Python. Because Sequencer itself is not suitable for exposing, most functionality
---gets wrapped by UObjects that have an easier API to work with. This UObject provides access to these wrapper UObjects where needed.
---@class USequencerToolsFunctionLibrary : UBlueprintFunctionLibrary
local USequencerToolsFunctionLibrary = {}

---@param InCaptureSettings UMovieSceneCapture
---@param OnFinishedCallback Delegate
---@return boolean
function USequencerToolsFunctionLibrary.RenderMovie(InCaptureSettings, OnFinishedCallback) end

---* Links a LevelSequence's SkeletalMesh binding to an existing anim sequence.
---*
---* @@InSequence Sequence to link from
---* @@AnimSequence The AnimSequence to link to.
---* @@ExportOption The export options that should be used when baking the LevelSequence.
---* @@InBinding Binding that has a skelmesh component on it
---@param Sequence ULevelSequence
---@param AnimSequence UAnimSequence
---@param ExportOptions UAnimSeqExportOption
---@param Binding FMovieSceneBindingProxy
---@return boolean
function USequencerToolsFunctionLibrary.LinkAnimSequence(Sequence, AnimSequence, ExportOptions, Binding) end

---@return boolean
function USequencerToolsFunctionLibrary.IsRenderingMovie() end

---Check if an endpoint is valid and can be used to create movie scene event.
---@param InEndpoint FSequencerQuickBindingResult
---@return boolean
function USequencerToolsFunctionLibrary.IsEventEndpointValid(InEndpoint) end

---* Import FBX onto Passed in Bindings
---*
---* @@InWorld World to import to
---* @@InSequence InSequence to import
---* @@InBindings InBindings to import
---* @@InImportFBXSettings Settings to control import.
---* @@InImportFileName Path to fbx file to import from
---* @@InPlayer Player to bind to
---@param InWorld UWorld
---@param InSequence ULevelSequence
---@param InBindings TArray_FMovieSceneBindingProxy_
---@param InImportFBXSettings UMovieSceneUserImportFBXSettings
---@param InImportFilename string
---@param ActorContext ALevelSequenceActor @[opt] 
---@return boolean
function USequencerToolsFunctionLibrary.ImportLevelSequenceFBX(InWorld, InSequence, InBindings, InImportFBXSettings, InImportFilename, ActorContext) end

---* Import FBX onto a control rig with the specified track name
---*
---* @@InWorld World to import to
---* @@InSequence InSequence to import
---* @@ActorWithControlRigTrack ActorWithControlRigTrack The name of the actor with the control rig track we are importing onto
---* @@SelectedControlRigNames  List of selected control rig names. Will use them if  ImportFBXControlRigSettings->bImportOntoSelectedControls is true
---* @@ImportFBXControlRigSettings Settings to control import.
---* @@InImportFileName Path to fbx file to create
---@param World UWorld
---@param InSequence ULevelSequence
---@param ActorWithControlRigTrack string
---@param SelectedControlRigNames TArray_string_
---@param ImportFBXControlRigSettings UMovieSceneUserImportFBXControlRigSettings
---@param ImportFilename string
---@return boolean
function USequencerToolsFunctionLibrary.ImportFBXToControlRig(World, InSequence, ActorWithControlRigTrack, SelectedControlRigNames, ImportFBXControlRigSettings, ImportFilename) end

---@param InWorld UWorld
---@param InSequence ULevelSequence
---@param InObject TArray_UObject_
---@param InRange FSequencerScriptingRange
---@return TArray_FSequencerBoundObjects_
function USequencerToolsFunctionLibrary.GetObjectBindings(InWorld, InSequence, InObject, InRange) end

---* Get the link to the level sequence if it exists on this anim sequence
---*
---* @@InAnimSequence AnimSequence to get links from
---* @@return Returns the link object if it exists, nullptr if it doesn't
---@param InAnimSequence UAnimSequence
---@return UAnimSequenceLevelSequenceLink
function USequencerToolsFunctionLibrary.GetLevelSequenceLinkFromAnimSequence(InAnimSequence) end

---@param InWorld UWorld
---@param InSequence ULevelSequence
---@param InBindings TArray_FMovieSceneBindingProxy_
---@param InRange FSequencerScriptingRange
---@return TArray_FSequencerBoundObjects_
function USequencerToolsFunctionLibrary.GetBoundObjects(InWorld, InSequence, InBindings, InRange) end

---* Get the links to the anim sequences if they exist on this level sequence
---*
---* @@InLevelSequence LevelSequence to get links from
---* @@return Returns the link object if it exists, nullptr if it doesn't
---@param InLevelSequence ULevelSequence
---@return ULevelSequenceAnimSequenceLink
function USequencerToolsFunctionLibrary.GetAnimSequenceLinkFromLevelSequence(InLevelSequence) end

---* Export Passed in Bindings and Tracks to FBX
---@param InParams FSequencerExportFBXParams
---@return boolean
function USequencerToolsFunctionLibrary.ExportLevelSequenceFBX(InParams) end

---Exports an FBX from the section to key of the control rig track of the actor with the given name.
---@param Sequence ULevelSequence
---@param ActorWithControlRigTrack string
---@param ExportFBXControlRigSettings UMovieSceneUserExportFBXControlRigSettings
---@return boolean
function USequencerToolsFunctionLibrary.ExportFBXFromControlRig(Sequence, ActorWithControlRigTrack, ExportFBXControlRigSettings) end

---* Export Passed in Binding as an Anim Sequence. Note use this when you want to export without an open Level Sequence in Sequencer, and
---* know that all spawnables that may be dynamically created and destroyed will be valid. If the spawnable won't be fully created and you have
---* an open Sequencer use UControlRigSequencerEditorLibrary::ExportAnimSequenceFromSequencer instead.
---*
---* @@InWorld World to export
---* @@InSequence Sequence to export
---* @@AnimSequence The AnimSequence to save into.
---* @@ExportOption The export options for the sequence.
---* @@InBinding Binding to export that has a skelmesh component on it
---* @@InAnimSequenceFilename File to create
---* @@bCreateLink If true will create a link between the animation sequence and the level sequence
---@param World UWorld
---@param Sequence ULevelSequence
---@param AnimSequence UAnimSequence
---@param ExportOption UAnimSeqExportOption
---@param Binding FMovieSceneBindingProxy
---@param bCreateLink boolean
---@return boolean
function USequencerToolsFunctionLibrary.ExportAnimSequence(World, Sequence, AnimSequence, ExportOption, Binding, bCreateLink) end

---Create a quick binding to an actor's member method to be used in an event sequence.
---@param InSequence UMovieSceneSequence
---@param InObject UObject
---@param InFunctionName string
---@param bCallInEditor boolean
---@return FSequencerQuickBindingResult
function USequencerToolsFunctionLibrary.CreateQuickBinding(InSequence, InObject, InFunctionName, bCallInEditor) end

---Create an event from a previously created blueprint endpoint and a payload. The resulting event should be added only
---to a channel of the section that was given as a parameter.
---@param InSequence UMovieSceneSequence
---@param InSection UMovieSceneEventSectionBase
---@param InEndpoint FSequencerQuickBindingResult
---@param InPayload TArray_string_
---@return FMovieSceneEvent
function USequencerToolsFunctionLibrary.CreateEvent(InSequence, InSection, InEndpoint, InPayload) end

---* Clear all linked anim sequences between this level sequence and any linked anim sequences
---*
---* @@InLevelSequence LevelSequence to clean links for
---@param InLevelSequence ULevelSequence
function USequencerToolsFunctionLibrary.ClearLinkedAnimSequences(InLevelSequence) end

function USequencerToolsFunctionLibrary.CancelMovieRender() end


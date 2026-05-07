---This Take Recorder Source can record an actor from the World's properties.
---Records the properties of the actor and the components on the actor and safely
---handles new components being spawned at runtime and the actor being destroyed.
---@class UTakeRecorderActorSource : UTakeRecorderSource
---@field public Target TSoftObjectPtr<AActor> @Reference to the actor in the world that should have it's properties recorded.
---@field public RecordType ETakeRecorderActorRecordType @Should this actor be recorded as a Possessable in Sequencer? If so the resulting Object Binding will not create a Spawnable copy of this object and instead will possess this object in the level.
---@field public bRecordParentHierarchy boolean @Whether to ensure that the parent hierarchy is also recorded. If recording to possessable and the parent is not recorded, the recorded transforms will be in local space since the child will still be attached to the parent in the level after recording.  If recording to spawnable and the parent is not recorded, the recorded transforms will be in global space since the child will not be attached to the parent in the level.
---@field public bReduceKeys boolean @Whether to perform key-reduction algorithms as part of the recording
---@field public RecordedProperties UActorRecorderPropertyMap @Lists the properties and components on the current actor and whether or not each property will be recorded into a track in the resulting Level Sequence.
---@field public IncludeAnimationNames TArray<string> @Include only the animation bones/curves that match this list
---@field public ExcludeAnimationNames TArray<string> @Exclude all animation bones/curves that match this list
---@field public TargetLevelSequence ULevelSequence @The level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording.
---@field public RootLevelSequence ULevelSequence @The root or uppermost level sequence that this source is being recorded into. Set during PreRecording, null after PostRecording.
---@field public FactorySettings TArray<UObject> @Dynamically created list of settings objects for the different factories that are recording something on this actor. If a Factory has no properties it can record the settings objects will not get created. Only one instance of this object exists for a factory and the factory recorder will be passed the shared instance.
---@field public TrackRecorders TArray<UMovieSceneTrackRecorder> @An array of section recorders created during the recording process that are capturing data about the actor/components. Will be an empty list when a recording is not in progress.
---@field public ParentSource UTakeRecorderActorSource @The parent actor source that generated this actor source (ie. through parenting or as an attached component). Null after PostRecording
---@field public bShowProgressDialog boolean @Show Dialog during the (possibly) slow parts of the take recording
local UTakeRecorderActorSource = {}

---Set the Target actor that we are going to record. Will reset the Recorded Property Map to defaults.
---@param InTarget TSoftObjectPtr_AActor_
function UTakeRecorderActorSource:SetSourceActor(InTarget) end

---* Remove the given actor from TakeRecorderSources.
---*
---* @@param InActor The actor to remove from the sources
---* @@param InSources The sources from where to remove the actor
---@param InActor AActor
---@param InSources UTakeRecorderSources
function UTakeRecorderActorSource.RemoveActorFromSources(InActor, InSources) end

---@return TSoftObjectPtr_AActor_
function UTakeRecorderActorSource:GetSourceActor() end

---* Add a take recorder source for the given actor.
---*
---* @@param InActor The actor to add a source for
---* @@param InSources The sources to add the actor to
---* @@return The added source or the source already present with the same actor
---@param InActor AActor
---@param InSources UTakeRecorderSources
---@return UTakeRecorderSource
function UTakeRecorderActorSource.AddSourceForActor(InActor, InSources) end


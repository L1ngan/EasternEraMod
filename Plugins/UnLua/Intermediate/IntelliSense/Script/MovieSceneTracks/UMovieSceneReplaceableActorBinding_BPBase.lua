---Base class for Custom Replaceable Binding classes implemented by Blueprints
---@class UMovieSceneReplaceableActorBinding_BPBase : UMovieSceneReplaceableBindingBase
---@field public BindingTypePrettyName string @Name to show in Sequencer for the custom binding type.
---@field public BindingTypeTooltip string @Tooltip to show in Sequencer for the custom binding type.
---@field public CustomBindingPriority integer @Priority with which to consider this binding type over others when considering binding an object to Sequencer. As a guideline, a priority of BaseEnginePriority will ensure that engine types(such as Spawnable Actor, Replaceable Actor) will be higher priority than your custom binding, and so your binding type will not automatically be created(but may be converted to manually). A priority of BaseCustomPriority and higher will ensure that your binding type is considered more highly than engine types, so if your binding type's 'SupportsBindingCreationFromObject' returns true for an object, your binding type will be created by default rather than an engine type.
---@field public PreviewSpawnableType TSubclassOf<UMovieSceneSpawnableBindingBase> @Preview Spawnable Type to use for this replaceable
local UMovieSceneReplaceableActorBinding_BPBase = {}

---Called on the binding to determine whether this binding type supports creating a binding from the passed in object.
---@param SourceObject UObject
---@return boolean
function UMovieSceneReplaceableActorBinding_BPBase:BP_SupportsBindingCreationFromObject(SourceObject) end

---* Must be implemented. Called during non-editor/runtime to resolve the binding dynamically. In editor worlds/Sequencer will instead use the PreviewSpawnable binding to spawn a preview object.
---* If no object is returned, Sequencer's BindingOverrides can still be used to dynamically bind the object.
---@param ResolveContext FMovieSceneBindingResolveContext
---@return FMovieSceneBindingResolveResult
function UMovieSceneReplaceableActorBinding_BPBase:BP_ResolveRuntimeBinding(ResolveContext) end

---Called after binding creation to allow the replaceable to initialize any data members from the source object.
---@param SourceObject UObject
---@param OwnerMovieScene UMovieScene
function UMovieSceneReplaceableActorBinding_BPBase:BP_InitReplaceableBinding(SourceObject, OwnerMovieScene) end


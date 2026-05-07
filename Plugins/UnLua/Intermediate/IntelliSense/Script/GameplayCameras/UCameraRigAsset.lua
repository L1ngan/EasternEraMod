---A camera rig asset, which runs a hierarchy of camera nodes to drive
---the behavior of a camera.
---@class UCameraRigAsset : UBaseCameraObject
---@field public RootNode UCameraNode @Root camera node.
---@field public GameplayTags FGameplayTagContainer @The gameplay tags on this camera rig.
---@field public EnterTransitions TArray<UCameraRigTransition> @List of enter transitions for this camera rig.
---@field public ExitTransitions TArray<UCameraRigTransition> @List of exist transitions for this camera rig.
---@field public InitialOrientation ECameraRigInitialOrientation @Default orientation initialization when this camera rig is activated.
---@field public BuildStatus ECameraBuildStatus @The current build state of this camera rig.
---@field private Guid FGuid @The camera rig's unique ID.
---@field private NodeGraphNodePos FIntVector2 @Position of the camera rig node in the node graph editor.
---@field private TransitionGraphNodePos FIntVector2 @Position of the camera rig node in the transition graph editor.
---@field private NodeGraphNodeComment string @User-written comment in the node graph editor.
---@field private TransitionGraphNodeComment string @User-written comment in the transition graph editor.
---@field private AllNodeTreeObjects TArray<UObject> @A list of all the camera nodes, including the 'loose' ones that aren't connected to the root node, and therefore would be GC'ed if we didn't hold them here.
---@field private AllTransitionsObjects TArray<UObject> @Similar to AllNodeTreeObjects, but for the transitions graph.
local UCameraRigAsset = {}

---Check if the asset has a gameplay tag that matches against the specified tag (expands to include parents of asset tags)
---@param TagToCheck FGameplayTag
---@return boolean
function UCameraRigAsset:HasMatchingGameplayTag(TagToCheck) end

---Check if the asset has gameplay tags that matches against any of the specified tags (expands to include parents of asset tags)
---@param TagContainer FGameplayTagContainer
---@return boolean
function UCameraRigAsset:HasAnyMatchingGameplayTags(TagContainer) end

---Check if the asset has gameplay tags that matches against all of the specified tags (expands to include parents of asset tags)
---@param TagContainer FGameplayTagContainer
---@return boolean
function UCameraRigAsset:HasAllMatchingGameplayTags(TagContainer) end

---Gets the owned gameplay tags for the asset.  Exposed to allow redirects of existing GetOwnedGameplayTags calls.  In Blueprints, new nodes will use BlueprintGameplayTagLibrary's version.
---@return FGameplayTagContainer
function UCameraRigAsset:BP_GetOwnedGameplayTags() end


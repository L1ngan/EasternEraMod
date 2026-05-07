---MovieScenePossessable is a "typed slot" used to allow the MovieScene to control an already-existing object
---@class FMovieScenePossessable
---@field public Tags TArray<string> @Array of tags that can be used for grouping and categorizing.
---@field private Guid FGuid @Unique identifier of the possessable object. // @@todo sequencer: Guids need to be handled carefully when the asset is duplicated (or loaded after being copied on disk). //                                     Sometimes we'll need to generate fresh Guids.
---@field private Name string @Name label for this slot // @@todo sequencer: Should be editor-only probably
---@field private PossessedObjectClass TSoftClassPtr<UObject> @Type of the object we'll be possessing
---@field private ParentGuid FGuid @GUID relating to this possessable's parent, if applicable.
---@field private SpawnableObjectBindingID FMovieSceneObjectBindingID @Optional object binding ID if this possessable possesses a spawnable
local FMovieScenePossessable = {}

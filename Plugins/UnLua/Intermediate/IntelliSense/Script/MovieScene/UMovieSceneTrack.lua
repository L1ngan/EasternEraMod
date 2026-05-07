---Base class for a track in a Movie Scene
---@class UMovieSceneTrack : UMovieSceneDecorationContainerObject
---@field public EvalOptions FMovieSceneTrackEvalOptions @General evaluation options for a given track
---@field public DisplayOptions FMovieSceneTrackDisplayOptions @General display options for a given track
---@field public ConditionContainer FMovieSceneConditionContainer @Optional dynamic condition for whether this track/any of the sections on this track evaluates at runtime.
---@field protected bIsEvalDisabled boolean @Whether evaluation of this track has been disabled via mute/solo
---@field protected RowsDisabled TArray<integer> @Which rows have been disabled via mute/solo
---@field protected bIsLocalEvalDisabled boolean @Whether evaluation of this track has been disabled locally (not serialized with the asset)
---@field protected LocalRowsDisabled TArray<integer> @Which rows have been disabled locally (not serialized with the asset)
---@field private EvaluationFieldGuid FGuid @The guid of the object signature that the EvaluationField member relates to
---@field private EvaluationFieldVersion integer @The version of the logic in PopulateEvaluationTree when the EvaluationField was cached
---@field private EvaluationField FMovieSceneTrackEvaluationField @An array of entries that define when specific sections should be evaluated on this track
---@field private TrackRowMetadata TMap<integer, FMovieSceneTrackRowMetadata> @Optional extra metadata tied to specific track rows.
---@field protected ObjectBindingID FGuid @The object binding that this track resides within
---@field protected TrackTint FColor @This track's tint color
---@field protected SortingOrder integer @This folder's desired sorting order
---@field protected bSupportsDefaultSections boolean @Does this track support the creation of a default section when created?
---@field protected bSupportsConditions boolean @Does this track support conditions
local UMovieSceneTrack = {}


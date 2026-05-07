---@class FMovieSceneTemplateGenerationLedger
---@field public LastTrackIdentifier FMovieSceneTrackIdentifier
---@field public TrackSignatureToTrackIdentifier TMap<FGuid, FMovieSceneTrackIdentifier> @Map of track signature to array of track identifiers that it created
---@field public SubSectionRanges TMap<FGuid, FMovieSceneFrameRange> @Map of sub section ranges that exist in a template
local FMovieSceneTemplateGenerationLedger = {}

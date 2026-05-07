---Implements a movie scene track for media playback.
---@class UMovieSceneMediaTrack : UMovieSceneNameableTrack
---@field public bSynchronousScrubbing boolean @Force synchronous frame requests *while* manually scrubbing the media track, at the cost of blocking the editor. This can be valuable for always maintaining alignment of media & CG while working.
---@field private MediaSections TArray<UMovieSceneSection> @List of all media sections.
local UMovieSceneMediaTrack = {}


---Derived GeometryCacheTrack class, used for Transform animation.
---\note FGeometryCacheTrackStreamableRenderResource keeps a reference to the track.
---Be sure to keep the implementation of this class valid so it properly releases
---the render resoruce before making any changes to this object that may affect the render thread.
---@class UGeometryCacheTrackStreamable : UGeometryCacheTrack
---@field public Codec UGeometryCacheCodecBase @Codec for this track
---@field private StartSampleTime number
local UGeometryCacheTrackStreamable = {}


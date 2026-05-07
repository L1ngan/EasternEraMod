---Decoration that is added to a UMovieScene in order to define dynamic scaling anchors to a the sequence.
---Anchors are defined by scaling 'drivers' which control both the initial (unscaled) position of their anchors,
---and their scaled position.
---@class UMovieSceneScalingAnchors : UMovieScenePlayRateCurve
---@field private ScalingDrivers TArray<TScriptInterface<UMovieSceneScalingDriver>>
---@field private InitialAnchors TMap<FGuid, FMovieSceneScalingAnchor>
---@field private ScalingGroups TMap<FGuid, FMovieSceneAnchorsScalingGroup>
local UMovieSceneScalingAnchors = {}


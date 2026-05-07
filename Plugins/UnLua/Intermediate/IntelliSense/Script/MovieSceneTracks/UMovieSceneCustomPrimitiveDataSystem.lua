---System responsible for tracking and animating custom primitive data entities.
---Operates on the following component types from FMovieSceneTracksComponentTypes:
---Instantiation: Tracks any ScalarParameterName with a CustomPrimitiveData tag on a BoundObject where that BoundObject is a Primitive Component.
---               Manages adding BlendChannelInputs and Outputs where multiple entities animate the same custom primitive data index.
---Evaluation:    Visits any BoundObject with the supported parameter name and either a BlendChannelOutput component
---               or no BlendChannelInput, and applies the resulting parameter to the Custom Primitive Data on the Primitive Component.
---@class UMovieSceneCustomPrimitiveDataSystem : UMovieSceneEntitySystem
---@field public DoubleBlenderSystem UMovieScenePiecewiseDoubleBlenderSystem
local UMovieSceneCustomPrimitiveDataSystem = {}


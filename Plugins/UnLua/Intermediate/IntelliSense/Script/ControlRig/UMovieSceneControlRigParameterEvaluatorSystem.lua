---System that tracks and evaluates control rig control parameters and spaces.
---This system is relatively complex, and implements the following behavior:
---Instantiation:
---  - Initializes rigs by ensuring the anim instance set up and bound to the correct rig
---  - Tracks contriguting control rig parameters by rg
---  - Caches pre-animated state
---  - Assigns accumulation indices for each parameter
---  - Caches initial values if necessary
---Evaluation:
---  - (GameThread) Evaluates any base rigs by calling SetDoNotKey(true) on the section, and updating the control rig track in the anim instance with its weight (if active)
---  - (GameThread) Evaluates constraints
---  - (Async)      Evaluates space channels
---  - (Async)      Accumulates all control rig parameters and spaces into a single parameter buffer for each control rig
---  - (GameThread) Applies the control rig parameter buffer to the rig
---  - (Async)      Resets the 'do not key' states on the sections
---@class UMovieSceneControlRigParameterEvaluatorSystem : UMovieSceneEntitySystem
---@field public DoubleBlenderSystem UMovieScenePiecewiseDoubleBlenderSystem @Cached blender system used for blending parameters
local UMovieSceneControlRigParameterEvaluatorSystem = {}


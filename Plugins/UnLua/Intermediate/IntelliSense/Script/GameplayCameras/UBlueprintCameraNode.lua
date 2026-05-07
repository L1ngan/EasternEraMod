---A camera node that runs arbitrary Blueprint logic.
---@class UBlueprintCameraNode : UCameraNode
---@field private CameraNodeEvaluatorTemplate UBlueprintCameraNodeEvaluator @The camera node evaluator to instantiate and run.
---@field private CameraNodeEvaluatorOverrides FCustomCameraNodeParameters @Overrides for the evaluator instance.
local UBlueprintCameraNode = {}


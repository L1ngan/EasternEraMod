---Blueprint node that, given a camera rig, lets the user set the values of all exposed parameters
---on that camera rig. Any camera rig running with the specific evaluation data will use those
---values.
---@class UK2Node_SetCameraRigParameters : UK2Node_CameraRigBase
---@field private BlendableParameterPinNames TArray<string>
---@field private DataParameterPinNames TArray<string>
local UK2Node_SetCameraRigParameters = {}


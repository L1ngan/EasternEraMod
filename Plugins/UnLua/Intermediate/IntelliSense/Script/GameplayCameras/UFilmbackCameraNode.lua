---A camera node that configures the camera filmback.
---@class UFilmbackCameraNode : UCameraNode
---@field public SensorWidth FFloatCameraParameter @Horizontal size of filmback or digital sensor, in mm.
---@field public SensorHeight FFloatCameraParameter @Vertical size of filmback or digital sensor, in mm.
---@field public SensorHorizontalOffset FFloatCameraParameter @Horizontal offset of the sensor, in mm.
---@field public SensorVerticalOffset FFloatCameraParameter @Vertical offset of the sensor, in mm.
---@field public Overscan FFloatCameraParameter @Sensor overscan, in percentages (0% for no increase).
---@field public ConstrainAspectRatio FBooleanCameraParameter @Whether to constrain the aspect ratio of the evaluated camera.
---@field public OverrideAspectRatioAxisConstraint FBooleanCameraParameter @Whether to override the default aspect ratio axis constraint defined on the player controller.
---@field public AspectRatioAxisConstraint integer @Defines the axis along which to constrain the aspect ratio of the evaluated camera. Only used when ConstrainAspectRatio is false and OverrideAspectRatioAxisConstraint is true.
local UFilmbackCameraNode = {}


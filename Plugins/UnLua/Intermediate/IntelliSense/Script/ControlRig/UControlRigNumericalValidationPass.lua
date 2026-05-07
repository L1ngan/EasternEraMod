---Used to perform a numerical comparison of the poses
---@class UControlRigNumericalValidationPass : UControlRigValidationPass
---@field public bCheckControls boolean @If set to true the pass will validate the poses of all bones
---@field public bCheckBones boolean @If set to true the pass will validate the poses of all bones
---@field public bCheckCurves boolean @If set to true the pass will validate the values of all curves
---@field public TranslationPrecision number @The threshold under which we'll ignore a precision issue in the pass
---@field public RotationPrecision number @The threshold under which we'll ignore a precision issue in the pass (in degrees)
---@field public ScalePrecision number @The threshold under which we'll ignore a precision issue in the pass
---@field public CurvePrecision number @The threshold under which we'll ignore a precision issue in the pass
---@field private EventNameA string
---@field private EventNameB string
---@field private Pose FRigPose
local UControlRigNumericalValidationPass = {}


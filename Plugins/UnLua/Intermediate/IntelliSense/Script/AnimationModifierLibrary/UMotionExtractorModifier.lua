---Extracts motion from a bone in the animation and bakes it into a curve
---@class UMotionExtractorModifier : UAnimationModifier
---@field public BoneName string @Bone we are going to generate the curve from
---@field public RelativeToBoneName string @Bone which we'll use as the reference frame to generate this curve from. Space must be RelativeToBone to use this.
---@field public MotionType EMotionExtractor_MotionType @Type of motion to extract
---@field public Axis EMotionExtractor_Axis @Axis to get the value from
---@field public bRemoveCurveOnRevert boolean @Whether we want to remove the curve when we revert or re-apply modifier               Disabling this allows you to modify settings and create a new curve each time you re-apply the modifier               Enabling this is the preferred setting when using a modifier that's applied in bulk and you may want to remove/rename curves
---@field public bRelativeToFirstFrame boolean @Whether to extract the bone transforms relative to the first frame in the animation
---@field public Space EMotionExtractor_Space @Reference frame/space to use when extracting the bone pose.
---@field public bAbsoluteValue boolean @Whether to convert the final value to absolute (positive)
---@field public MathOperation EMotionExtractor_MathOperation @Optional math operation to apply on the extracted value before add it to the generated curve
---@field public Modifier number @Right operand for the math operation selected
---@field public bNormalize boolean @Whether we want a normalized value (0 - 1)
---@field public SampleRate integer @Rate used to sample the animation
---@field public bUseCustomCurveName boolean @Whether we want to specify a custom name for the curve. If false, the name of the curve will be auto generated based on the data we are going to extract
---@field public CustomCurveName string @Custom name for the curve we are going to generate.
local UMotionExtractorModifier = {}


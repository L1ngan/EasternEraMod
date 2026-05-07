---Constraint Set up
---@class FConstraint
---@field public TargetBone FBoneReference @Target Bone this is constraint to
---@field public OffsetOption EConstraintOffsetOption @Maintain offset based on refpose or not. None - no offset Offset_RefPose - offset is created based on reference pose In the future, we'd like to support custom offset, not just based on ref pose
---@field public TransformType ETransformConstraintType @What transform type is constraint to - Translation, Rotation, Scale OR Parent. Parent overrides all component
---@field public PerAxis FFilterOptionPerAxis @Per axis filter options - applied in their local space not in world space
local FConstraint = {}

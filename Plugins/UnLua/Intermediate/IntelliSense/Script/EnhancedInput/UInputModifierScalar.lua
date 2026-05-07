---Scalar
---Scales input by a set factor per axis
---@class UInputModifierScalar : UInputModifier
---@field public Scalar FVector @The scalar that will be applied to the input value. For example, if you have a scalar of (2.0, 2.0, 2.0), each input axis will be multiplied by 2.0. Note: This will do nothing on boolean input action types, as they can only be true or false.
local UInputModifierScalar = {}


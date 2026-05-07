---The base class for a node that can handle and accumulate raw player input values.
---@class UCameraRigInput2DSlot : UInput2DCameraNode
---@field public InputSlotParameters FCameraRigInputSlotParameters @Input processing parameters.
---@field public ClampX FCameraParameterClamping @Clamping of the final input value.
---@field public ClampY FCameraParameterClamping @Clamping of the final input value.
---@field public NormalizeX FCameraParameterNormalization @Normalization of the final input value.
---@field public NormalizeY FCameraParameterNormalization @Normalization of the final input value.
---@field public BuiltInVariable EBuiltInVector2dCameraVariable @The variable to use to blend with other input slots.
---@field public CustomVariable FVector2dCameraVariableReference @The variable to use to blend with other input slots.
---@field private TransientVariableID FCameraVariableID
---@field private VariableID FCameraVariableID
local UCameraRigInput2DSlot = {}


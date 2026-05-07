---The base class for a node that can handle and accumulate raw player input values.
---@class UCameraRigInput1DSlot : UInput1DCameraNode
---@field public InputSlotParameters FCameraRigInputSlotParameters @Input processing parameters.
---@field public Clamp FCameraParameterClamping @Clamping of the final input value.
---@field public Normalize FCameraParameterNormalization @Normalization of the final input value.
---@field public BuiltInVariable EBuiltInDoubleCameraVariable @The variable to use to blend with other input slots.
---@field public CustomVariable FDoubleCameraVariableReference @The variable to use to blend with other input slots.
---@field private TransientVariableID FCameraVariableID
---@field private VariableID FCameraVariableID
local UCameraRigInput1DSlot = {}


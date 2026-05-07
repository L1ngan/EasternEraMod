---Blend List by Enum, it changes based on enum input that enters
---@class FAnimNode_BlendListByEnum : FAnimNode_BlendListBase
---@field private EnumToPoseIndex TArray<integer> @Mapping from enum value to BlendPose index; there will be one entry per entry in the enum; entries out of range always map to pose index 0
---@field private ActiveEnumValue integer @The currently selected pose (as an enum value)
local FAnimNode_BlendListByEnum = {}

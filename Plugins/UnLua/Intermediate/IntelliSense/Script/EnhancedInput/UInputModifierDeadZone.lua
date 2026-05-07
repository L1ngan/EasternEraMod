---Dead Zone
---Input values within the range LowerThreshold -> UpperThreshold will be remapped from 0 -> 1.
---Values outside this range will be clamped.
---@class UInputModifierDeadZone : UInputModifier
---@field public LowerThreshold number @Threshold below which input is ignored This value should always be lower then the UpperThreshold.
---@field public UpperThreshold number @Threshold above which input is clamped to 1
---@field public Type EDeadZoneType
local UInputModifierDeadZone = {}


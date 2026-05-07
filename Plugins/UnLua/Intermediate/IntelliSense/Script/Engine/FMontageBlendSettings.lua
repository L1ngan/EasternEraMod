---Montage blend settings. Can be used to overwrite default Montage settings on Play/Stop
---@class FMontageBlendSettings
---@field public BlendProfile UBlendProfile @Blend Profile to use for this blend
---@field public Blend FAlphaBlendArgs @AlphaBlend options (time, curve, etc.)
---@field public BlendMode EMontageBlendMode @Type of blend mode (Standard vs Inertial)
local FMontageBlendSettings = {}

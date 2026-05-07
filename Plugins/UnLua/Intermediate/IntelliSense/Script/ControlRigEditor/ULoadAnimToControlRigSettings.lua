---settings used when loading animation sequences into a control rig section
---@class ULoadAnimToControlRigSettings : UObject
---@field public bOntoSelectedControls boolean @Load animation onto only selected controls
---@field public bReduceKeys boolean @Reduce Keys
---@field public SmartReduce FSmartReduceParams
---@field public bUseCustomTimeRange boolean
---@field public StartFrame FFrameNumber
---@field public EndFrame FFrameNumber
---@field public bResetControls boolean @Reset controls to initial value on every frame
local ULoadAnimToControlRigSettings = {}


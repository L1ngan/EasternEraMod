---@class UMaterialExpressionTime : UMaterialExpression
---@field public bIgnorePause boolean @This time continues advancing regardless of whether the game is paused.
---@field public bOverride_Period boolean @Enables or disables the Period value.
---@field public Period number @Period at which to wrap around time
local UMaterialExpressionTime = {}


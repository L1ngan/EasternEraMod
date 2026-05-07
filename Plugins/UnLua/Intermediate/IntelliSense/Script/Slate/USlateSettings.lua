---Settings that control Slate functionality
---@class USlateSettings : UObject
---@field public bExplicitCanvasChildZOrder boolean @Allow children of SConstraintCanvas to share render layers. Children must set explicit ZOrder on their slots to control render order. Recommendation: Enable for mobile platforms.
local USlateSettings = {}


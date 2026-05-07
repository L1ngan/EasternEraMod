---Overlap info consisting of the primitive and the body that is overlapping
---@class FOverlapInfo
---@field public bFromSweep boolean
---@field public OverlapInfo FHitResult @Information for both sweep and overlap queries. Different parts are valid depending on bFromSweep. If bFromSweep is true then FHitResult is completely valid just like a regular sweep result. If bFromSweep is false only FHitResult::Component, FHitResult::Actor, FHitResult::Item are valid as this is really just an FOverlapResult
local FOverlapInfo = {}

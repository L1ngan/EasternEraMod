---Potential issue raised with a mapping request
---@class FMappingQueryIssue
---@field public Issue EMappingQueryIssue
---@field public BlockingContext UInputMappingContext @Input context that contains a blocking action bound to the queried key
---@field public BlockingAction UInputAction @Action within the input context that caused the blockage
local FMappingQueryIssue = {}

---Structure used to automatically convert blueprintcallable functions (that have blueprint parameter) calls (in bp graph)
---into their never versions (with class param instead of blueprint).
---@class FBlueprintCallableFunctionRedirect
---@field public ClassName string
---@field public OldFunctionName string
---@field public NewFunctionName string
---@field public BlueprintParamName string
---@field public ClassParamName string
local FBlueprintCallableFunctionRedirect = {}

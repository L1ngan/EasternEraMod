---@class UBehaviorTreeManager : UObject
---@field public MaxDebuggerSteps integer @limit for recording execution steps for debugger
---@field protected LoadedTemplates TArray<FBehaviorTreeTemplateInfo> @initialized tree templates
---@field protected ActiveComponents TArray<UBehaviorTreeComponent>
local UBehaviorTreeManager = {}


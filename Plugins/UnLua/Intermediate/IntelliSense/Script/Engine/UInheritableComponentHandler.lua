---@class UInheritableComponentHandler : UObject
---@field private Records TArray<FComponentOverrideRecord> @All component records
---@field private UnnecessaryComponents TArray<UActorComponent> @List of components that were marked unnecessary, need to keep these around so it doesn't regenerate them when a child asks for one
local UInheritableComponentHandler = {}


---Actor container class used to duplicate actors during cells streaming in PIE
---@class UActorContainer : UObject
---@field public Actors TMap<string, AActor>
---@field public RuntimeLevel ULevel @Can be used to resolve the Actor Level while they are outered to the UActorContainer in a PIE duplication
local UActorContainer = {}


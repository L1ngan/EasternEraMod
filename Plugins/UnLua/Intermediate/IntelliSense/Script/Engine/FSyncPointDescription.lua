---Description of a registered sync event that will happen once per frame according to specific rules
---@class FSyncPointDescription
---@field public RegisteredName string @Name of the sync point that will be used for lookup
---@field public EventType ESyncPointEventType @The kind of task async task that is used to implement this sync point
---@field public ActivationRules ESyncPointActivationRules @Rules for when and how a sync point can be activated
---@field public FirstPossibleTickGroup integer @The first tick group this could be triggered during
---@field public LastPossibleTickGroup integer @The last possible tick group this will be triggered during, and when it will be forcibly triggered as a backup
---@field public PrerequisiteSyncGroups TArray<string> @Array of other sync groups that this will tick after. To match the normal tick behavior these will be ignored if thee sync point is not active
local FSyncPointDescription = {}

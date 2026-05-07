---Per Actor overrides, includes a map of Sub-Object name to FSubObjectPropertyOverride data
---@class FActorPropertyOverride
---@field public Actor TWeakObjectPtr<AActor> @Used to Serialize newly overriden ActorDescs
---@field public SubObjectOverrides TMap<string, FSubObjectPropertyOverride>
---@field public ReferenceTable FPropertyOverrideReferenceTable
local FActorPropertyOverride = {}

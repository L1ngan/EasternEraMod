---This submix class can be derived from for submixes that output to a parent submix.
---@class USoundSubmixWithParentBase : USoundSubmixBase
---@field public ParentSubmix USoundSubmixBase
---@field public DynamicParentSubmix TMap<integer, USoundSubmixBase>
---@field protected bIsDynamic boolean @Is Submix Dynamic. (i.e. allows connect/disconnect at runtime.)  *
local USoundSubmixWithParentBase = {}


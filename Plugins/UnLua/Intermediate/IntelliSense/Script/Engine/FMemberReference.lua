---
---       delegate signatures); consider renaming to FFieldReference
---@class FMemberReference
---@field protected MemberParent UObject @Most often the Class that this member is defined in. Could be a UPackage if it is a native delegate signature function (declared globally). Should be NULL if bSelfContext is true.
---@field protected MemberScope string
---@field protected MemberName string @Name of variable
---@field protected MemberGuid FGuid @The Guid of the variable
---@field protected bSelfContext boolean @Whether or not this should be a "self" context
---@field protected bWasDeprecated boolean @Whether or not this property has been deprecated
local FMemberReference = {}

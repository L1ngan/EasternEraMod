---@class FSimpleMemberReference
---@field public MemberParent UObject @Most often the Class that this member is defined in. Could be a UPackage if it is a native delegate signature function (declared globally).
---@field public MemberName string @Name of the member
---@field public MemberGuid FGuid @The Guid of the member
local FSimpleMemberReference = {}

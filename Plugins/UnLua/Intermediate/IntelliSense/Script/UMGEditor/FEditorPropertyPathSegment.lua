---@class FEditorPropertyPathSegment
---@field private Struct UStruct @The owner of the path segment (ie. What class or structure was this property from)
---@field private MemberName string @The member name in the structure this segment represents.
---@field private MemberGuid FGuid @The member guid in this structure this segment represents.  If this is valid it should be used instead of Name to get the true name.
---@field private IsProperty boolean @true if property, false if function
local FEditorPropertyPathSegment = {}

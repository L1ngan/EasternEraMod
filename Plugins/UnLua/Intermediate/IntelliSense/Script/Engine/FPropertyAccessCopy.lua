---A property copy, represents a one-to-many copy operation
---@class FPropertyAccessCopy
---@field private AccessIndex integer @Index into the library's Accesses
---@field private DestAccessStartIndex integer @Index of the first of the library's DescAccesses
---@field private DestAccessEndIndex integer @Index of the last of the library's DescAccesses
---@field private Type EPropertyAccessCopyType
local FPropertyAccessCopy = {}

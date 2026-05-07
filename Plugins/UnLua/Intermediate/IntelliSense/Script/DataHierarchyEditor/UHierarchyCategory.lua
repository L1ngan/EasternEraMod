---A category, potentially pointing at the section it belongs to. Only top-level categories can belong to sections by default.
---Inherit from this to add your own properties.
---@class UHierarchyCategory : UHierarchyElement
---@field private Category string
---@field private Tooltip string @The tooltip used when the user is hovering this category
---@field private Section UHierarchySection
local UHierarchyCategory = {}


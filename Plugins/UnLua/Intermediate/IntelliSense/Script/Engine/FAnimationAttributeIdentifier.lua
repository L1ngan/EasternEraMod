---Script-friendly structure for identifying an attribute (curve).
---Wrapping the attribute name, bone name and index, and underlying data type for use within the AnimDataController API.
---@class FAnimationAttributeIdentifier
---@field protected Name string
---@field protected BoneName string
---@field protected BoneIndex integer
---@field protected ScriptStruct UScriptStruct
---@field protected ScriptStructPath FSoftObjectPath
local FAnimationAttributeIdentifier = {}

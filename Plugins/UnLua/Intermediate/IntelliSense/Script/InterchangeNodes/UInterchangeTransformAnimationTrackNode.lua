---Class to represent an animation on the transform of a camera, light, or scene node.
---@class UInterchangeTransformAnimationTrackNode : UInterchangeAnimationTrackNode
local UInterchangeTransformAnimationTrackNode = {}

---Set which channels of this animation should be used. This is a bitwise mask.
---Bits are interpreted as follow:
---   None          = 0x000,
---   TranslationX  = 0x001,
---   TranslationY  = 0x002,
---   TranslationZ  = 0x004,
---   Translation   = TranslationX | TranslationY | TranslationZ,
---   RotationX     = 0x008,
---   RotationY     = 0x010,
---   RotationZ     = 0x020,
---   Rotation      = RotationX | RotationY | RotationZ,
---   ScaleX        = 0x040,
---   ScaleY        = 0x080,
---   ScaleZ        = 0x100,
---   Scale         = ScaleX | ScaleY | ScaleZ,
---   AllTransform  = Translation | Rotation | Scale,
---   Weight        = 0x200,
---   All           = Translation | Rotation | Scale | Weight,
---@param AttributeValue integer
---@return boolean
function UInterchangeTransformAnimationTrackNode:SetCustomUsedChannels(AttributeValue) end

---Get which channels of this animation should be used. This is a bitmask.
---See SetCustomUsedChannels for description of bitmask
---@param AttributeValue integer @[out] 
---@return boolean
function UInterchangeTransformAnimationTrackNode:GetCustomUsedChannels(AttributeValue) end


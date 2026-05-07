---Structure for collision response templates.
---@class FCollisionResponseTemplate
---@field public Name string @Name of collision profile
---@field public CollisionEnabled integer @Type of collision used for things with this profile
---@field public bCanModify boolean @If this profile can be modified by games
---@field public ObjectTypeName string @Collision object type to use for things with this profile
---@field public CustomResponses TArray<FResponseChannel> @Types of objects that this physics objects will collide with.
---@field public HelpMessage string @Help message for collision profile *
local FCollisionResponseTemplate = {}

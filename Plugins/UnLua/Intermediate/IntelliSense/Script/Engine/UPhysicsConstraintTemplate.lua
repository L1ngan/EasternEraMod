---@class UPhysicsConstraintTemplate : UObject
---@field public DefaultInstance FConstraintInstance
---@field public ProfileHandles TArray<FPhysicsConstraintProfileHandle> @Handles to the constraint profiles applicable to this constraint
---@field private DefaultProfile FConstraintProfileProperties @When no profile is selected, use these settings. Only needed in editor as we serialize it into DefaultInstance on save
local UPhysicsConstraintTemplate = {}


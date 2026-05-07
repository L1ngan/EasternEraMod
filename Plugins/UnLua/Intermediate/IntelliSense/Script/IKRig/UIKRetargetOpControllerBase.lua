---This is the base class for defining a custom controller for a given retarget op type.
---Controllers provide an API for editing ops from blueprint or python.
---To use a controller:
---1. Get a controller by calling UIKRetargeterController::GetOpController(int InOpIndex)
---2. Cast the returned UIKRetargetOpControllerBase* to the type of controller used by the op you want to modify.
---3. Call the public getter/setters to modify the op as desired
---NOTE: these controllers are necessary because the op UStructs do not support UFunctions
---@class UIKRetargetOpControllerBase : UObject
local UIKRetargetOpControllerBase = {}


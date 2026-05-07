---Validates Widget Blueprints that have any Enhanced Input
---nodes in them to ensure that they have the correct "bAutomaticallyRegisterInputOnConstruction"
---setting value.
---Widgets require bAutomaticallyRegisterInputOnConstruction to be true in order to
---receive callbacks from Enhanced Input.
---@class UEnhancedInputUserWidgetValidator : UEditorValidatorBase
local UEnhancedInputUserWidgetValidator = {}


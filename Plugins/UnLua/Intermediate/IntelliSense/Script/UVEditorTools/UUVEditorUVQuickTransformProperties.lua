---UV Quick Transform Only Settings
---We are using a subclass here to "trick" the details customization system, allowing us to reuse a lot of the logic
---without having to build new operators or new customizations.
---See FUVEditorUVTransformToolDetails and FUVEditorUVQuickTransformToolDetails, where we provide two customizations
---which present different views of the "same" properties - one with all settings and one with simply the quick transform settings.
---This is designed to be used in the future where we want to provide a quick translate "tool" when no other tools are running.
---@class UUVEditorUVQuickTransformProperties : UUVEditorUVTransformProperties
local UUVEditorUVQuickTransformProperties = {}


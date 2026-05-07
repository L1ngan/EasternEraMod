---@class UTransformGizmoEditorSettings : UDeveloperSettings
---@field public TransformGizmoSize number
---@field public bEnableArcballRotate boolean @Allow arcball rotation with rotate widget (updates the setting with the same name found in Level Editor Viewport Settings)
---@field public bEnableScreenRotate boolean @Allow screen rotation with rotate widget (updates the setting with the same name found in Level Editor Viewport Settings)
---@field public bEnableAxisDrawing boolean @If true, the Edit widget of a transform will display the axis (updates the setting with the same name found in Level Editor Viewport Settings)
---@field public bEnableCombinedTranslateRotate boolean @Allow translate/rotate widget (updates the setting with the same name found in Level Editor Viewport Settings)
---@field public bUseExperimentalGizmo boolean @If true, the new TRS gizmos will be used.
---@field public GizmosParameters FGizmosParameters
local UTransformGizmoEditorSettings = {}


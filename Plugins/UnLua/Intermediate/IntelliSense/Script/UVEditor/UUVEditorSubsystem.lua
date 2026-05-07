---The subsystem is meant to hold any UV editor operations that are not UI related (those are
---handled by the toolkit); however, in our case, most of our operations are wrapped up inside
---tools and the UV mode.
---Instead, the subsystem deals with some global UV asset editor things- it manages existing
---instances (we can't rely on the asset editor subsystem for this because the UV editor is
---not the primary editor for meshes), and figures out what we can launch the editor on.
---@class UUVEditorSubsystem : UEditorSubsystem
---@field protected ToolTargetManager UToolTargetManager @Used to let the subsystem figure out whether targets are valid. New factories should be added here in Initialize() as they are developed.
local UUVEditorSubsystem = {}


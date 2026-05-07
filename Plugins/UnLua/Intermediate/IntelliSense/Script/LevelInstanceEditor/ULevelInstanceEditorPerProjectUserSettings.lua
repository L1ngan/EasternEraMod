---@class ULevelInstanceEditorPerProjectUserSettings : UDeveloperSettings
---@field public bAlwaysShowDialog boolean @If false, create dialog will not be shown and last settings will be used.
---@field public PivotType ELevelInstancePivotType
---@field public bIsSubSelectionEnabled boolean @Allow Read Only Selection of Level Instance Level Actors
---@field public bIsViewportSubSelectionEnabled boolean @Allow Read Only Selection of Level Instance Level Actors in the Viewport (Shortcut: Shift + Mouse Scroll Up/Down)
---@field public bKeepFoldersDuringBreak boolean @When the Level Instance is broken via "Level->Break..", its actors will be placed inside the folder the LI is inside of, under a subfolder with the name of the Level Instance, and also keeping their original folder structure. So if i.e. the Level Instance Actor is called "Desert/LI_House2", and an actor inside is named "Lights/Light_Sun", the actor will be moved to "Desert/LI_House2/Lights/Light_Sun" in the outer level. If this flag is not set, actors will be placed either in the root folder of the outer level (but their original folders from the LI kept), or, if "Current Folder" is set, they'll be moved there without any subfolders.
local ULevelInstanceEditorPerProjectUserSettings = {}


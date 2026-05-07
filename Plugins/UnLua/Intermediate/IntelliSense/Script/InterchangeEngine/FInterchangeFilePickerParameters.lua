---@class FInterchangeFilePickerParameters
---@field public bAllowMultipleFiles boolean @If true, the user will be able to select multiple files.
---@field public Title string @If not empty, this will override the default title.
---@field public DefaultPath string @Set the default open path that the dialog will show to the user.
---@field public bShowAllFactoriesExtension boolean @If true, the user will be able to select any unreal editor factory + interchange file types.
---@field public ExtraFormats TArray<string> @Add some extension to the picker. Format text item that way TEXT("fbx;Filmbox")
local FInterchangeFilePickerParameters = {}

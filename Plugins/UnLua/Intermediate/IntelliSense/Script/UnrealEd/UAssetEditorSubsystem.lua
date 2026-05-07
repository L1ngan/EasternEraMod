---UAssetEditorSubsystem
---@class UAssetEditorSubsystem : UEditorSubsystem
---@field private OwnedAssetEditors TArray<UAssetEditor>
local UAssetEditorSubsystem = {}

---Tries to open an editor for all of the specified assets.
---If any of the assets are already open, it will not create a new editor for them.
---If all assets are of the same type, the supporting AssetTypeAction (if it exists) is responsible for the details of how to handle opening multiple assets at once.
---@param Assets TArray_UObject_
---@param OpenedMethod EAssetTypeActivationOpenedMethod @[opt] 
---@return boolean
function UAssetEditorSubsystem:OpenEditorForAssets(Assets, OpenedMethod) end

---Close all active editors for the supplied asset and return the number of asset editors that were closed
---@param Asset UObject
---@return integer
function UAssetEditorSubsystem:CloseAllEditorsForAsset(Asset) end


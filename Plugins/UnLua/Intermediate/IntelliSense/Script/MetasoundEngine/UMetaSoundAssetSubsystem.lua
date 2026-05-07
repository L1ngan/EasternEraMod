---@class UMetaSoundAssetSubsystem : UEngineSubsystem
local UMetaSoundAssetSubsystem = {}

---@param Directories TArray_FMetaSoundAssetDirectory_
function UMetaSoundAssetSubsystem:UnregisterAssetClassesInDirectories(Directories) end

---Replaces dependencies in a MetaSound with the given class name and version with another MetaSound with the given
---class name and version.  Can be asset or code-defined.  It is up to the caller to validate the two classes have
---matching interfaces (Swapping with classes of unmatched interfaces can leave MetaSound in non-executable state).
---@param InDirectories TArray_FMetaSoundAssetDirectory_
---@param OldClassName FMetasoundFrontendClassName
---@param NewClassName FMetasoundFrontendClassName
---@param OldVersion FMetasoundFrontendVersionNumber @[opt] 
---@param NewVersion FMetasoundFrontendVersionNumber @[opt] 
---@return boolean
function UMetaSoundAssetSubsystem:ReplaceReferencesInDirectory(InDirectories, OldClassName, NewClassName, OldVersion, NewVersion) end

---@param Directories TArray_FMetaSoundAssetDirectory_
function UMetaSoundAssetSubsystem:RegisterAssetClassesInDirectories(Directories) end

---@param DocInterface TScriptInterface_UMetaSoundDocumentInterface_
---@return boolean
function UMetaSoundAssetSubsystem:ReassignClassName(DocInterface) end

---Returns asset class info for the given MetaSound asset. Will attempt to get
---info without loading the asset if its tag data is up-to-date, or if set to force load, will load
---otherwise (synchronously and can be slow).  Returns true if asset is found, was MetaSound, and all data
---was retrieved successfully, false if not.
---@param InPath FTopLevelAssetPath
---@param OutDocInfo FMetaSoundDocumentInfo @[out] 
---@param OutInterfaceInfo FMetaSoundClassInterfaceInfo @[out] 
---@param bForceLoad boolean @[opt] 
---@return boolean
function UMetaSoundAssetSubsystem:FindAssetClassInfo(InPath, OutDocInfo, OutInterfaceInfo, bForceLoad) end


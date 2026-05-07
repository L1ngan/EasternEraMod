---The subsystem in charge of editor MetaSound functionality
---@class UMetaSoundEditorSubsystem : UEditorSubsystem
local UMetaSoundEditorSubsystem = {}

---Sets the visual location to InLocation of a given node InNode of a given builder's document.
---@param InBuilder UMetaSoundBuilderBase
---@param InNode FMetaSoundNodeHandle
---@param InLocation FVector2D
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundEditorSubsystem:SetNodeLocation(InBuilder, InNode, InLocation, OutResult) end

---If the given page name is implemented on the provided builder, sets the focused page of
---the provided builder to the associated page and sets the audition page to
---the provided name. If the given builder has an asset editor open, optionally opens or brings
---that editor's associated PageID into user focus.
---@param Builder UMetaSoundBuilderBase
---@param PageName string
---@param bOpenEditor boolean
---@param OutResult EMetaSoundBuilderResult @[out] 
function UMetaSoundEditorSubsystem:SetFocusedPage(Builder, PageName, bOpenEditor, OutResult) end

---Find graph input metadata (which includes editor only range information for floats) for a given input. If the metadata does not exist, create it.
---@param InBuilder UMetaSoundBuilderBase
---@param InputName string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return UMetaSoundFrontendMemberMetadata
function UMetaSoundEditorSubsystem:FindOrCreateGraphInputMetadata(InBuilder, InputName, OutResult) end

---Returns a builder for the given MetaSound asset. Returns null if provided a transient MetaSound. For finding builders for transient
---MetaSounds, use the UMetaSoundBuilderSubsystem's API (FindPatchBuilder, FindSourceBuilder, FindBuilderByName etc.)
---@param MetaSound TScriptInterface_UMetaSoundDocumentInterface_
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return UMetaSoundBuilderBase
function UMetaSoundEditorSubsystem:FindOrBeginBuilding(MetaSound, OutResult) end

---Build the given builder to a MetaSound asset
---For preset builders, TemplateSoundWave will override the template values from the referenced asset.
---@param InBuilder UMetaSoundBuilderBase
---@param Author string
---@param AssetName string
---@param PackagePath string
---@param OutResult EMetaSoundBuilderResult @[out] 
---@param TemplateSoundWave USoundWave @[opt] 
---@return TScriptInterface_UMetaSoundDocumentInterface_
function UMetaSoundEditorSubsystem:BuildToAsset(InBuilder, Author, AssetName, PackagePath, OutResult, TemplateSoundWave) end

---Add a builder listener for a builder which is used to add and remove custom editor builder delegates.
---@param InBuilder UMetaSoundBuilderBase
---@param OutResult EMetaSoundBuilderResult @[out] 
---@return UMetaSoundEditorBuilderListener
function UMetaSoundEditorSubsystem:AddBuilderDelegateListener(InBuilder, OutResult) end


---This asset type is used for Metasound assets that can only be used as nodes in other Metasound graphs.
---Because of this, they contain no required inputs or outputs.
---@class UMetaSoundPatch : UObject
---@field protected RootMetaSoundDocument FMetasoundFrontendDocument
---@field protected ReferencedAssetClassKeys TSet<string>
---@field protected ReferencedAssetClassObjects TSet<UObject>
---@field protected ReferenceAssetClassCache TSet<FSoftObjectPath>
---@field protected Graph UMetasoundEditorGraphBase
---@field protected EditorGraph UMetasoundEditorGraphBase
---@field public AssetClassID FGuid
---@field public RegistryInputTypes string
---@field public RegistryOutputTypes string
---@field public RegistryVersionMajor integer
---@field public RegistryVersionMinor integer
---@field public bIsPreset boolean
local UMetaSoundPatch = {}


---@class FMetaSoundBuilderOptions
---@field public Name string @Name of generated object. If object already exists, used as the base name to ensure new object is unique. If left 'None', creates unique name.
---@field public bForceUniqueClassName boolean @If the resulting MetaSound is building over an existing document, a unique class name will be generated, invalidating any referencing MetaSounds and registering the MetaSound as a new entry in the Frontend. If building a new document, option is ignored (new document always generates a unique class name).
---@field public bAddToRegistry boolean @If true, adds MetaSound to node registry, making it available for reference by other dynamically created MetaSounds.
---@field public ExistingMetaSound TScriptInterface<UMetaSoundDocumentInterface> @If set, builder overwrites the given MetaSound's document with the builder's copy (ignores the Name field above).
local FMetaSoundBuilderOptions = {}
